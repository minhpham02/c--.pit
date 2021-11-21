#include<iostream>
#include<string>
using namespace std;
int gcd(int a,int b){
	while(b!=0){
		int n=a%b;
		a=b;
		b=n;
	} return a; 
}
int main(){
	int t;
	cin >> t;
	while(t--){
		fflush(stdin);
		long long a,c=0;
		string b;
		cin >> a >> b;
		for(int i=0;i<b.length();i++){
			c=(c*10+b[i]-'0')%a;
		}
		cout <<  gcd(a,c) << endl;
	}
}
