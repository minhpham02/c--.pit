#include<iostream>
#include<string>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		fflush(stdin);
		string s;
		getline(cin,s);
		int n=s.length();
		int l=0,c=0,d=1;
		for(int i=0;i<n;i++){
			if(s[i] !=' ' || s[i+1]==' '){
				d++;
				if((s[i]-'0')%2==0)	c++;
				else l++;
				if(s[n-1]%2==0)	c++;
				else l++;
			}
		}
		if((d%2==0 && c>l) || (d%2!=0 && l<c))	cout <<"YES\n";
		else cout << "NO\n";
	}
}

