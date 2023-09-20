class Solution {
public:
    int maxProduct(vector<int>& arr) {
        int n = arr.size(); // size of array.

        int maxProduct = arr[0];
        int minProduct = arr[0];
        int ans = arr[0];

        for (int i = 1; i < n; i++) {
            if (arr[i] < 0) {
                swap(maxProduct, minProduct);
            }

            maxProduct = max(arr[i], maxProduct * arr[i]);
            minProduct = min(arr[i], minProduct * arr[i]);

            ans = max(ans, maxProduct);
        }

        return ans;
    }
};