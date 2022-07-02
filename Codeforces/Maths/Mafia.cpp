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
    // In each step, the array gets an increment of n-1;
    ll sum=0;
    ll m=0;
    f0{
        cin>>a[i];
        sum+=a[i];
        m=max(m,a[i]);
    }
    ll ans=sum/(n-1);
    if(ans<m){
        cout<<m<<endl;
        return;
    }
    if(sum%(n-1)!=0) ans++;
    cout<<ans<<endl;
    
}

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	baj();
	return 0;
}
