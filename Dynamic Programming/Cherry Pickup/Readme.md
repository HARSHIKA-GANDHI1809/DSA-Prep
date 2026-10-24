# Cherry Pickup 3D-Grid:-
## Problem:-
   You are given an n x n grid representing a field of cherries, each cell is one of three possible integers.
     0 means the cell is empty, so you can pass through,
     1 means the cell contains a cherry that you can pick up and pass through, or
     -1 means the cell contains a thorn that blocks your way.
      Return the maximum number of cherries you can collect by following the rules below:
  Starting at the position (0, 0) and reaching (n - 1, n - 1) by moving right or down through valid path cells (cells with value 0 or 1).
  After reaching (n - 1, n - 1), returning to (0, 0) by moving left or up through valid path cells.
  When passing through a path cell containing a cherry, you pick it up, and the cell becomes an empty cell 0.
  If there is no valid path between (0, 0) and (n - 1, n - 1), then no cherries can be collected.
## Example:-
  Input: grid = [[0,1,-1],[1,0,-1],[1,1,1]]
  Output: 5
## Approach:-
  The Core Realization (Why standard greedy fails)
    At first glance, you might think about finding the best path from (0, 0) to (n - 1, n - 1), collecting the cherries, turning those cells into 0, and then finding the best path back.
    Why this fails:
     An optimal path forward might collect cherries that a crucial return path desperately needs, or block the only valid way back. 
     You have to optimize both paths simultaneously.
 Transforming the Problem
   Instead of "one person going forward and another returning," we invert the return trip and reframe it as:
     Two people starting together at (0, 0) and walking simultaneously to (n - 1, n - 1).
     Both people only move Right or Down.
     Maximizing the cherries collected by these two simultaneous paths mathematically yields the exact same result as going forward and back.
 State Space Reduction 
    To track two people, you might initially think you need 4 coordinates:
       (r1, c1) for Person 1
       (r2, c2) for Person 2. That would create a massive 4D DP table (dp[r1][c1][r2][c2]).
 The optimization trick:
  Because both people move at the same speed (taking the same number of total steps from the start), the sum of their row and column indices is always equal:
    r_1 + c_1 = r_2 + c_2
    From this equation, we can dynamically calculate Person 2's column (c2) on the fly:
    c_2 = r_1 + c_1 - r_2
    This drops our state tracking from 4 variables down to just 3 variables: dp[r1][c1][r2].
 Recurrence & Transitions
    At any given state, both people can independently choose to move Down or Right, giving us 4 possible movement combinations:
      P1 Down, P2 Down: dp(r1 + 1, c1, r2 + 1)
      P1 Down, P2 Right: dp(r1 + 1, c1, r2)
      P1 Right, P2 Down: dp(r1, c1 + 1, r2 + 1)
      P1 Right, P2 Right: dp(r1, c1 + 1, r2)
      We take the max() of these 4 choices.
    Handling Cherry Overlaps:If Person 1 and Person 2 land on the same cell (r1 == r2 && c1 == c2), we collect the cherry only once.
    If they land on different cells, we add both of their cherries: g[r1][c1] + g[r2][c2].
 Base Cases & ConstraintsInvalid States / Thorns (-1): If either person steps out of bounds (>= n) or hits a thorn (grid == -1), we return a heavily penalized invalid score (-1e9).
 Destination: When both reach (n - 1, n - 1), we return the cherries at that final cell.
## Complexity:-
   Time Complexity:-O(N^3)
   Space Complexity:-O(N^3)


 
