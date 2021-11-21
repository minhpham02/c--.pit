
#include<bits/stdc++.h>
using namespace std;
void nhap(int a[],int n){
	for(int i=0;i<n;i++)
		cin >> a[i];
}
int main(){
	int t,n,a[1000000];
	cin >> t;
	while(t--){
		cin >> n;
		nhap(a,n);
		sort(a,a+n);
		for(int i=0;i<n;i++)
			cout << a[i] << " ";
			cout << endl;
	}
}
