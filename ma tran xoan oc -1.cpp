#include<iostream>
using namespace std;
int main(){
	int t,n,m;
	cin >> t;
	while(t--){
		int b=0;
		int k=0;
		cin >> n >> m;
		int a[n][m];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
			cin >> a[i][j];
		}
	}
		int c[m*n]={0};
		while(b<=n/2){
			for(int i=b;i<m-b;i++)	c[k++]=a[b][i];
			for(int i=b+1;i<n-b;i++) c[k++]=a[i][m-b-1];
			for(int i=m-b-2;i>=b;i--)	c[k++]=a[n-1-b][i];
			for(int i=n-b-2;i>b;i--)	c[k++]=a[i][b];
			b++;
		}
		for(int i=0;i<n*m;i++)
			cout << c[i] << " ";
			cout << endl;
	}
}
