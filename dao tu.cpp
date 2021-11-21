#include<bits/stdc++.h>
using namespace std ;
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		string res="";
		for(int i=0;i<=s.length();i++){
			if(s[i]==' ' || s[i]=='\0'){
				string sub=s.substr(0,i);
				s.erase(0,i+1);
				res=sub+' '+res;
			i=0;
			}
			if(s[i]=='\0')	break;
		}
		cout << res << endl;
	}
} 
