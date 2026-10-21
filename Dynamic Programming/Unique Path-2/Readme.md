# Unique Path with obstacles:-
## Problem:-
  You are given an m x n integer array grid. There is a robot initially located at the top-left corner (i.e., grid[0][0]). The robot tries to move to the bottom-right corner (i.e., grid[m - 1][n - 1]). The robot can only move either down or right at any point in time.
  An obstacle and space are marked as 1 or 0 respectively in grid. A path that the robot takes cannot include any square that is an obstacle.
  Return the number of possible unique paths that the robot can take to reach the bottom-right corner.
## Example:-
  Input: obstacleGrid = [[0,0,0],[0,1,0],[0,0,0]]
  Output: 2
## Approach:-
  Intution:-
    Standard Dynamic Programming:
      Normally, you would use a 2D array dp[i][j] where each cell stores the number of unique paths to reach position (i, j).
      State Transition: The number of ways to reach a cell is the sum of ways to come from the top and from the left:
        dp[i][j] = dp[i-1][j] + dp[i][j-1]
      Handling Obstacles:
        If obstacleGrid[i][j] == 1, that cell is blocked, meaning the number of paths to it becomes 0 (dp[i][j] = 0).
   Step by Step:-     
     Base Case Check:
        If the starting point obstacleGrid[0][0] has an obstacle (1), the robot cannot move anywhere. Return 0 immediately.
     Initialize the First Row (prev):
         Loop through the columns of the first row.
         If you encounter an obstacle (1), all remaining cells in that row are blocked (break), so they stay 0.
         Otherwise, set them to 1 because there is a straight path going right.
      Iterate Through Remaining Rows:
          For each subsequent row i from 1 to m - 1:
          Create a temporary 1D vector temp for the current row.
      First Column Handling:
           Determine temp[0]. 
           If obstacleGrid[i][0] == 0, it inherits the value from prev[0].
           If it has an obstacle, it becomes 0.
      Remaining Columns: Loop column by column (j from 1 to n - 1).
           If obstacleGrid[i][j] == 1, set temp[j] = 0.
           Otherwise, compute paths using: temp[j] = prev[j] + temp[j - 1].
      Update prev = temp to move down to the next row.
      Result:
            After checking all rows, the answer will be stored at prev[n - 1], representing the destination cell (m-1, n-1).      
  ## Complexity:-
    Time Complexity:-O(M*N)
    Space Complexity:-O(N)
