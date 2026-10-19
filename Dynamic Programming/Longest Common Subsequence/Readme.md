# Longest Common Subsequence:-
## Problem:-
  Given two strings text1 and text2, return the length of their longest common subsequence. If there is no common subsequence, return 0.
  A subsequence of a string is a new string generated from the original string with some characters (can be none) deleted without changing the relative order of the remaining characters.
  For example, "ace" is a subsequence of "abcde".
  A common subsequence of two strings is a subsequence that is common to both strings.
## Example:-
   Input: text1 = "abcde", text2 = "ace" 
   Output: 3  
## Approach:-
   Instead of maintaining a full 2D table of size (N + 1) * (M + 1), we notice that to compute the current row (cur) of values, we only ever need the results from the immediately preceding row (prev).
       Let prev store the LCS lengths for row i-1.
       Let cur store the LCS lengths for the current row i.
   Recurrence RelationFor any characters at indices i-1 of text1 and j-1 of text2:
       If characters match (text1[i-1] == text2[j-1]):
         We take the diagonal value from the previous row and add 1:{cur}[j] = 1 +{prev}[j - 1]
       If characters do not match:
         We take the maximum of excluding either the current character from text1 (which is prev[j]) or from text2 (which is cur[j-1]):
           {cur}[j] = max({prev}[j],{cur}[j - 1])
    Row Transition (Space Optimization)
        After finishing the inner loop for all columns j from 1 to M (representing the completion of row i), we copy the entire cur array into prev (prev = cur) so it becomes the "previous row" for the next iteration of text1.
        At the very end of processing all characters, prev[m] will hold the length of the longest common subsequence for the entire strings.
## Complexity:-
   Time Complexity:- O(N * M)
   Space Complexity:-O(M)
