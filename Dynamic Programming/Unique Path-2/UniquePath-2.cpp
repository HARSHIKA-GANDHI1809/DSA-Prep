class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
          if (obstacleGrid[0][0] == 1) return 0;
        
        vector<int> prev(n, 0);
            for (int j = 0; j < n; ++j) {
            if (obstacleGrid[0][j] == 1) break; 
            prev[j] = 1;
        }
            for (int i = 1; i < m; ++i) {
            vector<int> temp(n, 0);
            
            if (obstacleGrid[i][0] == 0) {
                temp[0] = prev[0];
            } else {
                temp[0] = 0; 
            }
            
            for (int j = 1; j < n; ++j) {
                if (obstacleGrid[i][j] == 1) {
                    temp[j] = 0; 
                } else {
                    temp[j] = prev[j] + temp[j - 1];
                }
            }
            prev = temp;
        }
        
        return prev[n - 1];
    }
};
