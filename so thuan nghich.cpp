#include<iostream>
using namespace std;
int main(){
 	int t;
 	cin >> t;
 	while(t--){
 		int kt=0;
 		string s;
 		cin >> s;
 		int n=s.size();
 		int d=0,c=n-1;
 		while(d<c){
 			if(s[d]!=s[c]) kt=1;
 		d++;c--;
	 }
 		if(kt==0)	cout << "YES" << endl;
 		else cout << "NO" << endl;
	 }
 } 
