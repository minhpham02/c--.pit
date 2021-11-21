#include<iostream>
#include<string>
using namespace std;
int kt(int s){
	int n=0;
	while(s>0){
		n += s%10;
		s /= 10;
	}if(n==9)	return 1;
	if(n>17)	kt(n);
		return 0;
}
int main(){
	int t,k;
	cin >> t;
	while(t--){ 
		fflush(stdin);
		string s;
		cin >> s;
		int n=s.length(),sum=0;
		for(int i=0;i<n;i++){
			sum=(sum+s[i]-'0'); 
		}
		if(kt(sum))	cout << "1\n";
		else cout << "0\n"; 
	}
}
