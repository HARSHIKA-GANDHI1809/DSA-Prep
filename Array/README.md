
# TWO Sum
##PROBLEM:-
 Given an array of integers and target element we have to find the corresponding elemnt which add up to give the target element.
## EXMAPLE:-
  INPUT:-arr{}=[1,2,6,5,8]
   target=14
  Output:- 0,1,2,3
##Approach:-
   Use Hash Map to store elements that we have already seen.
   for every element:
     Calculate target-num[i];
     check whether this value exists in hash or not
     if present the return two indices
     otherwise store current element and its index.
#Complexity:- 
       Time Complexity=O(n)
       Space Complexity=O(n)
