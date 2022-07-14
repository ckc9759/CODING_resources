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
    string a;
    cin>>a;
    mi m;
    ll total=0;
    m[0]=1;
    ll sum=0;
    f0{
        ll x=a[i]-'0';
        x--;
        sum+=x;
        total+=m[sum];
        m[sum]++;
    }
    cout<<total<<endl;
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
