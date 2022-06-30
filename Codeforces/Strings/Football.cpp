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
    map<string,ll>m;
    while(n--){
        string s;
        cin>>s;
        m[s]++;
    }
    ll j=0;
    for(auto it:m){
        j=max(j,it.second);
    }
    for(auto it:m){
        if(it.second==j){
            cout<<it.first<<endl;
            return;
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
