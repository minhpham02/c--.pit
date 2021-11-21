#include<iostream>
#include<cmath>
using namespace std;
int nt(int n){
	if(n<2)	return 0;
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0)	return 0;
			return 1;
}
int main(){
	int t,n;
	cin >> t;
	while(t--){
		int kt=1;
		cin >> n;
		for(int i=2;i<=sqrt(n);i++){
			if(nt(i) && nt(n-i)){	kt=0; 
			cout << i << " " << n-i << endl;  break;
				}
		}if(kt==1)	cout << "-1" << endl;
	}
}

