#include<iostream>
using namespace std;
int main(){
	int t,a[10000],n;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		int m=a[0];
		for(int j=1;j<n;j++){
			if(m<a[j])	m=a[j];
		}cout << m << endl;
	}
} 
