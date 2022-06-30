#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<ll>
#define mod 1000000007
#define f0 for(int i=0;i<n;i++)
#define mi map<ll,ll>

void baj(){
    ll n,a,b;
    cin>>n>>a>>b;
    ll s=1;
    ll flag=0;
    if(a==1){
        if((n-1)%b==0){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
        return;
    }
    while(s<=n){
        if((n-s)%b==0){
            flag=1;
            break;
        }
        s*=a;
    }
    if(flag){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
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
