
#Majority Element 
##Problem:-
 Given an array of size n we have to find out the elemts what appeared more than n/2 times
##Example:-
 a[]={2,2,1,1,1,2,2}
 OUTPUT=2
## Aproach:-
 Use moore's voting algorithm:-
  Maintain a candidate and a count
  if count becomes 0 then make current element as candidate 
  if current element is equal to candidate then increse count 
  otherwise decrease count
##Complexity
  Time complexity:- O(n)
  Space complexity:-O(1)
  
