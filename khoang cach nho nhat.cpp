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
		sort(a,a+n,greater<int>());
		int b=a[0]-a[1];
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				int c=a[i]-a[j];
				if(b>c) b=c;
			}
		}
		cout << b << endl;
	}
}
