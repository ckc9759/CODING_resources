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
    vi v(n);
    mi a;
    f0{
        cin>>v[i];
        a[v[i]]=i;
    }
    ll l,r;
    l=r=a[0];
    ll ans=1;
    for(int i=1;i<n;i++){
        if(l>a[i]){
            l=a[i];
        }
        else if(r<a[i]){
            r=a[i];
        }
        else{
            ans=(ans*(r-l+1-i))%mod;
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
