#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
	string s;
	cin >> s;
	int n= s.size(),kt=0;
	for(int i=0;i<n-1;i++){
		if(s[i]!=s[i+1]+1 && s[i] != s[i+1]-1)	kt=1;
	}
	if(kt==0)	cout << "YES" << endl;
	else cout << "NO" << endl;
	}
}
