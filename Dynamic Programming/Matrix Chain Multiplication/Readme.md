# Matrix Chain Multiplication:-
## Problem:-
   Given a chain of matrices A1, A2, A3,.....An, you have to figure out the most efficient way to multiply these matrices. In other words, determine where to place parentheses to minimize the number of multiplications.
   Given an array nums of size n. Dimension of matrix Ai ( 0 < i < n ) is nums[i - 1] x nums[i].Find a minimum number of multiplications needed to multiply the chain.
## Example:-
   Input : nums = [10, 15, 20, 25]
   Output : 8000
## Approach:-
   State Definition 
      (f(i, j)):f(i, j) returns the minimum multiplication operations needed to multiply matrices from index i to index j
   Base Case:if (i == j) return 0;
      If i == j, there is only 1 matrix, so 0 multiplications are needed.
   Transition / Choice Diagram:Iterate k from i to j - 1:{cost} = ({nums}[i-1] *{nums}[k] * {nums}[j]) + f(i, k) + f(k + 1, j)
   Take the minimum cost across all valid $k$ values.
   Memoization (dp[i][j]):Store the result in a 2D table dp[N][N] initialized to -1 to prevent recomputing overlapping subproblems.
## Complexity:-
   Time Complexity:-O(N^3)
   Space Complexity:-O(n^2)+O(N)
