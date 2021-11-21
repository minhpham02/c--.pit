#include<iostream>
#include<cmath>
using namespace std;
int kt(int n){
	int c=0,l=0;
	while(n>0){
		int a=n%10;
		n/=10;
		if(a%2==0)	c++;
		else l++;
	}if(c==l)	return 1;
		return 0;
}
int main(){
	int n,d=0;
	cin >> n;
	int a=pow(10,n-1);
	int b=pow(10,n);
	for(int i=a;i<b;i++){
		if(kt(i)){	cout << i << " ";
		 d++;
	}if(d%10==0){	cout << endl;
		d=0;
		}
	}
}
