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
    ll cnt=-1;
    ll temp=0;
    ll i=3;
    while(temp<n){
        temp+=((i*i)+1)/2;
        i+=2;
        cnt++;
    }
    ll l=sqrt(2*n-1);
    cout<<(l-1)/2<<endl;
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
