#include<bits/stdc++.h>
using namespace std;
void xuly(int a[110][110],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==0 || i==n-1 || j==0 || j==n-1)	cout << a[i][j] << " ";
			else cout << " ";
		}
		cout << endl;;
	}
}
int main(){
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		int a[110][110];
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin >> a[i][j];
			}
		}
		xuly(a,n);
	}
}
