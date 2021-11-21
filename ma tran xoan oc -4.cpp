#include<bits/stdc++.h>
using namespace std;
void nhap(int a[100][100],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin >> a[i][j];
		}
	}
}
void xuly(int a[100][100],int n){
	int b[n*n]={0},m=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			b[m++]=a[i][j];
		}
	}
	sort(b,b+m);
	int c=0,k=0;
	while(c<=n/2){
		for(int i=c;i<n-c;i++)	a[c][i]=b[k++];
		for(int i=c+1;i<n-c;i++)	a[i][n-c-1]=b[k++];
		for(int i=n-c-2;i>=c;i--)	a[n-1-c][i]=b[k++];
		for(int i=n-c-2;i>c;i--)	a[i][c]=b[k++];
		c++;
	}
}
void in(int a[100][100],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
				cout << a[i][j] << " ";
			}cout << endl;
		}
}
int main(){
	int n;
	cin >> n;
	int a[100][100];
	nhap(a,n);
	xuly(a,n);
	in(a,n);
}
