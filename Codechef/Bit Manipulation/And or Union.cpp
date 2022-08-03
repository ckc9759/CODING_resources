/*Approach --> The last operation we perform is bitwise or which makes a bit set if any of the bits being ored is set. 
We use this principle to find if any of the numbers have a set bit in them.
If the bit is set, it will also be set in the ans. */

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<ll>
#define mod 1000000007
#define f0 for(int i=0;i<n;i++)
#define mi map<ll,ll>
#define srt(a) sort(a.begin(),a.end())

void baj(){
    ll n;
    cin>>n;
    vi a(n);
    f0{
        cin>>a[i];
    }
    vi setbit(30);
    f0{
        for(int j=0;j<30;j++){
            if(a[i] & (1<<j)){
                setbit[j]++;
            }
        }
    }
    ll ans=0;
    for(int i=0;i<30;i++){
        if(setbit[i]>1){
            ans|=(1<<i);
        }
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
