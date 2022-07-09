/*Approach --> This is a simple problem of brute force and bitwise operation.
We have been given n=100, hence we can run two loops and
check for cases where ai & aj == ai and increment the count.*/

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
    ll cnt=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if((a[i] & a[j])==a[i]) cnt++;
        }
    }
    cout<<cnt<<endl;
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
