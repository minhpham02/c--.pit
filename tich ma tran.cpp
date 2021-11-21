#include<iostream>
using namespace std;
void nhap(int a[50][50],int n,int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin >> a[i][j];
		}
	}
}
void in(int a[50][50],int b[50][50],int n,int m,int p){
	for(int i=0;i<n;i++){
		for(int j=0;j<p;j++){
			int l=0;
			for(int k=0;k<m;k++){
				l += a[i][k]*b[k][j];
			}cout << l << " ";
		}cout << endl;
	}
}
int main(){
	int n,m,p;
	int a[50][50],b[50][50];
	cin >> n >> m >> p;
	nhap(a,n,m);
	nhap(b,m,p);
	in(a,b,n,m,p);
}
