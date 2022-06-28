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
    ll ans;
    ll k=1;
    while(true){
        ll x=pow(2,(k-1))*(pow(2,k)-1);
        if(x>n) break;
        else{
            if(n%x==0){
                ans=x;
            }
        }
        k++;
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
