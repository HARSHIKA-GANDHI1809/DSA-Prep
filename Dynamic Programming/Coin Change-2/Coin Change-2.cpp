class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
     vector<unsigned long long >prev(amount+1,0), cur(amount+1,0);
     const int INF = 1e9;
     for(int t=0;t<=amount;t++){
        if(t%coins[0]==0) 
          prev[t]=1;
        else 
          prev[t]=0;
     }   
     for(int ind=1;ind<n;ind++){
        for(int t=0;t<=amount;t++){
            unsigned long long nottake=0+prev[t];
            unsigned long long take=0;
            if(coins[ind]<=t)
              take=cur[t-coins[ind]];

            cur[t]=nottake+take;
        }
        prev=cur;
     }
      return  prev[amount];
    
    }
};
