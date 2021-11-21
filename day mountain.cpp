#include<bits/stdc++.h>
using namespace std;
void nhap(int a[],int n){
	for(int i=0;i<n;i++)
		cin >> a[i];
}
void xuly(int a[],int n,int l,int r){
	int i=l;
	while(a[i]<a[i+1] && i<r)	i++;
	while(a[i]>a[i+1] && i<r)	i++;
	if(i==r)	cout << "Yes\n";
	else cout << "No\n";
}
int main(){
	int n,t,l,r;
	cin >> t;
	while(t--){
		cin >> n;
		int a[n];
		nhap(a,n);
		cin >> l >> r;
		xuly(a,n,l,r);
	} 
}
