#include<iostream>
using namespace std;
long long uc(long long  a,long long b){
	long long n;
	while( b != 0 ){
		n = a % b;
		a = b;
		b = n;
	} return a;
}
int main(){
	int t;
	long long l,j,a,b; 
	cin >> t;
	while(t--){
		cin >> a >> b;
		j = uc(a,b);
		l = (a*b)/j;
		cout << l << " " <<  j << endl;
	}
}
