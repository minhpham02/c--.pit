#include<iostream>
#include<string>
using namespace std;
int kt(string s,int n,int i){
	for(int j=0;j<n;j++){
		if(s[i]==s[j] && i != j)	return 0;
	} return 1;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		fflush(stdin);
		string s;
		cin >> s;
		int n=s.length();
		for(int i=0;i<n;i++)
			if(kt(s,n,i))	cout << s[i];
		cout << endl;
	} 
} 
