#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<ll>
#define mod 1000000007
#define f0 for(int i=0;i<n;i++)
#define mi map<ll,ll>

void baj(){
    ll m;
    cin>>m;
    ll n=2*m;
    vi a(n);
    ll e=0;
    ll o=0;
    vector<ll>v;
    f0{
        cin>>a[i];
        if(a[i]%2==0) {
            e++;
            v.pb(a[i]);
        }
        else o++;
    }
    if(e==o){
        cout<<0<<endl;
        return;
    }
    if(o>e){
        cout<<abs(e-o)/2<<endl;
        return;
    }
    if(e>o){
        for(int i=0;i<v.size();i++){
            v[i]=log2(v[i] & -v[i]);
        }
        sort(v.begin(),v.end());
        ll cnt=0;
        ll z=abs(e-o)/2;
        int i=0;
        while(z--){
            cnt+=v[i];
            i++;
        }
        cout<<cnt<<endl;
    }
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
