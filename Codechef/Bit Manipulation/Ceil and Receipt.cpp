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
