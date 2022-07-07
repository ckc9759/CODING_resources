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
    ll tsum=0;
    f0{
        cin>>a[i];
        tsum+=a[i];
    }
    sort(a.begin(),a.end(),greater<int>());
    ll ans=0;
    ll sum=0;
    for(int i=0;i<n;i++){
        ans=max(ans,sum*((1000*(n-i))-(tsum-sum)));
        sum+=a[i];
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
