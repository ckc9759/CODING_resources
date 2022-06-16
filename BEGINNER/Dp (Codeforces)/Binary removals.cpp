#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<ll>
#define mod 1000000007
#define f0 for(int i=0;i<n;i++)
#define mi map<ll,ll>

void baj(){
    string s;
    cin>>s;
    int flag=0;
    int c=0;
    int d=0;
    if(is_sorted(s.begin(),s.end())){
        cout<<"YES"<<endl;
        return;
    }
    int y=0;
    for(int i=s.size();i>0;i--){
        if(s[i]=='0'&&s[i-1]=='0'){
            y=i-1;
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"YES"<<endl;
        return;
    }
    int flag2=0;
    for(int i=y;i>0;i--){
        if(s[i]=='1'&&s[i-1]=='1'){
            flag2=1;
            break;
        }
    }
    if(flag2==0){
        cout<<"YES"<<endl;
        return;
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
