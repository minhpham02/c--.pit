#include<bits/stdc++.h>
using namespace std;
void xuly(long long a[],int n){
	long long ds[n]={0};
	ds[0]=a[0];
	ds[1]=a[1];
	ds[2]=a[0]+a[2];
	for(int i=3;i<n;i++){
		ds[i]=a[i]+max(ds[n-2],ds[n-3]);
	}
	cout << max(ds[n-1],ds[n-2]) << endl;
}
int main(){
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		long long a[n];
		for(int i=0;i<n;i++)
			cin >> a[i];
		xuly(a,n);
	}
}
