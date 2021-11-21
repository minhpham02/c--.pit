#include<iostream>
#include<cmath> 
using namespace std;
int nt(int n){
	if(n<2)	return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)	return 0;
	}return 1;
}
int kt(int n){
	int d=0,m=n;
	if(n<30)	return 0;
	if(n%2==0){
		d=1;
		n=n/2;
		if(n%2==0)	return 0;
	}for(int j=3;j<=m;j+=2){
		if(nt(j)){
			if(n%j==0){
				d++;
				n=n/j;
				if(n==1)	break;
				if(n%j==0)	return 0;
				if(d>3)	return 0;
			}
		}
	}if(d!=3)	return 0;
	return 1;
		
} 
int main (){
	int t,n;
	cin >> t; 
	while(t--){
		cin >> n;
			if(kt(n))	cout << "1" << endl;
			else cout << "0" << endl;
		}
	}
