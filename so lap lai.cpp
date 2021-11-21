#include<iostream>
using namespace std;
long long ucln(long long x,long long y){
	long long a;
	while(y != 0){
			a=x%y;
			x=y;
			y=a;
	} return x;
}
int main(){
	int t;
	long long a,x,y;
	cin >> t;
	while(t--){
		cin >> a >> x >> y;
		long long m=ucln(x,y);
		for(int i=0;i<m;i++)
			cout << a;
		cout << endl;		
	}
} 
