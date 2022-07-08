#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<ll>
#define mod 1000000007
#define f0 for(int i=0;i<n;i++)
#define mi map<ll,ll>

void baj(){
    ll maxt,n,sumn;
    cin>>maxt>>n>>sumn;
    ll k=sumn/n;
    ll sum=0;
    if(k>=maxt){
        sum=n*n;
        sum*=maxt;
    }
    else{
        sum=n*n;
        sum*=k;
        ll z=sumn%n;
        sum+=z*z;
    }
    cout<<sum<<endl;
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
