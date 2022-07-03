### Notes 

---

Day 4

* We start with the same example discussed in last notes.

* Step 1: recursive code
* First we make a choice diagram or simply think what could be the possible outcomes.
  * If the item has a weight less than W=7kg, then we can either take it or leave it.
  * If the item has a weight more than W=7kg, then we cannot take that item.

Recursive Code:

```cpp
int knapsack(int wt[], int val[], int W, int n){
    // We have to find the base condition.
    // --> Think of the smallest valid input. (In our case, it will be for n=0 and w=0 as neither of them can be negative so 0 is the smallest)
    if(n==0||w==0) return 0;
    if(wt[n-1]<=w){
        return max(val[n-1]+knapsack(wt,val,w-wt[n-1],n-1),knapsack(wt,val,w,n-1))
    }
    if(wt[n-1]>w){
        return (knapsack(wt,val,w,n-1))
    }
}
```
---

### Knapsack memoization

* What is memoization ??
* memoization is an optimization technique that makes applications more efficient and hence faster.

* We will make a matrix DP[n+1][w+1] since these two values are changing.
* Now, we will fill the entire matrix with -1 as an initial value.

* We can use `memset` for this purpose.


### Memoization Technique:

```cp
int knapsack(int wt[], int val[], int W, int n){
    // We have to find the base condition.
    // --> Think of the smallest valid input. (In our case, it will be for n=0 and w=0 as neither of them can be negative so 0 is the smallest)
    memset(DP,-1,sizeof(DP))
    if(DP[n][w]!=-1){
        return DP[n][w];
    }    
    if(n==0||w==0) return 0;
    if(wt[n-1]<=w){
        return DP[n][w]=max(val[n-1]+knapsack(wt,val,w-wt[n-1],n-1),knapsack(wt,val,w,n-1))
    }
    if(wt[n-1]>w){
        return DP[n][w]=(knapsack(wt,val,w,n-1))
    }
}

```
Thank you
