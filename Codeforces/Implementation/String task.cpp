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
    string m="";
    for(int i=0;i<s.size();i++){
        m+=tolower(s[i]);
    }
    string z="";
    for(int i=0;i<s.size();i++){
        if(m[i]=='a'||m[i]=='e'||m[i]=='i'||m[i]=='o'||m[i]=='u'||m[i]=='y'){
            continue;
        }
        else{
            z+='.';
            z+=m[i];
        }
    }
    cout<<z<<endl;
}

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    baj();
	return 0;
}
