#include<iostream>
using namespace std;
void nhap(int a[],int n){
	for(int i=0;i<n;i++)
		cin >> a[i];
}
int main(){
	int t,n,x,a[1000000];
	cin >> t;
	while(t--){
		int kt=1;
		cin >> n >> x;
		nhap(a,n);
		for(int i=0;i<n;i++){
			if(a[i]==x){
			 kt=0;	cout << i+1 <<endl;
			}
		}
	if(kt==1)	cout << "-1" << endl;
	}
}
