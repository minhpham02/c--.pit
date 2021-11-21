#include<iostream>>
using namespace std;
int n;
void xuly() { 
	int s=0;
 	while (n>0) {
  	s+=n%10;
	n/=10;
	}n=s; 
}
int main() {
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		while (n>9)
			xuly(); 
			cout << n<< endl;
			 }
	} 
