#include<iostream>
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
		int a[n],b[n];
		nhap(a,n);
		nhap(b,n);
		int k=0,max=1;
		for(int i=0;i<n;i++){
			int x=0,y=0;
			for(int j=i;j<n;j++){
				x += a[j];
				y += b[j];
				if(x==y)	k=j-i+1;
			}if(k>max)	max=k;
		}
		cout << max << endl;
	}
}
