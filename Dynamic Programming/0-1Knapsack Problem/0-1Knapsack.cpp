class Solution{
    public:
        int knapsack01(vector<int>& wt, vector<int>& val, int n, int W) {
             //your code goes here
             vector<int>prev(W+1,0);

             for(int w=wt[0];w<=W;w++){
                prev[w]=val[0];
             }

             for(int ind=1;ind<n;ind++){
                for(int w=W;w>=0;w--){
                    int not_taken=0+prev[w];
                    int taken=INT_MIN;
                    if(wt[ind]<=w){
                        taken=val[ind]+prev[w-wt[ind]];
                    }
                   prev[w]=max(taken,not_taken); 
                }
                
             }
             return prev[W];
        }
};
