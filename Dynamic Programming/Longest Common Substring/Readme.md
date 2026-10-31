# Longest Commom Substring:-
## Problem:-
  Given two strings we have to find the longest substring among them.
## Example:-
   s1=abcd s2=abxd 
   output=ab
## Approach:-
   Let dp[i][j] represent the length of the longest common substring ending specifically at text1[i-1] and text2[j-1].
   Transition:
      If characters match (text1[i-1] == text2[j-1]):
        Extend the common substring from previous characters:
           {dp}[i][j] = 1 + {dp}[i-1][j-1]
        If characters do not match (text1[i-1] != text2[j-1]):
           Reset the current substring length back to 0, because substrings must be contiguous:
           {dp}[i][j] = 0
   Space Optimization (O(m)):Since dp[i][j] depends only on values from the previous row (i-1), you only need two 1D vectors:
     prev: Stores dynamic programming values for the previous character of text1.
     cur: Stores dynamic programming values for the current character of text1.
 ## Complexity:-
    Time Complexity:-O(n)
    Space Complexity:-O(n*m)
     
     
 
 
