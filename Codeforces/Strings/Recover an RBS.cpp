/* Approach --> We take the left opening bracket as a +1 and right as a -1. 
The conditions for a RBS is prefix sum at any index must be greater than 0 and the prefix sum at the last index must be zero.
Therefore, we will check for 2 RBS, optimal and 2nd optimal. if both exist "YES" else "NO". 
The checking process is done with the check string */

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
    string s;
    cin>>s;
    ll bf=0;
    ll cnt=0;
    for(auto x:s){
        if(x==')'){
            cnt++;
        }
        else if(x=='('){
            cnt--;
        }
        else{
            bf++;
        }
    }
    ll open=(bf+cnt)/2;
    ll close=(bf-cnt)/2;
    if(open==0||close==0){
        cout<<"YES"<<endl;
        return;
    }
    string check =string(open-1,'(')+string(1,')')+string(1,'(')+string(close-1,')');
    ll ptr=0;
    for(auto &x : s){
        if(x=='?'){
            x=check[ptr++];
        }
    }
    cnt=0;
    for(auto x:s){
        if(x=='('){
            cnt++;
        }
        else{
            cnt--;
        }
        if(cnt<0){
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
	int t;
	cin>>t;
	while(t--){
	  baj();
	}
	return 0;
}
