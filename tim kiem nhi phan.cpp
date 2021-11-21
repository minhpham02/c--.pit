#include<iostream>
using namespace std;
void nhap(int a[],int n){
	for(int i=0;i<n;i++)
		cin >> a[i];
}
int main(){
	int t,n,x;
	cin >> t;
	while(t--){
		cin >> n >> x ;
		cin a[n]; 
		nhap(a,n);
		if(a[0]>a[n-1])	cout << "-1\n";
		int mid =(a[0]+a[n-1])/2;
		if(mid < x){
			int k=n/2;
			while(k<n){
				if(a[k]==x)	cout << "1\n"; break;
				else k++;
		}else{
			int h=n/2;
			while(h>=0){
				if(a[h]==x)
			}
		}	
	}
}
