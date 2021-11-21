#include<iostream>
#include<cmath>
using namespace std;
int main(){
		int n;
		cin >> n;
		for(int i=2;i<=sqrt(n);i++){
				int m=0;
				while(n%i==0){
					m++;
					n /=i;
				}if(m>0){
				 cout << i << " " << m << " ";
				 cout << endl;
				}	
			}if(n>1) cout << n << " " << "1";
		cout << endl;
}

