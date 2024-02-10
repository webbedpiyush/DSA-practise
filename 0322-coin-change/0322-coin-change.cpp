class Solution {
public:
    int solve(vector<int> &num , int x,vector<int> &dp) {
        if(x == 0) {
            return 0;
        }
        if(x < 0) {
            return INT_MAX;
        }
        
        if(dp[x] != -1) {
            return dp[x];
        }
        int maxi = INT_MAX;
        int ans;
        for(int i = 0;i<num.size();i++) {
            ans = solve(num,x - num[i],dp);
            if(ans != INT_MAX) {
                maxi = min(maxi ,1 + ans);
            }
        }
        return dp[x] = maxi;
    }

    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount+1,-1);
        int ans = solve(coins,amount,dp);
        return ans != INT_MAX ? ans : -1;
    }
};