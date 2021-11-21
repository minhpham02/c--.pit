#include<iostream>
#include<cmath>
using namespace std;
long long uc(long long x,long long y){
	int n=x,m=y;
	while(y!=0){
		int a=x%y;
		x=y;
		y=a;
	} return (n*m)/x;
} 
int main(){
	int t,x,y,z,n;
	long long h,k;
	cin >> t;
	while(t--){
		cin >> x >> y >> z >> n;
		k=uc(x,y);
		h=uc(k,z);
		long long b=(pow(10,n-1))/h;
		long long c=(b+1)*h;
		if(c>pow(10,n-1) && c<pow(10,n))	cout << c << endl;
		else cout <<"-1" << endl;
	}	
}
