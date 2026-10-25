class Solution {
   
public:
     bool subsetTok(int n,int k,vector<int>&arr){
        vector<bool>prev(k+1,0),cur(k+1,0);
        prev[0]=cur[0]=true;
        if(arr[0]<=k) prev[arr[0]]=true;
        for(int ind=1;ind<n;ind++){
            for (int target=1;target<=k;target++){
                bool nottake=prev[target];
                bool take=false;
                if(arr[ind]<=target) take=prev[target-arr[ind]];
                cur[target]=take|nottake;
            }
            prev=cur;
        }
        return prev[k];

     }
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int totalsum=0;
        for(int i=0;i<n;i++) totalsum+=nums[i];
        if(totalsum%2) return false;
        int target=totalsum/2;
        return subsetTok(n,target,nums);
    }
};
