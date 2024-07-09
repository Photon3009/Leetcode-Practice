class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size(); 
        stack<int> st; 
        int leftSmall [n], rightSmall [n]; 
        for(int i=0;i<n;i++)
        { 
            while(!st.empty() && heights [st.top()] >= heights[i])
            { st.pop();
            }
            if(st.empty())leftSmall [i] = 0; 
            else leftSmall[i]=st.top() + 1; 
            st.push(i); 
            
        } 
        
        // clear the stack to be re-used 
        while(!st.empty()) st.pop(); 
        
        for(int i=n-1;i>=0;i--)
        { while(!st.empty() && heights [st.top()] >= heights[i])
            { st.pop(); 
            }
             if(st.empty()) rightSmall [i] = n-1; 
             else rightSmall[i]=st.top()-1;
             st.push(i); 
        } 
             int maxA = 0;
              for(int i=0;i<n;i++) 
              { maxA = max(maxA, heights[i]*(rightSmall[i]-leftSmall[i] + 1));
              } 
              return maxA;
        // int res=0;
        // stack<int> st1;
        // stack<int> st2;
        // for(const auto& e: heights){
        //     res=max(res,e);
        //     int count=1;
        //     int ck=e;
        //     int sum=0;
        //     while(!st2.empty()){
        //         if(st2.top()>ck){
        //             sum=ck*++count;
        //             res=max(res,sum);
        //             }
        //         if(st2.top()<ck){
        //             sum=st2.top()*++count;
        //             res=max(res,sum);
        //             }
        //         if(st2.top()==ck){
        //             sum=ck*++count;
        //             res=max(res,sum);
        //             }
        //         ck=st2.top();
        //         st2.pop();
        //     }
        //     st1.push(e);
        //     st2=st1;
        // }
        // return res;
    }
};