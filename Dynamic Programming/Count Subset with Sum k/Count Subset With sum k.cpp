class Solution {
public:
    bool canPartitionKSubsets(vector<int>& nums, int k) {
        int n=nums.size();
        vector<vector<int>>dp(n,vector<int>(k+1,0));
        for(int i=0;i<n;i++){
            dp[i][0]=true;
        }
        if(nums[0]<=k){
            dp[0][nums[0]]=true;
        }
        for(int i=1;i<n;i++){
            for(int sum=0;sum<=k;sum++){
                bool notpick=dp[n-1][sum];
                bool pick=false;
                if(nums[i]<=k){
                    pick=dp[i-1][sum-nums[i]];
                }
                dp[i][sum]=notpick|pick;
            }
        }
        return dp[n-1][k];
    }
};
