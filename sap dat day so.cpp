#include<iostream>
using namespace std;
void nhap(long long a[],int n){
	for(int i=0;i<n;i++)
		cin >> a[i];
}
int main(){
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		long long a[n+1];
		nhap(a,n);
		for(int i=0;i<n;i++){
			int kt=0;
			for(int j=0;j<n;j++){
				if(a[j]==i){cout << i << " ";
				kt=1; break;
				}
			}
			if(kt==0)	cout << "-1" << " "; 
		}cout << endl;
	}
}
