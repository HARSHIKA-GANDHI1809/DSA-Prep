class Solution{
public:
    int subarraysWithXorK(vector<int> &nums, int k) {
       int xr=0;
       unordered_map<int,int>mpp;
       mpp[xr]++;
       int count=0;
       for(int i=0;i<nums.size();i++){
        xr=xr^nums[i];
        int x=xr^k;
        count+=mpp[x];
        mpp[xr]++;
       }
       return count; 
    }
};
