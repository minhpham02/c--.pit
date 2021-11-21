#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		fflush(stdin);
		string s;
		cin >> s;
		int sum=0;
		sort(s.begin(),s.end());
		for(int i=0;i<s.length();i++){
			if(s[i]-'0'>=0 && s[i]-'0'<=9){
				sum = sum + (s[i]-'0');
			}else	cout << s[i];
		} cout << sum << endl;
	}
}
