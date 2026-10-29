# Coin Change-2
## Problem:-
  You are given an integer array coins representing coins of different denominations and an integer amount representing a total amount of money.
  Return the number of combinations that make up that amount. If that amount of money cannot be made up by any combination of the coins, return 0.
## Example:-
  Input: amount = 5, coins = [1,2,5]
  Output: 4
## Approach:-
  Step 1: Base Case Initialization
     For amount 0, there is always 1 way (by picking no coins): dp[0] = 1.
     For the first coin (coins[0]), an amount t can be formed (1 way) only if t % coins[0] == 0.
  Step 2: 2D Tabulation→ 2-Row Optimization
     Notice that dp[ind][t] only depends on:
         dp[ind - 1][t] (the previous row at amount t)
         dp[ind][t - coin] (the current row at a smaller amount)
     Thus, you can optimize space from O(n×amount) to two 1D arrays (prev and cur) of size amount + 1:
   // Update logic for 2-row approach 
       cur[t] = prev[t] + (coins[ind] <= t ? cur[t - coins[ind]] : 0);
  Step 3: Single 1D Array Optimization
      By running the inner loop left-to-right (t = coin up to amount), dp[t] already holds the value from the previous coin state (nottake), while dp[t - coin] has already been updated for the current coin (take).
         vector<unsigned long long> dp(amount + 1, 0);
         dp[0] = 1;
         for (int coin : coins) {
            for (int t = coin; t <= amount; t++) {
           dp[t] += dp[t - coin];
         }
        }
## Complexity :-
   Time Complexity: O(n×amount)
   Space Complexity: 2-Row approach:O(amount) using prev and cur.
                     1-Row optimized approach:O(amount) using a single array dp.

