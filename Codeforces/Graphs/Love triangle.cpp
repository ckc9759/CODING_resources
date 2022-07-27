/*Approach --> Simple question, we just need to implement what is said in the question. We take input and check for the existence of a triangle using indexes*/

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
    vi f(n);
    for(int i=1;i<=n;i++){
        cin>>f[i];
    }
    for(int i=1;i<=n;i++){
        if(f[f[f[i]]]==i){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	baj();
	return 0;
}
