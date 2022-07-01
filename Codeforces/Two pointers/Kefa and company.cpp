#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<ll>
#define mod 1000000007
#define f0 for(int i=0;i<n;i++)
#define mi map<ll,ll>

void baj(){
    ll n,d;
    cin>>n>>d;
    vector<pair<ll,ll>>v;
    ll m=n;
    while(m--){
        ll a,b;
        cin>>a>>b;
        v.pb(make_pair(a,b));
    }
    sort(v.begin(),v.end());
    ll ans=0;
    ll csum=0;
    // Two pointer technique
    ll s=0;
    ll e=0;
    while(e<n){
        if(((v[e].first)-(v[s].first))<d){
            csum+=(v[e].second);
            e++;
        }
        else{
            csum-=(v[s].second);
            s++;
        }
        ans=max(ans,csum);
    }
    cout<<ans<<endl;
}

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    baj();
	return 0;
}
