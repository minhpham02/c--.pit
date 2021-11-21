#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,i,j=0;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		string s1;
		if(s[0]=='+'){	s1 += '0';	j += 3;}
		else if(s[0] != '0'){	s1+='0'; j += 2;}
		for(int i=0;i<s.length();i++){
			if(s[i]!='.' && s[i]!=' ' &&s[i]!='-')	s1 += s[i];
			}
		cout << s1 << endl;
	} 
}
