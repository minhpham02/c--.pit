#include<iostream>
using namespace std;
void nhap(int a[],int n){
	for(int i=0;i<n;i++)
		cin >> a[i];
}
int main(){
	int t,n,a[100000];
	cin >> t;
	while(t--){
		int b[100000]={0};
		cin >> n;
		nhap(a,n);
		for(int i=0;i<n;i++){
			if(i==0){	b[i]=a[i]*a[i+1];
			}else if(i==n-1){ b[i]=a[i-1]*a[i];
			}else 	b[i]=a[i-1]*a[i+1];
		}
		for(int i=0;i<n;i++)
			cout << b[i] << " ";
			cout << endl;
		}
	}
 
