class Solution {
public:
    int maxArea(vector<int>& height) {
        int j=height.size()-1;
        int i=0;
        int vol=0;
        while(i<j){
            if(height[i]<height[j]){
                vol=max(vol,height[i]*(j-i));
                i++;
                continue;
            }else if(height[i]>height[j]){
                vol=max(vol,height[j]*(j-i));
                j--;
                continue;
            }else{
                vol=max(vol,height[i]*(j-i));
                i++;
                j--;
            }
        }
        return vol;
    }
};