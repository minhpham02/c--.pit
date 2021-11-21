#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,k;
	cin >> t;
	while(t--){
		fflush(stdin);
		string s;
		cin >> s >> k;
		sort(s.begin(),s.end());
		int count=1;
		for(int i=1;i<s.length();i++){
			if(s[i] != s[i-1])	count++;
		}
		if(count+k>=26)	cout << "1\n";
		else cout << "0\n";
	}
}
