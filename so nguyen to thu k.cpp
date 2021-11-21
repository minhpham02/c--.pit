#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int t,k,a[1000]={0};
	long long n; 
	cin >> t;
	while(t--){
		cin >> n >> k;
		int d=0;
		for(int i=2;i<=sqrt(n);i++){
			while(n%i==0){
				n=n/i;
				a[d++]=i;
				} 
			}for(int i=0;i<d;i++){
				if(i==k-1)	cout << a[i]; 
			}if(k-1 >= d || k<=0 )	cout << "-1";
				cout << endl;
		}
}
