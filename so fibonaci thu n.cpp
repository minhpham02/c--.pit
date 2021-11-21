#include<iostream>
using namespace std;
int main(){
	int t,n;
	cin >> t;
	long long f[100];
	f[1]=1,f[2]=1;
	for(int i=2;i<=92;i++)	f[i]=f[i-1]+f[i-2];
	while(t--){
		cin >> n;
		cout << f[n] << endl;
	}
} 
