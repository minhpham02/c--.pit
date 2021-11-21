#include<bits/stdc++.h>
using namespace std;
void xuly(int n){
	int a[n+1],i,j;
	for(i=1;i<=n;i++)	cin >> a[i];
	i=n;
	while(i>0 && a[i] > a[i-1])	i--;
	j=i-1;
	swap(a[n],a[i-1]);
	sort(a+j+1,a+n+1,greater<int>());
	for(i=1;i<=n;i++)	cout << a[i] << ' ';
}
int main(){
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		xuly(n);
		cout << endl; 
	}
}
