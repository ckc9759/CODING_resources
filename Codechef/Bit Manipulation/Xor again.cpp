/* Approach - We make use of cancelling propertry of xor as we cannot generate the array b as it will give TLE due to o(n2) algorithm.
Since, (1,2) and (2,1) elements of array B represent same element their xor will be 0 and effectively won't contribute in XOR(B)*/

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
    vi b(n*n);
    f0{
        cin>>a[i];
    }
    ll ans=0;
    f0{
        ans^=a[i]+a[i];
    }
    cout<<ans<<endl;
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
