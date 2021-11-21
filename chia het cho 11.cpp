#include<iostream>
#include<cmath>
using namespace std;
bool check(string str){
	int n=str.length();
	int c=0,l=0;
	for(int i=0;i<n;i++){
		if(str[i]%2==0)	c += str[i]-'0';
		else l += str[i]-'0';
	}int t=abs(l-c);
	if(t%11==0) return true;
		return false;	
}
int main(){
	int t;
	string str;
	cin >> t;
	while(t--){
		cin >> str;
		if(check(str))	cout << "1" << endl;
		else cout << "0" << endl;
	}
} 
