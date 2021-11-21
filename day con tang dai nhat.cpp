#include<bits/stdc++.h>
using namespace std;
void xuly(int a[],int n){
	int h[n]={0};
	h[0]=1;
	for(int i=1;i<n;i++){
		for(int j=0;j<i;j++)
			if(a[j]<a[i])
				h[i]=max(h[i],h[j]);
			h[i]++;
	}
	sort(h,h+n);
	cout << h[n-1] << endl;
}
int main(){
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		int a[n];
		for(int i=0;i<n;i++)
			cin >> a[i];
		xuly(a,n);
	}
}
