#include<bits/stdc++.h>
using namespace std;
void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
}
int main(){
	int t,n,a[100000],b[100000];
	cin >> t;
	while(t--){
		cin >> n;
		nhap(a,n);
		sort(a,a+n);
		int k=n;
			for(int i=0;i<n;i++){
				b[i]=1;	}		
			for(int i=0;i<n-1;i++){
				for(int j=i+1;j<n;j++){
					if(a[i]==a[j] && b[i]==1){
						k--; b[j]=-1;
					}
				} 
			} 
			cout << a[n-1]-a[0]+1-k << endl;		
		}
	}
