#include<bits/stdc++.h>
using namespace std;
int res(long long x,long long y,long long m){
	if(y==1)	return x % m;
	long long temp=res(x,y/2,m);
	if(y%2==0)	return (temp*temp)%m;
	else return (temp*temp)%m*x%m;
}
int main(){
	int t;
	cin >> t;
	while(t--){
	string a;
	long long b,m;
	cin >> a >> b >> m;
	long long mod=0;
	for(int i=0;i<a.length();i++){
		mod = (mod*10+(a[i]-'0'))%m;
		}
	 cout << res(mod,b,m) << endl;
		}
}
