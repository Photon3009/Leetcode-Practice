class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
         if (matrix.empty() || matrix[0].empty()) return false;

    int m = matrix.size();
    int n = matrix[0].size();
    int left = 0, right = m * n - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        int row = mid / n;
        int col = mid % n;
        int midElement = matrix[row][col];
        
        if (midElement == target) {
            return true;  // Target found
        } else if (midElement < target) {
            left = mid + 1;  // Search right half
        } else {
            right = mid - 1;  // Search left half
        }
    }
    
    return false; 


    }
};