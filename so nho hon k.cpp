#include<bits/stdc++.h>
using namespace std;
void nhap(int a[],int n){
	for(int i=0;i<n;i++)
		cin >> a[i];
}
void xuly(int a[],int n,int k){
	int count=0;
	for(int i=0;i<n;i++)	if(a[i]<=k) count++;
	int bad=0;
	for(int j=0;j<count;j++)	if(a[j]>k)	bad++;
	int ans=bad;
	for(int i=0,j=count;i<n,j<n;i++,j++){
		if(a[i]>k)	bad--;
		if(a[j]>k)	bad++;
		ans=min(ans,bad);
	}
	cout << ans << endl;
}
int main(){
	int t,n,k;
	cin >> t;
	while(t--){
		cin >> n >> k;
		int a[n+1];
		nhap(a,n);
		xuly(a,n,k);
	}
}
