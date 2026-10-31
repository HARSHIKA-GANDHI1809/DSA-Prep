class Solution {
public:
    int longestCommonSubstring(string text1, string text2) {
        int n=text1.size();
        int m=text2.size();
        vector<int>cur(m+1,0),prev(m+1,0);
      int ans=0;
      
        for(int j=0;j<m-1;j++)prev[j]=0;

        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
              if(text1[i-1]==text2[j-1])
                  cur[j]=1+prev[j-1];
                ans=max(ans,cur[j]);
              else{
                cur[j]=0;
                }
             
            }
            prev=cur;
        }
         return prev[m];
    }
};
