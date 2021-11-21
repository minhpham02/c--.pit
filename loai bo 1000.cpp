#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int count=0;
		for(int i=0;i<s.length()-2;i++){
			if(s[i]=='1' && s[i+1]=='0' && s[i+2]=='0'){
			s.erase(i,3);
			count += 3;
			}
		}
		cout << count << endl;
	}
}
