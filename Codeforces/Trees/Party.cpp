/*Approach --> we have to count total number of levels in this question, we count the occuring of all kind of numbers except those who dont have any boss that is -1 and then add 1 to the answer*/

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
    ll v[n];
    mi m;
    ll ans=0;
    ll c=0;
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    for(int i=1;i<=n;i++){
        ll x=v[i];
        c=0;
        while(x>0){
            x=v[x];
            c++;
        }
        ans=max(ans,c);
    }
    cout<<ans+1<<endl;
}

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	baj();
	return 0;
}
