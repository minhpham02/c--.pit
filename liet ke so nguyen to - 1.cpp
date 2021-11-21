#include<iostream>
#include<cmath>
using namespace std;
int ngto(int n){
	if(n<2) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0)	return 0;
	} return 1;
}
int main(){
	int n,m,k;
		cin >> n >> m;
		if( n > m){
			k=n;
			n=m;
			m=k;
		}
		for(int i=n;i<=m;i++){
			if(ngto(i))	cout << i << " ";
		}
	}
	
