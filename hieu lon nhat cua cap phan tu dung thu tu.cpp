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
		int m=a[0]-a[1];
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(m>a[i]-a[j])	m=a[i]-a[j];
			}
		}if(m<0)	cout << abs(m) << endl;
		else cout << "-1" << endl;
	}
}
