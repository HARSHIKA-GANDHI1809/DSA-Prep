class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        vector<int>prev(matrix[0]);
        for(int i=1;i<n;++i){
            vector<int>cur(n,0);
            for(int j=0;j<n;++j){
                int s=prev[j];
                int ld=(j-1>=0)? prev[j - 1] : 1e9;
                int rd=(j+1<n) ? prev[j+1]:1e9;
                cur[j]= matrix[i][j]+min({s,ld,rd});
            }
            prev=cur;
        }
        return *min_element(prev.begin(), prev.end());

    }
};
