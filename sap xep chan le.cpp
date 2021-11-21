#include<bits/stdc++.h>
using namespace std;
void nhap(int a[],int n){
	for(int i=0;i<n;i++)
		cin >> a[i];
}
int main(){
	int t,n,a[1000],b[500]={0},c[500]={0};
	cin >> t;
	while(t--){
		cin >> n;
		nhap(a,n);
		sort(a,a+n);
		int m=0,k=0;
		if(n%2==0){
		for(int i=0;i<n;i++){
			if(i<n/2)	b[m++]=a[i];
			else	c[k++]=a[i];
			}
			 for(int i=0;i<n/2;i++)
			cout << b[i] << " " << c[i] << " ";
			cout << endl;
		}else{
			for(int i=0;i<n;i++){
			if(i<=n/2)	b[m++]=a[i];
			else	c[k++]=a[i];
			}
			 for(int i=0;i<n/2;i++)
			cout << b[i] << " " << c[i] << " ";
			cout << b[n/2];
			cout << endl;
		}
	}
}
