class Solution {
    int f(int i, int j, vector<int>& nums, vector<vector<int>>& dp) {
        if (i == j) return 0;
        if (dp[i][j] != -1) return dp[i][j];
        
        int mini = 1e9;
        for (int k = i; k < j; k++) {
            int step = nums[i - 1] * nums[k] * nums[j] 
                       + f(i, k, nums, dp) 
                       + f(k + 1, j, nums, dp);
            if (step < mini) mini = step;
        }
        return dp[i][j] = mini;
    }

public:
    int matrixMultiplication(vector<int>& nums, int n = -1) {
        if (n == -1) n = nums.size();
        vector<vector<int>> dp(n, vector<int>(n, -1));
        return f(1, n - 1, nums, dp);
    }
};
