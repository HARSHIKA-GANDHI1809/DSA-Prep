class Solution{

  public:
	int minDifference(vector<int>&arr, int n)  { 
       int totalsum = 0;
        for (int i = 0; i < n; i++) totalsum += arr[i];

        int k = totalsum / 2;
        vector<bool> prev(k + 1, false), cur(k + 1, false);
        prev[0] = cur[0] = true;
        if (arr[0] <= k) prev[arr[0]] = true;

        for (int ind = 1; ind < n; ind++) {
            for (int target = 1; target <= k; target++) {
                bool nottake = prev[target];
                bool take = false;
                if (arr[ind] <= target) take = prev[target - arr[ind]];
                cur[target] = take || nottake;
            }
            prev = cur;
        }
        for (int s1 = k; s1 >= 0; s1--) {
            if (prev[s1]) {
                return totalsum - 2 * s1;
            }
        }

        return 0;
	} 
};
