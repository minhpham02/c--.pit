#include<iostream>
using namespace std;
void nhap(int a[],int n){
	for(int i=0;i<n;i++)
		cin >> a[i];
}
void in(int a[],int n){
	int m=a[0];
		for(int i=1;i<n;i++){
			if(m<a[i])	m=a[i];
		}
		cout << m << endl;
}
int main(){
	int t,n,a[10000000];
	cin >> t;
	while(t--){
		cin >> n;
		nhap(a,n);
		in(a,n);
	}
}
