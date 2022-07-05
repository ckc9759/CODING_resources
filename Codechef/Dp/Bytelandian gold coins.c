#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<ll>
#define mod 1000000007
#define f0 for(int i=0;i<n;i++)
#define mi map<ll,ll>

mi dp;

ll solve(ll n){
    if(n<=2) return dp[n]=n;
    if(dp.count(n)) return dp[n];
    return dp[n]=max(n,solve(n/2)+solve(n/3)+solve(n/4));
    
}

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
	while(cin>>n){
	    cout<<solve(n)<<endl;;
	}
	return 0;
}
