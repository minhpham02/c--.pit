#include<iostream>
using namespace std;
int main(){
	int t;
	char c;
	cin >> t;
	while(t--){
		cin >> c;
		if(c < 'a'){
		c=c +32; cout << c << endl;
		}else{
		c=c-32;  cout << c << endl;
		}
	}
}
