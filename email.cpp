#include<bits/stdc++.h>
using namespace std;
bool kt(string s){
	int n=0;
	for(int i=0;i<s.length();i++){
				if(!isalnum(s[i]) && !isalpha(s[i]) && s[i] != '.' && s[i] != '_' && s[i] != '@'){	return 0;
				}
				if(s[i]=='@')	n++;
				if(n>1)	return 0;
			}
				int ht=0,i;
				for(int i=0;s[i] != '@';i++){
					if(isalnum(s[i]) && isalpha(s[i]))	ht=1;
					if(i>64)	return 0;
				}
				if(ht==0) return 0;
				bool res=0;
				int k=0;
				for(int j=i+1;j<s.length();j++){
					if(s[j] == '.')	res=1;
					k++;
					if(k > 254)	return 0;
				}
			if(res==0) return 0;
			if(s[s.length()-1]=='.')	return 0;
			return 1;
		}
int main(){
	int t;
	cin >> t;
	scanf("\n");
	while(t--){
		string s;
		getline(cin,s);
		if(kt(s))	cout << "YES\n";
		else cout << "NO\n";
	}
}
		
