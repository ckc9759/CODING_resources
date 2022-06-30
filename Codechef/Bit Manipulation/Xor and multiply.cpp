#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<ll>
#define mod 1000000007
#define f0 for(int i=0;i<n;i++)
#define mi map<ll,ll>

void baj(){
    ll n,a,b;
    cin>>n>>a>>b;
    ll ca[n];
    ll cb[n];
    for(int i=0,j=1;i<n;i++,j*=2){
        // checks if ith bit in a is set or not
        if((a & j) > 0){
            ca[i]=1;
        }
        else{
            ca[i]=0;
        }
        if((b & j) > 0){
            cb[i]=1;
        }
        else{
            cb[i]=0;
        }
    }
    ll x=0;
    ll flag=0;
    for(int i=n-1;i>=0;i--){
        if(ca[i]==0 && cb[i]==0){
            // 1<<i is 2 to the power i
            x+=(1<<i);
        }
        else if(ca[i]==1&&cb[i]==0){
            if(flag==0) flag=1;
            else x+=(1<<i);
        }
        else if(ca[i]==0&&cb[i]==1){
            if(flag==0) {
            flag=1;
            x+=(1<<i);
            }
        }
        else{
            continue;
        }
    }
    cout<<x<<endl;
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
