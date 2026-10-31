# Minimum Insertion To make string PALINDROMIC 
## Problem:-
   Given a string s. In one step you can insert any character at any index of the string.
   Return the minimum number of steps to make s palindrome.
   A Palindrome String is one that reads the same backward as well as forward.
## Example:-
   Input: s = "zzazz"
   Output: 0
## Approach:-
   Find Longest Palindromic Subsequence (LPS):
     A known property of LPS is that the Longest Palindromic Subsequence of a string s is equal to the Longest Common Subsequence (LCS) of s and its reverse t= {reverse}(s).
       Create t = {reverse}(s).
     Compute LCS using Dynamic Programming:
       Build a 2D DP table dp[i][j] representing the length of the LCS of substrings s[0...i-1] and t[0...j-1]
     State Transition:
       If s[i-1] == t[j-1]: dp[i][j] = 1 + dp[i-1][j-1]
       Else: dp[i][j] = max(dp[i-1][j], dp[i][j-1])
     Calculate Result:
       After computing lps_len = dp[n][n], return n - lps_len.
## Complexity:-
    Time Complexity:-O(n^2)
    Space Complexity:-O(n^2)
   
