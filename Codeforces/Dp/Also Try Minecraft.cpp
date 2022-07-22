/* Approach --> I made two arrays and calculate the prefix sum at each index. Then with the given query i did dp[l] - dp[r] // Optimization */
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
    ll n,m;
    cin>>n>>m;
    ll h[n];
    for(int i=0;i<n;i++){
        cin>>h[i];
    }
    vector<pair<ll,ll>>v;
    ll k=m;
    while(k--){
        ll a,b;
        cin>>a>>b;
        v.push_back(make_pair(a-1,b-1));
    }
    ll dp[n+1];
    dp[0]=0;
    for(int i=1;i<n;i++){
        if(h[i]>=h[i-1]){
            dp[i]=dp[i-1];
        }
        else{
            dp[i]=(h[i-1]-h[i])+dp[i-1];
        }
    }
    ll dp2[n+1];
    dp2[n-1]=0;
    for(int i=n-2;i>=0;i--){
        if(h[i]>=h[i+1]){
            dp2[i]=dp2[i+1];
        }
        else{
            dp2[i]=(h[i+1]-h[i])+dp2[i+1];
        }
    }
    for(auto it:v){
        if(it.second>it.first){
            cout<<dp[it.second]-dp[it.first]<<endl;
        }
        else{
            cout<<abs(dp2[it.first]-dp2[it.second])<<endl;
        }
    }
}

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	baj();
	return 0;
}
