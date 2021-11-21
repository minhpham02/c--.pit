#include<iostream>
using namespace std;
int main(){
	int t,n; 
	cin >> t;
	while(t--){
		int n;
		cin >> n; 
		int a[100000]={0} ;
		for(int i=0;i<n;i++){
			cin >> a[i]; 
		} 
		for(int i=0;i<n;i++){
			if(a[i] == a[i+1]){
				a[i]=2*a[i];
				a[i+1]=0;
			} 
		}int d=0; 
		for(int i=0;i<n;i++){
			if(a[i]!=0)	cout << a[i] << " ";
			else d++;
		}
		for(int i=0;i<d;i++)
			cout << "0 ";
			cout << endl;
	}
}
