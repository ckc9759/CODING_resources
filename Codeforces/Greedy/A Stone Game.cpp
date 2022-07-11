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
    ll minm=1000000007;
    ll maxm=0;
    f0{
        cin>>a[i];
        maxm=max(maxm,a[i]);
        minm=min(minm,a[i]);
    }
    mi m1;
    mi m2;
    f0{
        m1[a[i]]=i+1;
    }
    ll rma=n-m1[maxm]+1;
    ll rmi=n-m1[minm]+1;
    ll c1,c2,c3;
    c1=max(m1[maxm],m1[minm]);
    c2=max(rma,rmi);
    c3=min(rma+m1[minm],m1[maxm]+rmi);
    ll ans=min({c1,c2,c3});
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
