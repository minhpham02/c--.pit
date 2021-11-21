#include<iostream>
using namespace std;
void nhap(int a[],int n){
	for(int i=0;i<n-1;i++)
		cin >> a[i];
}
int main(){
	int n,t,a[1000000];
	cin >> t;
	while(t--){
		int s=0;
		cin >> n;
		nhap(a,n);
		for(int i=0;i<n-1;i++)
			s += a[i];
		int m=((n*(n+1))/2)-s;
		cout << m << endl;
	} 
}
