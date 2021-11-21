#include<iostream>
using namespace std;
long long uc(long long  n,long long m){
	long long h;
	while( m != 0 ){
		h = n % m;
		n = m;
		m = h;
	}return n;
}
long long bc(long long  n,long long m){
	long long k=uc(n,m);
	 return (n*m)/k;
}
long long kt (int n){
	int m=1;
	for(int i=2;i<=n;i++){
		m=bc(m,i);
	}return m;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << kt(n) << endl;
 	} 
} 
