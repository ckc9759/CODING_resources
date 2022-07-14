#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<ll>
#define mod 1000000007
#define f0 for(int i=0;i<n;i++)
#define mi map<ll,ll>
 
// Utility function to find
// GCD of 'a' and 'b'
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
 
// Returns LCM of array elements
ll findlcm(ll arr[], ll n)
{
    // Initialize result
    ll ans = arr[0];
 
    // ans contains LCM of arr[0], ..arr[i]
    // after i'th iteration,
    for (int i = 1; i < n; i++)
        ans = (((arr[i] * ans)) /
                (gcd(arr[i], ans)));
 
    return ans;
}

void baj(){
    ll n;
    cin>>n;
    vi d(n);
    ll maxm=0;
    ll minm=1000000007;
    f0{
        cin>>d[i];
        maxm=max(maxm,d[i]);
        minm=min(minm,d[i]);
    }
    ll x=minm*maxm;
    bool flag=true;
    for(auto it: d){
        if(x%it>0){
            flag=false;
            break;
        }
    }
    vi c;
    for(int i=1;i<=sqrt(x);i++){
        if(x%i==0){
          c.pb(i);
        if(x/i!=i) c.pb(x/i);
        }
    }
    d.pb(1);
    d.pb(x);
    sort(d.begin(),d.end());
    sort(c.begin(),c.end());
    /*for(int i=0;i<c.size();i++){
        cout<<c[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<d.size();i++){
        cout<<d[i]<<" ";
    }
    cout<<endl;
    */
    if(flag==false||c!=d) cout<<-1<<endl;
    else cout<<x<<endl;
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
