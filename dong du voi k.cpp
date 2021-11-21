#include<bits/stdc++.h>
using namespace std;
void nhap(int a[],int n){
	for(int i=0;i<n;i++)
		cin >> a[i];
}
int main(){
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		int a[n];
		nhap(a,n);
		int minn=1e6;
		for(int i=0;i<n;i++)
			minn=min(minn,a[i]);
		int ucln=a[0]-minn; 
		for(int i=0;i<n;i++)	ucln=__gcd(ucln,a[i]-minn);
		int count=0;
		for(int i=1;i<=ucln;i++){
			if(ucln%i==0)	count++;
		}
		cout << count << endl;
	}
}
