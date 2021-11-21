#include<bits/stdc++.h>
using namespace std;
void nhap(int a[],int n){
	for(int i=0;i<n;i++)
		cin >> a[i];
}
int main(){
	int t,n,a[100000];
	cin >> t;
	while(t--){
		cin >> n;
		nhap(a,n);
		int b[100000]={0};
		for(int i=0;i<n;i++){
			b[i]=a[i];
		}
		sort(b,b+n);
		for(int i=0;i<n;i++){
			if(a[i]!=b[i]){
			 cout << i+1 << " ";
				break;
			}
		}for(int i=n-1;i>=0;i--){
			if(a[i]!=b[i]){
				cout << i+1 << endl;
				break;
			}
		}
	}
} 
