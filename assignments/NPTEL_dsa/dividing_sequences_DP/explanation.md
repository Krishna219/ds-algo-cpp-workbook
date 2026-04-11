# Problem Understanding 
Given a sequence *a1,a2,...,aN* we should find a subsequence such that for every pair `i < j`, *ai | aj* meaning every element must divide every later element. Our goal is to find maximum length of such subsequence. 

## DP Problem 
We must define *Best(i)* such that it must contain length of longest fully dividing subsequence that ends at index i. Meaning the susbsequence must include *ai* and use only elements from first *i* positions.

## DP recurrence 
For every *Best(i)*, the dividing subsequence must end at *ai*, we must choose a previous element *aj* such that it meets the following conditions -
```
j <\ i
AND
aj divides ai
```
If the condition is true then `Best(i) = 1 + max | (i \<\ j & ai | aj) Best(j)`, if no such j exists then `Best(i) = 1`. 

## Base case
We are given base case `Best(1) = 1`, which is trivial as for the first element there is no earlier element to divide it. There is no such `j < i` that can divide a1. A single element is a valid subsequence.

## Final answer
Max over all *i*'s of *Best(i)*, because the subsequence can end at any *i*.
