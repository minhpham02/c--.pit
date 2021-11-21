#include<iostream>
#include<cmath>
using namespace std;
int nt(int n){
	if(n<2)	return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)	return 0;
	}return 1;
}
int main(){
	int t,l,r;
	cin >> t;
	while(t--){
		int d=0;
		cin >> l >> r;
		for(int i=l;i<=r;i++){
			if(nt(i))	d++;
		}cout << d << endl;
	}
} 
