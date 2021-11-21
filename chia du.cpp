#include<iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int a,m,kt=0;
		cin >> a >> m;
		for(int i=0;i<m;i++){
			if((i*a)%m==1){ kt=1; cout << i <<endl;
			}
		}if(kt==0)	cout <<"-1" << endl;
	}
} 
