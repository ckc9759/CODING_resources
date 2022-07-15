#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<ll>
#define mod 1000000007
#define f0 for(int i=0;i<n;i++)
#define mi map<ll,ll>

void baj(){
    ll x,y,a,b;
    cin>>x>>y>>a>>b;
    ll m=x;
    ll n=y;
    ll cnt=0;
    /*while(m<n){
        m+=a;
        n-=b;
        cnt++;
    }
    if(m==n)
    cout<<cnt<<endl;
    else
    cout<<-1<<endl;
    */
    ll diff=y-x;
    ll sum=a+b;
    if(diff%sum==0) cout<<diff/sum<<endl;
    else cout<<-1<<endl;
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
