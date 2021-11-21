#include<iostream>
#include<cmath>
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
		int b=abs(a[0]+a[1]);
		int u=0,v=1;
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				int c=abs(a[i]+a[j]);
				if(b>c){ b=c;
				    u=i;
				    v=j;
					}
				}
			}	cout << a[u] + a[v] << endl;
		}
	}
