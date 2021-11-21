#include<iostream>
using namespace std;
long long kt(long long a,long long b, long long c){
	if(b==0)	return 0;
	if(b==1)	return a%c; 
	long long temp=kt(a,b/2,c);
	if(b%2==0)	 return temp*2%c;
	else	return (a+2%c*temp)%c;
}
int main(){
	int t;
	long long a,b,c;
	cin >> t;
	while(t--){
		cin >> a >> b >> c;
		cout << kt(a,b,c) << endl;
	} 
}
