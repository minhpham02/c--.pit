#include<iostream>
using namespace std;
int main(){
	int t,n,p;
	cin >> t;
	while(t--){
		int i=1,temp,count=0;
		cin >> n >> p;
		while(p*i<=n){
			temp=p*i;
			while(temp % p==0){
				temp /= p;
				count ++;  
			}
			i++; 
		}cout << count << endl;  
	}
} 
