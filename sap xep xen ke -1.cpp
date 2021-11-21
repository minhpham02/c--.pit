#include<bits/stdc++.h>
using namespace std;
void nhap(int a[],int n){
	for(int i=0;i<n;i++)
		cin >> a[i];
}
int main(){
	int t,n,a[1000];
	cin >> t;
	while(t--){
		cin >> n;
		nhap(a,n);
		sort(a,a+n);
		int d=0,c=n-1;
		while(d<c){
			cout << a[c] << " " << a[d] << " ";
			c--;d++;
		}if(n%2!=0)	cout << a[d];
		cout << endl;
	} 
}
