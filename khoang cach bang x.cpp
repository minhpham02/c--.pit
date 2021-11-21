#include<bits/stdc++.h>
#include<cmath> 
using namespace std;
void nhap(int a[],int n){
	for(int i=0;i<n;i++)
		cin >> a[i];
}
int main(){
	int t,n,k,a[100000];
	cin >> t;
	while(t--){
		int kt=0;
		cin >> n >> k;
		nhap(a,n);
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++) 
			if(abs(a[i]-a[j])==k){ kt=1; break;
				}
			}
		if(kt==1)	cout << "1" << endl;	
		else cout << "-1" << endl;
	}
}


