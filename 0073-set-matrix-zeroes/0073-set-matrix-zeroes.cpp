class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        map<int, int> rows, cols;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==0){
                    rows[i] = 1;
                    cols[j] = 1;
                }
            }
        }
          for (auto it = rows.begin(); it != rows.end(); it++) {
            int row = it->first;
            for (int i = 0; i < n; i++) {
                matrix[row][i] = 0;
            }
        }

        for (auto it = cols.begin(); it != cols.end(); it++) {
            int col = it->first;
            for (int i = 0; i < m; i++) {
                matrix[i][col] = 0;
            }
        }
    }
};