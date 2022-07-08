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
    vi a(n);
    ll even=0,odd=0;
    vi e;
    vi o;
    f0{
        cin>>a[i];
        if(a[i]%2==0){
            e.push_back(a[i]);
        }
        else{
            o.push_back(a[i]);
        }
    }
    for(int i=0;i<o.size();i++){
        cout<<o[i]<<" ";
    }
    for(int i=0;i<e.size();i++){
        cout<<e[i]<<" ";
    }
    cout<<endl;
    
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
