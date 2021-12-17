#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	scanf("\n");
	while(t--){
		string s1;
		cin >> s1;
		string s2,s3="";
		cin >> s2;
		for(int i=0;i<s2.size();i++){
			if(s2[i] >= 'A' && s2[i] <= 'Z')	s3 += s2[i];
		}
		int kt=1;
		if(s3.size() != s1.size()){
			cout << "NO\n";
			continue;
		}
		for(int i=0;i<s3.size();i++){
			if(s3[i] - 'A' + '0' != s1[i] && s3[i] - 'K' + '0' != s1[i]){
				cout << "NO\n";
				kt=0;
				break;
			}
		}
		if(kt) cout << "YES\n";
	}
}
