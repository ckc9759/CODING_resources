#include <iostream>
using namespace std;

bool checksec(string str, string pattern){
    int l1=pattern.size();
    int l2=str.size();
    int i=0;
    int j=0;
    while(i<l2 and j<l1){
        if(str[i]==pattern[j]){
            i++;
            j++;
        }
        else{
            i++;
        }
    }
        if(j == l1){
            return true;
        }
        else{
            return false;
        }
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string str;
	    string pattern;
	    cin>>str>>pattern;
	    if(checksec(str,pattern) or checksec(pattern,str)){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
