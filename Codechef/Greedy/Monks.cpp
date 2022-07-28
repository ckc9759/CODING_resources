/*Approach --> the approach was clear, we need to use greedy and distribute the max coins to remaining. The question was calculating the required amount of coins resulted in TLE.
Therefore, we deviced a formula for that and it ran fine. It is kind of a two pointer technique*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<ll>
#define mod 1000000007
#define f0 for(int i=0;i<n;i++)
#define mi map<ll,ll>
#define srt(a) sort(a.begin(),a.end())

void baj(){
    ll n;
    cin>>n;
    vi a(n);
    f0{
        cin>>a[i];
    }
    sort(a.begin(),a.end(),greater<int>());
    ll reqd=0;
    ll avail=0;
    for(int i=0;i<n;i++){
        reqd+=a[0]-a[i];
    }
    ll ans=0;
    if(reqd==0){
        ans=0;
    }
    else{
        for(int i=1;i<n;i++){
            reqd-=(n-i)*(a[i-1]-a[i]);
            avail+=a[i-1];
            if(avail>=reqd){
                ans=i;
                break;
            }
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
