#include<iostream>
using namespace std;
long long kt(long long n){
	if(n==0 || n==1)	return 1;
	long long f1=0,f2=1,fn=0;
	while(fn<n){
		fn=f1+f2;
		if(n==fn)	return 1;
		else	f1=f2;
				f2=fn;
	} return 0;
}
int main(){
	int t;
	long long n;
	cin >> t;
	while(t--){
		cin >> n;
		if(kt(n))	cout << "YES" <<endl;
		else cout << "NO" << endl;
	}
}
