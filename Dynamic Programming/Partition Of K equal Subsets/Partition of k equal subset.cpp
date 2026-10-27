class Solution {
public:
    bool canPartitionKSubsets(vector<int>& nums, int k) {
        int totalsum = accumulate(nums.begin(), nums.end(), 0);
        if (totalsum % k != 0) return false;
        int target=totalsum/k;
        int n=nums.size();
        sort(nums.rbegin(),nums.rend());
        if(nums[0]>target) return false;
        vector<bool> visited(n, false);
        function<bool(int,int,int)>backtrack=[&](int kRemaining,int currentsum,int startind){
            if(kRemaining==1) return true;
            if(currentsum==target) return backtrack(kRemaining-1,0,0);
            for(int i=startind;i<n;i++){
                if(visited[i]||currentsum+nums[i]>target) continue;
                visited[i]=true;
                if(backtrack(kRemaining,currentsum+nums[i],i+1)) return true;
                visited[i]=false;
                if(currentsum==0) break;
            }
            return false;
        };
        return backtrack(k,0,0);
    }
};
