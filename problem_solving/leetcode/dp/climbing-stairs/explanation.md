# Problem 70. Climbing-Stairs
From DP problem solving basics, find the dependency, the base case and implement either iterative or recursive solution in the order of dependancy.

## The dependancy
Step `n` can be reached either with one-step from step `n-1` or two steps from the step `n-2`. Say `step[n]` denote the numbers of ways to reach step `n` which depends on the two previous steps. The number of ways to reach two of the previous steps may not have a combination pattern. Then the dependency equation becomes `step[n] = step[n-1] + step[n-2]`.

## The base case
We can say there is one-way to reach step `1` and two-ways to reach step `2` as given in the question. Hence base case becomes `step[1] = 1` and `step[2] = 2`.

## Implementation
We can solve it from step `n` and recursively solve for the previous steps, with memoization or iteratively following dependency order starting from 1st step. I chose the latter to keep it simple.

In case, if the given `n` equals any of the base case return the correponding base case output without proceeding to the loop. If `n > 2` proceed through the loop solve till we reach `n`.
