/* Approach --> We have to make the string palindrome, therefore we check half of the string and take cnt of the number of indices which are unmatched, since we can alter two indices in one operation, the answer would be (cnt+1)/2.
We have taken cnt+1 to tackle odd and even scenarios. 
If cnt is odd we will have to make an extra operation.*/


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
    ll cnt=0;
    for(ll i=0;i<n/2;i++){
        cnt+=(a[i]!=a[n-i-1]);
    }
    cout<<(cnt+1)/2<<endl;
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
