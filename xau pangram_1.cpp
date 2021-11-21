#include<bits/stdc++.h>
using namespace std;
int check(string s,int k){
	bool mark[26]={false},n;
	for(int i=0;i<s.length();i++){
		if('A'<=s[i] && s[i]<='S'){
			n=s[i]-'A';
			mark[n]=true;
		}
		else if('a'<=s[i] && s[i]<='s'){
			n=s[i]-'a';
			mark[n]=true;
		}
	}
	int count=1;
		for(int i=0;i<26;i++){
			if(mark[i]==false)	count++;
		}
		if(n<26)	return  0;
		return (k>=count);
	}
int main(){
	int t,k;
	string s;
	cin >> t;
	while(t--){
		fflush(stdin);
		cin >> s >> k;
		if(check(s,k))	cout << "1\n";
		else cout << "0\n";
	}
}
