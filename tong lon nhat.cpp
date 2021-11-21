#include<bits/stdc++.h>
using namespace std;
void nhap(int a[],int n){
	for(int i=0;i<n;i++)
		cin >> a[i];
}
int xuly(int a[],int b[],int n,int m){
	int t=0,MAX=0;
	for(int i=0;i<n;i++){
		t += a[i];
		int s=0;
		for(int j=i+1;j<m;j++){
			s += b[j];
		}
		int l=t+s;
		if(l>MAX)	swap(MAX,l);
	}
	return MAX;
}
int main(){
	int t,n,m;
	cin >> t;
	while(t--){
		cin >> n >> m;
		int a[n],b[m];
		nhap(a,n);
		nhap(b,m);
		int h=xuly(a,b,n,m);
		int k=xuly(b,a,m,n);
		if(h>k)	cout << h << endl;
		else cout << k << endl;
	}
}
		
