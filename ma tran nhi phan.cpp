#include<iostream>
using namespace std;
void nhap(int a[1000][3],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<3;j++){
			cin >> a[i][j];
		}
	}
}
int main(){
	int n,a[1000][3];
	cin >> n;
	nhap(a,n);
	int d=0;
	for(int i=0;i<n;i++){
		int h=0,k=0;
		for(int j=0;j<3;j++){
			if(a[i][j]==1)	h++;
			else k++;	
		}if(h>k)	d++;
	}
	cout << d;
}
