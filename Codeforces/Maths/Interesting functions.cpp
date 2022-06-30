#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<ll>
#define mod 1000000007
#define f0 for(int i=0;i<n;i++)
#define mi map<ll,ll>

void baj(){
    ll l,r;
    cin>>l>>r;
    ll a=0,b=0;
    while(l>0){
        a+=l;
        l/=10;
    }
    while(r>0){
        b+=r;
        r/=10;
    }
    cout<<(b-a)<<endl;
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
