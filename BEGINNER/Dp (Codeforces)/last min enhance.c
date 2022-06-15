#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        int cnt = 1;
        for (int i = 1; i < n; ++i) {
            if (a[i] != a[i - 1]) {
                ++cnt;
            } else {
                if (i + 1 < n && a[i + 1] == a[i]) {
                    continue;
                } else {
                    ++a[i];
                    ++cnt;
                }
            }
        }
        cout<<cnt<<endl;
	}
	return 0;
}
