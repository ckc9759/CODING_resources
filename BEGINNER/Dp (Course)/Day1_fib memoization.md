### Notes

---

LINK : https://www.youtube.com/watch?v=oBt53YbR9Kk

#### Fib memoization : 

* fib(n) - It returns the nth number of the fibonacci sequence.

The basic recursive soln could be:
```cpp
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<ll>
#define mod 1000000007
#define f0 for(int i=0;i<n;i++)
#define mi map<ll,ll>

ll fib(ll n){
    if(n<=2) return 1;
    return fib(n-1)+fib(n-2);
}

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
  cin.tie(NULL);
	ll n;
	cin>>n;
	cout<<fib(n)<<endl;
	return 0;
}
```

This recursive technique works fine for lower numbers but if we call our function, with just fib(50), it will take time to execute.
Time complexity = O(2^n)

Therefore, when we try to calculate fib(50), the program has 2^50 statements to execute which cannot take place in 1s.

