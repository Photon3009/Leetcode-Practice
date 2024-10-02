class Solution {
public:
    int climbStairs(int n) {
        // if(n==1) return 1;
        // if(n==2) return 2;
        // else return climbStairs(n-1)+climbStairs(n-2);
        // TLE exceeds for 45 for above sol
         if (n == 1) return 1;
  
  // dp array to store number of ways to reach each step
 vector<int> dp(n+2,0);
  
  dp[1] = 1; // 1 way to reach step 1
  dp[2] = 2; // 2 ways to reach step 2
  
  for (int i = 3; i <= n; i++) {
    dp[i] = dp[i - 1] + dp[i - 2];
  }
  
  return dp[n]; // Number of ways to reach the top
    }
};