#include<iostream>
using namespace std;
void nhap(int a[],int n){
	for(int i=0;i<n;i++)
		cin >> a[i];
}
int main(){
	int t,n,k,a[1000];
	cin >> t;
	while(t--){
		int d=0;
		cin >> n >> k;
		nhap(a,n);
		for(int i=0;i<n;i++){
			if(a[i]==k) d++;
	}if (d==0)	cout << "-1" << endl;
	 else cout << d << endl;
	}
}
