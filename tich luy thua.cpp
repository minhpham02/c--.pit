#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int t,x,y;
	long long p;
	cin >> t;
	while(t--){
		cin >> x >> y >> p;
		long long n=1;
		for(int i=0;i<y;i++)
			n=(n*x)%p;
		cout << n  << endl;
	}
} 
