#include<iostream>
using namespace std;
void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
}
int main(){
	int t,n,a[1000005];
	cin >> t;
	while(t--){
		cin >> n;
		nhap(a,n);
		for(int i=0;i<n;i++)
			if(a[i]<0)	a[i]=0;
		int m=1;
		for(int i=0;i<n;i++){
			if(m==a[i])	m++;
		}cout << m << endl;
	}
}
