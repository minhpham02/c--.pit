#include<iostream>
#include<algorithm>
using namespace std;
void nhap(int a[],int n){
	for(int i=0;i<n;i++)
		cin >> a[i];
}
void xuly(int a[],int b[],int n,int m){
	int d=m+n,c[d];
	for(int i=0;i<d;i++){
	if(i<n)	c[i]=a[i];
	else	c[i]=b[i-n];
	}
	for(int i=0;i<m+n-1;i++){
		for(int j=i+1;j<m+n;j++){
			if(c[i]>c[j]){
				int t=c[i];
				c[i]=c[j];
				c[j]=t;
			}
		}
	}
	for(int i=0;i<m+n;i++)
		cout << c[i] << " ";
}
int main(){
	int t,n,m;
	cin >> t;
	while(t--){
		cin >> n >> m;
		int a[n],b[m];
		nhap(a,n);
		nhap(b,m);
		xuly(a,b,n,m);
		cout << endl;
	} 
}
