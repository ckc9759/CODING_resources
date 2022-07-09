/* Approach --> */


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<ll>
#define mod 1000000007
#define f0 for(int i=0;i<n;i++)
#define mi map<ll,ll>

void baj(){
    ll x,y;
    cin>>x>>y;
    vi v;
    vi m;
    ll n=3;
    vi a(n);
    ll p;
    ll temp=0;
    ll cnt=0;
    ll z=(x^y);
    if((x&1)==1){
        m.pb(x^2);
    }
    if((y&1)==1){
        m.pb(y^2);
    }
    if((z&1)==1){
        m.pb(z^2);
    }
    sort(m.begin(),m.end());
    cout<<2<<" ";
    cout<<m[0]<<" ";
    cout<<m[1];
    cout<<endl;
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
