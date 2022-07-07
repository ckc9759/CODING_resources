### Notes 

---

Day6

#### Variations in knapsack problems !!

* Variations in knapsack generally have different initializations. 

---

### 1. Subset Sum Problem

```cpp
Input --> Give an array
ar[] = 2 3 7 8 10 
sum  = 11

Task - Check if subset with sum equal to 11. "YES" or "NO"
```

```cp
// Similarity - We have a choice whether to take a number or not. Optimization - sum required is 11.
```

#### Approach - We make a dp 2D array of size [n+1][sum+1] i.e dp[6][12].

Let's start initializing. 

dp[0][0] = Subproblem, can we make a subset of 0 using 0 elements.

