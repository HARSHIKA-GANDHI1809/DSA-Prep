# Coin Change:-
## Problem:-
    You are given an integer array coins representing coins of different denominations and an integer amount representing a total amount of money.
    Return the fewest number of coins that you need to make up that amount. If that amount of money cannot be made up by any combination of the coins, return -1.
## Example:-
    Input: coins = [1,2,5], amount = 11
    Output: 3
## Approach:-
   Problem Classification
      This is a classic Unbounded Knapsack Problem where:You have an infinite supply of each coin denomination.
      Your goal is to minimize the total number of coins needed to reach a target amount.
   Defining the State:-
      We define our state as:
         dp[ind][t] representing the minimum number of coins needed to make up target amount t using a subset of coin denominations from index 0 to ind.
   State Transition Choices:-
      For every coin at index ind and target amount t, you have two choices:
         Exclude (Not-Take): Do not use the current coin. The result comes directly from the previous row:{nottake} = {prev}[t]
         Include (Take): Use the current coin (if the coin's value is less than or equal to the target amount t).
         Because you can reuse the same coin, you look up the result in the current row with the remaining amount:{take} = 1 + {cur}[t - {coins}[ind]]
         Then, you take the minimum of these two choices:{cur}[t] = min({nottake}, t{take})
  Base Case Initialization
      For the very first coin (coins[0]):
         Any target amount t that is perfectly divisible by coins[0] can be formed using t / coins[0] coins.
         If it cannot be formed evenly, we assign a very large value (INF = 1e9) to represent an impossible state.
## Complexity:-
   Time Complexity:-O(n*amount)
   Space Complexity:-O(amount)
    
