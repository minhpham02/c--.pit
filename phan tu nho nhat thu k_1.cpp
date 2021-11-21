#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void nhap(int a[100][100],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin >> a[i][j];
		}
	}
}
int main(){
	int t,n,k,a[100][100];
	cin >> t;
	while(t--){
		cin >> n >> k;
		nhap(a,n);
		int m=0,b[100000];
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				b[m++]=a[i][j];
			}
		}
		sort(b,b+m);
		for(int i=0;i<m;i++)
			if(i==k-1)	cout << b[i] << endl;
	}
}
