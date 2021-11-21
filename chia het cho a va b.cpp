#include<iostream>
using namespace std;
int main(){
	int t,m,n,a,b;
	cin >> t;
	while(t--){
		int d=0;
		cin >> m >> n >> a >> b;
		for(int i=m;i <=n;i++){
			if(i%a==0 || i%b==0)	d++;
		} cout << d << endl;
	}
}
