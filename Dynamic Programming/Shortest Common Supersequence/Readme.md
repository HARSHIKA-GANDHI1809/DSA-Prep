# Shortest Common Supersequence:-
## Problem:-
   Given two strings str1 and str2, return the shortest string that has both str1 and str2 as subsequences. If there are multiple valid strings, return any of them.
   A string s is a subsequence of string t if deleting some number of characters from t (possibly 0) results in the string s.
## Example:-
   Input: str1 = "abac", str2 = "cab"
   Output: "cabac"
## Approach:-
   A: Build the DP Table (LCS Logic)Create a 2D DP table where dp[i][j] stores the length of the Longest Common Subsequence between str1[0...i-1] and str2[0...j-1].
      If characters match (str1[i-1] == str2[j-1]): 
          We take the diagonal value and add 1:{dp}[i][j] = 1 + {dp}[i-1][j-1]
       If characters don't match: We take the maximum from the top or left cell:
         {dp}[i][j] = max({dp}[i-1][j], {dp}[i][j-1])
   B: Backtrack to Construct the String
      Instead of just returning the length, we need to build the actual string by starting from the bottom-right corner of the table (i = n, j = m) and working our way up to (0, 0):
         If the characters match (str1[i-1] == str2[j-1]):
           This character is part of the LCS. We include it once in our answer, then move diagonally up-left (i--, j--).
         If str1[i-1] is not part of the LCS match (i.e., dp[i-1][j] > dp[i][j-1]):It means str1[i-1] came from the top. 
           We add str1[i-1] to our answer and move up (i--).
         Otherwise (i.e., dp[i-1][j] <= dp[i][j-1]):It means str2[j-1] came from the left. 
           We add str2[j-1] to our answer and move left (j--).
   C: Handle Remaining Characters
      Once one of the pointers (i or j) hits 0, the backtracking loop terminates. 
      However, the other string might still have leftover characters.Add any remaining characters of str1 (while i > 0) or str2 (while j > 0) to the result.
   D: Reverse and ReturnSince we built the string backwards from the end (n and m) down to the start, reverse the final string before returning it.
## Complexity:-
    Time Complexity:-O(N*M)
    Space Complexity:-O(n*m)
   
