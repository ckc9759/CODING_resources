/* Approach --> */
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
    // Sorting for greedy approach
    sort(a.begin(),a.end());
    ll inc=0;
    ll s_inc=0;
    for(int i=0;i<n && s_inc+a[i]<n;i++){
        s_inc+=a[i];
        inc++;
    }
    cout<<inc<<endl;
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
