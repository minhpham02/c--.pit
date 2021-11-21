#include<iostream>
using namespace std;
void nhap(int a[],int n){
	for(int i=0;i<n;i++)
		cin >> a[i];
}
int main(){
	int t,n,a[1000002];
	cin >> t;
	while(t--){
		cin >> n;
		nhap(a,n);
		int kt=-1;
		for(int i=1;i<n;i++)
			a[i] += a[i-1];
		for(int i=1;i<n-1;i++){
			if(a[i-1]==a[n-1]-a[i]){
				kt=i+1;
				break;
			}
		}cout << kt << endl;
	}
}
