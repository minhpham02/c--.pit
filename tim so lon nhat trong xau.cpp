#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		fflush(stdin);
		string s;
		cin >> s;
		string s1=" ";
		for(int i=0;i<=s.length();i++){
			string s2=" ";
			if(s[i]-'0'>= 0 && s[i]-'0'<= 9){
				for(int j=i;j<=s.length();j++){
					if((s[j]>='a' && s[j]<='s') || s[j]=='\0'){
						s2=s.substr(i,j-i);
						if((s2.length()>s1.length()) || (s2.length()==s1.length())&& s2>s1)
							s1=s2;
							i=j;
							break;
					}
				}
			}
		} cout << s1 << endl;
	}
}
