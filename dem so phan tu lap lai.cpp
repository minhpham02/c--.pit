#include<iostream>
using namespace std;
void nhap(int a[],int n){
	for(int i=0;i<n;i++)
		cin >> a[i];
}
void xuly(int a[],int n){
	int b[n]={0};
	for(int i=0;i<n;i++){
		if(b[i]==0){
			b[i]=1;
		for(int j=i+1;j<n;j++)
			if(a[i]==a[j]){
				b[i]++;
				b[j]=-1;
			}
		}
	}
	int s=0;
	for(int i=0;i<n;i++)
		if(b[i]>1) s += b[i];
	cout << s << endl;
}
int  main(){
	int t,n,a[1000000];
	cin >> t;
	while(t--){
		cin >> n;
		nhap(a,n);
		xuly(a,n);
	}
}
