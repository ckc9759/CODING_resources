# Approach - We have 2 to the power every time, so we take it till we have a number which is closer to next power of 2.
Like if we have 4096, then we can take 2048 or a smaller power till we get 4096.
If we have something like 257 or 259, we take 256 then we have 1 or 3 left, therefore we go to a smaller power of 2 like 1,2.

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<ll>
#define mod 1000000007
#define f0 for(int i=0;i<n;i++)
#define mi map<ll,ll>

void baj(){
    ll p;
    cin>>p;
    ll ans=0;
    for(int i=11;i>=0;i--){
        ll cpower=pow(2,i);
        while(p>=cpower){
            p-=cpower;
            ans++;
        }
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
