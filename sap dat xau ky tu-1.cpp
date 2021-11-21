#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){ 
		fflush(stdin);
		string s;
		cin >> s;
		int f[26]={};
		for(int i=0;i<s.length();i++)	f[s[i]-'a']++;
		int sum=0,res=0;
		sort(f,f+26);
		for(int i=24;i>=0;i--){
			sum += f[i];
		if(sum >= f[25]){
			res=1;	break;
			}
		}
		cout << res << endl;
	}
}
