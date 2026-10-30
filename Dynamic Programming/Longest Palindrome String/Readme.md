# Longest Palindrome String:-
## Problem:-
 Given a string s, find the longest palindromic subsequence's length in s.
 A subsequence is a sequence that can be derived from another sequence by deleting some or no elements without changing the order of the remaining elements.
## Example:-
  Input: s = "bbbab"
  Output: 4
## Approach:-
  Reduction to Longest Common Subsequence (LCS):
    Finding the longest palindromic subsequence of a string s is completely equivalent to finding the Longest Common Subsequence between s and its reverse t.
  Dynamic Programming Transition:
    We define a 2D DP table where dp[i][j] represents the length of the LCS of the prefix of s of length i and the prefix of t of length j.
  Base Cases: If either string has a length of 0, the LCS length is 0.
  Transition:If the current characters match (s[i-1] == t[j-1]), we include them in our common subsequence:
       dp[i][j] = 1 + dp[i-1][j-1]
     If they do not match, we take the maximum by either excluding the current character from s or from t:
       dp[i][j] = max(dp[i-1][j], dp[i][j-1])
## Complexity:-
   Time Complexity:-O(n^2)
   Space Complexity:-O(n^2)
       
       
     
 
