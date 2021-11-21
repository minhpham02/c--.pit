#include<iostream>
#include<string>
using namespace std;
string s;
int xuly(int k){
	int n=s.length(),d=0;
	for(int i=0;i<n;i++){
		int m=0;
		for(int j=i;j<n;j++){
			m=m*10+s[j]-'0';
			m=m%k;
			if(m==0)	d++;
		}
	} return d;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		fflush(stdin);
		cin >> s;
		cout << xuly(8)-xuly(24) << endl;
		}
	}
