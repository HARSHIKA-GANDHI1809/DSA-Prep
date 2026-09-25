
#Remove Duplicate-2
##Problem:-
  Given an array we have to reomove duplicates which appear 3 or more than 3 times .
##Example:
  arr[]={1,1,2,2,2,3,3}
  output:-{1,1,2,2,3,3}
##Approach:-
 2pointer approach:-
   if size of array is 2 or less than 2 then return it as it is.
   Will iterate the array from i=1 & j=2 and check for duplicacy
   If an array has an element which appears twice then accept it //arr[i-1]!=arr[j] theni++,arr[i]=arr[j]
   else remove it 
   
