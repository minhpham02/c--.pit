#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int sum=0;
		fflush(stdin);
		string s;
		cin >> s;
		for(int i=0;i<=s.length();i++){
			if(s[i]-'0' >= 0 && s[i]-'0' <= 9){
				int temp=0;
				while(s[i]-'0' >=0 && s[i]-'0' <= 9){
					temp = temp*10+(s[i]-'0');
					i++;
				}
			sum += temp;
			}
		}
		cout << sum << endl;
	}
}
