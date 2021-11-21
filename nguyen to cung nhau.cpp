#include<iostream>
#include<cmath>
using namespace std;
int nt(int n){
	if(n<2)	return 0;
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0)	return 0;
			return 1;
}
int uc(int n,int m){
	int a;
	while(m!=0){
		a=n%m;
		n=m;
		m=a;
	}if(n==1)	return 1;
	return 0; 
}
int main(){
	int t,x;
	cin >> t;
	while(t--){
		int d=0;
		cin >> x;
		for(int i=0;i<x;i++){
			if(uc(i,x)) d++;
		}
		if(nt(d))	cout << "1" << endl;
		else cout << "0" << endl;	
	}
}
