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
    ll sum=0,m=0;
    f0{
        cin>>a[i];
        m=max(a[i],m);
        sum+=a[i];
    }
    if((sum&1)||2*m>sum) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    baj();
	return 0;
}
