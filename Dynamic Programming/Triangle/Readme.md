# Triangle:-
## Problem:-
   Given a triangle array, return the minimum path sum from top to bottom.
   For each step, you may move to an adjacent number of the row below. More formally, if you are on index i on the current row, you may move to either index i or index i + 1 on the next row.
## Example:-
   Input: triangle = [[2],[3,4],[6,5,7],[4,1,8,3]]
   Output: 11 
## Approach:-   
   1.Brute Force (Recursion)Intuition: 
     Start at the top element (0, 0) and recursively explore both possible paths down: moving straight down (row + 1, col) or diagonally (row + 1, col + 1). At each step, take the minimum of the two paths and add the current element's value.Why it's inefficient: Many paths overlap, leading to redundant calculations.
     Complexity: Time: O(2^N) (exponential, as each cell branches into two paths).
                 Space: O(N) (recursion stack depth).
                 
  2.Top-Down Dynamic Programming (Memoization)Intuition:
     We can optimize the recursive approach by storing the results of already computed states (row, col) in a 2D memoization table (or hash map). 
     If we encounter the same cell again, we return the cached result instantly.
     How it works:
        int solve(int i, int j, int n, vector<vector<int>>& triangle, vector<vector<int>>& dp) {
         if (i == n - 1) return triangle[i][j]; // Base case: bottom row
         if (dp[i][j] != -1) return dp[i][j];
         int down = triangle[i][j] + solve(i + 1, j, n, triangle, dp);
         int diagonal = triangle[i][j] + solve(i + 1, j + 1, n, triangle, dp);
         return dp[i][j] = min(down, diagonal);
         }
     Complexity:- Time: O(N^2) (since there are roughly {N(N+1)}/{2} unique states, and each is computed only once).
                  Space:O(N^2) for the DP table + O(N) for the recursion stack.
                  
  3.Bottom-Up Dynamic Programming (Tabulation)Intuition:
      Instead of starting from the top and going down, we flip the process and start from the bottom row and work our way up to the top.
      This eliminates recursion overhead entirely.
      How it works:
        We create a full 2D DP table where dp[i][j] represents the minimum path sum from the bottom to cell (i, j).
        We fill it up row by row using:{dp}[i][j] = {triangle}[i][j] + min({dp}[i+1][j], {dp}[i+1][j+1])
      Complexity:-Time: O(N^2)
                  Space: O(N^2) to store the entire DP grid.   
                  
   4.Space-Optimized Bottom-Up DP (Optimal Approach)Intuition:
       Look closely at how the tabulation approach works: 
         when computing values for row i, we only ever look at the row immediately below it (i + 1). 
         We never need rows i + 2 or lower anymore.
         How it works:
            We can ditch the 2D table and use a single 1D vector (front) initialized with the values of the last row.
            As we loop upwards from row n-2 down to 0, we calculate the current row's values and overwrite/update our 1D vector.
            By the time the loop finishes, front[0] contains the answer for the top of the triangle.
         Complexity:- Time: O(N^2)
                      Space: O(N) (We only keep track of a single row of size up to n).               
