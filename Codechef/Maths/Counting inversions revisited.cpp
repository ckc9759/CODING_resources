#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<ll>
#define mod 1000000007
#define f0 for(int i=0;i<n;i++)
#define mi map<ll,ll>

void baj(){
    ll n,k;
    cin>>n>>k;
    vi a(n);
    f0{
        cin>>a[i];
    }
    ll ans=0;
    ll inv=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                inv++;
            }
        }
    }
    ans+=k*inv;
    for(int i=0;i<n;i++){
        ll smaller=0;
        for(int j=0;j<n;j++){
            if(a[i]>a[j]){
                smaller++;
            }
        }
        ans+=(k*(k-1)/2)*smaller;
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
