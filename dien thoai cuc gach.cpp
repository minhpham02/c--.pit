#include<bits/stdc++.h>
using namespace std;
string chuyen(string &s){
	for(int i=0;i<s.length();i++){
		if(s[i]=='a' || s[i]=='b' || s[i]=='c')	s[i]='2';
		if(s[i]=='d' || s[i]=='e' || s[i]=='f')	s[i]='3';
		if(s[i]=='g' || s[i]=='h' || s[i]=='i')	s[i]='4';
		if(s[i]=='j' || s[i]=='k' || s[i]=='l')	s[i]='5';
		if(s[i]=='m' || s[i]=='n' || s[i]=='o')	s[i]='6';
		if(s[i]=='p' || s[i]=='q' || s[i]=='r' || s[i]=='s')	s[i]='7';
		if(s[i]=='t' || s[i]=='u' || s[i]=='v')	s[i]='8';
		if(s[i]=='w' || s[i]=='x' || s[i]=='y' || s[i]=='z')	s[i]='9';
	}
	return s;
}
bool check(string s){
	int l=0;
	int r=s.length()-1;
	while(l<r){
		if(s[l] != s[r])	return false;
		else{
		 l++;	r--;
		}
	}
	return true;
}
void solve(){
	string s;
	cin >> s;
	for(int i=0;i<s.length();i++){
		if(s[i]>='A' && s[i]<='Z')	s[i] += 32;
	}
	chuyen(s);
	if(check(s))	cout << "YES\n";
	else cout << "NO\n";
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
