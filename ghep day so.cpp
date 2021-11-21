#include<bits/stdc++.h>
using namespace std;
void nhap(int n,int k,int a[100][100]){
	for(int i=0;i<n;i++)
		for(int j=0;j<k;j++)
			cin >> a[i][j];
}
void sapxep(int n,int k,int a[100][100]){
	int b[n*k],m=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<k;j++){
				b[m++] =a[i][j] ;
				}
			}
	sort(b,b+m);	
	for(int i=0;i<m;i++)
		cout << b[i] << " ";
	}
int main(){
	int t,n,k,a[100][100];
	cin >> t;
	while(t--){
		cin >> n >> k;
		nhap(n,k,a);
		sapxep(n,k,a);
		cout << endl;
	}
}
