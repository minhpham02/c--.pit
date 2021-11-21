#include<iostream>
using namespace std;
void nhap(int a[100][100],int n,int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin >> a[i][j];
		}
	}
}
void in(int a[100][100],int n,int m){
	int b[100][100]={0};
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j]==1){
				for(int u=0;u<n;u++){
						b[u][j]=1;
				}	
				for(int v=0;v<m;v++){
						b[i][v]=1; 
				} 
			}else a[i][j]=b[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout << b[i][j] << " ";
		}cout << endl;
	}
}
int main(){
	int t,n,m,a[100][100];
	cin >> t;
	while(t--){
		cin >> n >> m;
		nhap(a,n,m);
		in(a,n,m);
	}
}
