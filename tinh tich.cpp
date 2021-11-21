#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void nhap(long long  a[],int n){
	for(int i=0;i<n;i++)
		cin >> a[i];
}
int main(){
	int t,n,m;
	long long a[1000000],b[1000000];
	cin >> t;
	while(t--){
		long long h;
		cin >> n >> m;
		nhap(a,n);
		nhap(b,m);
		sort(a,a+n);
		sort(b,b+m);
		h=a[n-1] * b[0];
		cout << h << endl;
	}
} 
