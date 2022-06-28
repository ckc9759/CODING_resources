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
        if(m[s]==1){
            cout<<"OK"<<endl;
        }
        else{
            string z=s;
            z+=to_string(m[s]-1);
            cout<<z<<endl;
            m[z]++;
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
