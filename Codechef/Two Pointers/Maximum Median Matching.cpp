/*Approach --> So in the question, we need to find the max median. We can save the largest for the second part of array i.e 
from (n-1)/2 and check for the minm of the second part which will be the middle element and the median
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<ll>
#define mod 1000000007
#define f0 for(int i=0;i<n;i++)
#define mi map<ll,ll>

void baj(){
    ll n;
    cin>>n;
    vi a(n);
    vi b(n);
    f0{
        cin>>a[i];
    }
    f0{
        cin>>b[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    ll start = (n-1)/2;
    ll end=n-1;
    ll ans=INT_MAX;
    while(start<n){
        ans=min(ans,a[start]+b[end]);
        start++;
        end--;
    }
    cout<<ans<<endl;
}

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
	  baj();
	}
	return 0;
}
