#include<iostream>
using namespace std;
void nhap(int a[100][100],int n,int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin >> a[i][j];
		}
	}
}
void xuly(int a[100][100], int m, int n){
	int i, b=0, d=0, t=0, c[10000]={0};
	while(b<=(m+1)/2){
        for(i=b; i<n-b; i++){    c[t]=a[b][i]; t++;}
        if(t==m*n) break;
        for(i=b+1; i<m-b; i++){  c[t]=a[i][n-b-1]; t++;}
        if(t==m*n) break;
        for(i=n-b-2; i>=b; i--){ c[t]=a[m-b-1][i]; t++;}
        if(t==m*n) break;
        for(i=m-b-2; i>b; i--){  c[t]=a[i][b]; t++;}
        if(t==m*n) break;
        b++;
    }
    for(i=t-1; i>=0; i--)
		cout << c[i] << " ";
}
int main(){
	int t,n,m,a[100][100];
	cin >> t;
	while(t--){
		cin >> n >> m;
		nhap(a,n,m);
		xuly(a,n,m);
		cout << endl;
	}
}
