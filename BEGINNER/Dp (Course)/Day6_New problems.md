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

dp[0][0] = Subproblem, can we make a subset of 0 using 0 elements. Since it is possible, we can initialize it with "true".
similiar is the case when we have sum 0 i.e the first coloumn.
In case of row, we will have false as we need a definite from an empty array.

Code:
```cpp
// Check if number is less than sum or not !!
for --> i
  for --> j
if(i==0) dp[i][j]=false;
if(j==0) dp[i][j]=true;
if(arr[i-1]<=j){
   dp[i][j]=dp[i-1][j-a[i-1]] || dp[i-1][j] // max replaced by or and value array omitted.
}
else{
   dp[i][j]=dp[i-1][j];
}
return dp[n][sum];
```

---

### 2. Equal Partition Problem

```cpp
Input --> Give an array
ar[] = 2 3 7 8 10 
sum  = 11

Task --> Divide the array into two parts and check if it possible to get equal sum. print "Yes" or "No"
```

#### Approach - If the some is odd, we cannot divide into two equal parts. We use subset sum to check if a subset is possible with sum equal to sum of array by 2.

```cpp
if(sum%2!=0) return false;
else{
    return subsetsum(arr[],sum/2);
}
```
---

t H a N k  Y o U
