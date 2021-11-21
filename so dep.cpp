#include<iostream>
using namespace std;
int tn(string s,int n){
	int d=0,c=n-1;
	while(d<c){
		if(s[d] != s[c])	return 0;
		d++;c--;
	} return 1;
}
int kt(string s,int n){
	for(int  i=0;i<n;i++)
		if(s[i]%2 != 0)		return 0;
			return 1;
}
int main(){
	int t;
	string s;
	cin >> t;
	while(t--){
		cin >> s;
		int n = s.size();
		if(tn(s,n) && kt(s,n))	cout << "YES" << endl;
		else	cout << "NO" << endl;
	}
}
