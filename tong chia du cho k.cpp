#include<iostream>
using namespace std;
int main(){
	int t ,n;
	long long k;
	cin >> t;
	while(t--){
		int s=0;
		cin >> n >> k;
		for(int i=1;i<=n;i++)
			s = s+i%k;
			if(s==k)	cout << "1" << endl;
			else cout << "0" << endl; 
	}
}
