#include<iostream>
using namespace std;
void nhap(int a[100][100],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin >> a[i][j];
		}
	}
}
int main(){
	int t,n,a[100][100];
	cin >> t;
	while(t--){
		int b=0;
		cin >> n;
		nhap(a,n);
		while(b<=n/2){
		for(int i=0;i<n;i++)	cout << a[b][i] << " ";
		for(int )	
			
		}
	}
}
