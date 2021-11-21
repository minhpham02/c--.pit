#include<iostream>
using namespace std;
void nhap(int a[],int n){
	for(int i=0;i<n;i++)
		cin >> a[i];
}
int fibo(int n){
	if(n==1 || n==0)	return 1;
	int f1=0,f2=1,fn=0;
	while(fn<n){
		fn=f1+f2;
		if(n==fn)	return 1;
		else f1=f2;
			 f2=fn;
	}return 0;
}
int main(){
	int t,n,a[1000];
	cin >> t;
	while(t--){
		cin >> n;
		nhap(a,n);
		for(int i=0;i<n;i++)
			if(fibo(a[i]))	cout << a[i] << " ";
			cout << endl;
	}
} 
