#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>
#define mod 1000000007
#define f0 for(int i=0;i<n;i++)
#define mi map<ll,ll>

void baj(){
    ll n;
    cin>>n;
    vi v(n);
    f0{
        cin>>v[i];
    }
    if(n==1){
        cout<<0<<endl;
        return;
    }
    ll count=0;
    ll i=1;
    while(i<n){
        ll j=i;
        while(j<n&&v[j]>=v[j-1]) j++;
        if(j>=n){
            break;
        }
        count++;
        i=j+2;
    }
    cout<<count<<endl;
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
