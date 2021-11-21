#include<iostream>
using namespace std;
int main(){
	int t;
	string s;
	cin >> t;
	while(t--){
		int kt=1;
		int d[1000]={0};
		cin >> s;
		for(int i=0;i<s.size();i++){
			d[s[i]]++;
			if(s[i]<48 || s[i]>57 || s[0]=='0' ){
				kt=0;
				cout << "INVALID\n";
				break;
			}
		}if(kt==0)	continue;
		for(int i=48;i<=57;i++){
			if(d[i]==0){
				cout << "NO\n";
				kt=0; 
				break;
			}
		}
		if(kt==1)	cout <<"YES\n";
	}
} 
