#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<ll>
#define mod 1000000007
#define f0 for(int i=0;i<n;i++)
#define mi map<ll,ll>

ll dp[200][200];
ll ans=0;
ll n,k,d;


ll dpsol(ll b,ll c){
    if(b<0){
        return 0;
    }
    if(b==0){
        if(c>=d) return 1;
        return 0;
    }
    if(dp[b][c]!=-1){
        return dp[b][c];
    }
    ll temp=0;
    for(ll i=1;i<=k;i++){
        temp+=dpsol(b-i,max(c,i));
        temp%=mod;
    }
    temp%=mod;
    return dp[b][c]=temp;
}

void baj(){
    cin>>n>>k>>d;
    memset(dp,-1,sizeof(dp));
    cout<<dpsol(n,0)<<endl;
}

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    baj();
	return 0;
}
