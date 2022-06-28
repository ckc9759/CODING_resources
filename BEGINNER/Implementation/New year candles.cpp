#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<ll>
#define mod 1000000007
#define f0 for(int i=0;i<n;i++)
#define mi map<ll,ll>

void baj(){
    ll a,b;
    cin>>a>>b;
    ll count=a;
    ll m=a/b;
    ll n=a%b;
    while(a>=b){
        count+=a/b;
        a=a/b+a%b;
    }
    cout<<count<<endl;
}

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	baj();
	return 0;
}
