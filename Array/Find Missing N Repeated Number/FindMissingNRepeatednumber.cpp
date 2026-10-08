class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
       long long n =grid.size();
       long long total=n*n;

       long long sn= total * (total+1)/2;
       long long s2n = total* (total+1)*(2*total+1)/6;
       long long s=0;
       long long s2=0;
       for(int i=0;i<n;i++){
       for (int j = 0; j < n; j++) {
         long long val = grid[i][j];
         s+=val;
         s2+=val*val;
        }   
       } 
       long long val1 = s-sn;
       long long val2 = s2-s2n; 
       long long val2_div = val2 / val1;
       long long x =(val1+val2_div)/2;
       long long y =x-val1;

       return{(int)x,(int)y};

    }
};
