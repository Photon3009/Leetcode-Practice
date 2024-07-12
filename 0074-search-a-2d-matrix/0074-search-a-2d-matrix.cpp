class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int beg=0;
        int end=m-1;
        while(beg<=end){
            int mid=(beg+end)/2;
            if(matrix[mid][0]<=target&&target<=matrix[mid][n-1]){
                int beg1=0;
                int end1=n-1;
                while(beg1<=end1){
                    int mid1=(beg1+end1)/2;
                    if(target==matrix[mid][mid1]) return true;
                      if(target>matrix[mid][mid1]){
                        beg1=mid1+1;
                     }else{
                        end1=mid1-1;
                     }
                }
                return false;
            }
            if(target<matrix[mid][0]){
                end=mid-1;
            }
            else{
                beg=mid+1;
            }
        }
        return false;
    }
};