#include<iostream>
using namespace std;
void nhap(int a[],int n){
	for(int i=0;i<n;i++)
		cin >> a[i];
}
void sapxep(int a[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				int t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
}
int main(){
	int t,k,n,a[10000];
	cin >> t;
	while(t--){
		cin >> n >> k;
		nhap(a,n);
		sapxep(a,n);
		for(int i=0;i<n;i++)
			if(i==k-1)	cout << a[i] << endl;
	}
}
