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
    f0{
        cin>>a[i];
    }
    vi b(n);
    f0{
        cin>>b[i];
    }
    vector<ll>c;
    f0{
        c.push_back(b[i]-a[i]);
    }
    sort(c.begin(),c.end());
    ll ans=0;
    f0{
        auto it=lower_bound(c.begin()+i+1,c.end(),-c[i]);
        ll id=it-c.begin();
        ans+=id-(i+1);
    }
    cout<<ans<<endl;
}

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    baj();
	return 0;
}
