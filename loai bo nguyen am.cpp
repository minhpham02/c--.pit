#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin >> s;
	fflush(stdin);
	for(int i=0;i<s.length();i++){
		if(s[i]!='u' && s[i]!='e' && s[i]!='o' && s[i]!='Y' && s[i]!='y' && s[i]!='a' && s[i]!='i' && s[i]!='U' && s[i]!='E' && s[i]!='O' && s[i]!='A' && s[i]!='I'){
			if(s[i] >= 65 && s[i] <= 90){ s[i] += 32; cout << "." << s[i]; 
			}else cout << "." << s[i];
		}
	}
}
