#include<iostream>
using namespace std;
void nhap(int a[],int n){
	for(int i=0;i<n;i++)
		cin >> a[i];
}
void sapxep(int a[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]<a[j]){
				int t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
}
void in(int a[],int n,int m){
	for(int i=0;i<m;i++)
		cout << a[i] << " ";
}
int main(){
	int t,n,a[1000000],m;
	cin >> t;
	while(t--){
		cin >> n >> m;
		nhap(a,n);
		sapxep(a,n);
		in(a,n,m);
		cout << endl;
	}
} 
