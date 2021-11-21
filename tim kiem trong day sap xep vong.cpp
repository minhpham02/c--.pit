#include<bits/stdc++.h>
using namespace std;
int search(int a[],int l,int r,int k){
	if(l>r)	return -1;
	int h=(l+r)/2;
	if(a[h] == k)	return h;
	if(a[l] <= a[h]){
		if(k >= a[l] && k <= a[h])	return search(a,l,h-1,k);
		return search(a,h+1,r,k);
	}if(k <= a[r] && k >= a[h])	return search(a,h+1,r,k);
		return search(a,l,h-1,k);
}
int main(){
	int n,t,k;
	cin >> t;
	while(t--){
		cin >> n >> k;
		int a[n];
		for(int i=0;i<n;i++)
			cin >> a[i];
		int l=0,r=n-1;
		cout << search(a,l,r,k)+1 << endl;
	}
}
