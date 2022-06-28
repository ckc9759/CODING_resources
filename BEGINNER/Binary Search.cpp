#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<ll>
#define mod 1000000007
#define f0 for(int i=0;i<n;i++)
#define mi map<ll,ll>

ll ar[(ll)1e6+10];
set<ll>tprime;

void t_prime(){
    tprime.insert(4);
    for(ll i=3;i<(ll)1e6+1;i+=2){
        if(ar[i]==0){
            tprime.insert(i*i);
            for(ll j=i;j<=1e6;j+=i){
                ar[j]=1;
            }
        }
    }
}

void baj(){
    ll n;
    cin>>n;
    t_prime();
    while(n--){
        ll x;
        cin>>x;
        if(tprime.find(x)!=tprime.end()){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    baj();
	return 0;
}
