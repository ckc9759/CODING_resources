#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<ll>
#define mod 1000000007
#define f0 for(int i=0;i<n;i++)
#define mi map<ll,ll>

void baj(){
    int n;
    cin>>n;
    if(n%2==0){
        ll x=pow(2,n/2);
        cout<<x<<endl;
    }
    else cout<<0<<endl;
}

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	  baj();
	return 0;
}
