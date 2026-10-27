# Is Sequence:-
## Problem:-
   Given two strings s and t, return true if s is a subsequence of t, or false otherwise.
## Example:-
   Input: s = "abc", t = "ahbgdc"
   Output: true.
 ## Approach:-
    Initialize pointer i for string s and pointer j for string t.
    Iterate through string t using j.
    Whenever the character at t[j] matches the character at s[i], advance pointer i (i++).
    Always advance pointer j (j++) on every iteration.
    If i reaches the length of s, it means every character of s was found in t in the correct relative order, so return true. Otherwise, return false.
## Complexity:-
   Time Complexity:-O(n)
   Space Complexity:-O(1)
  
