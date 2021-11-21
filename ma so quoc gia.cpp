#include<iostream>
using namespace std;
int main(){
	int  t,a[100],b[100];
	long long n;
	cin >> t;
	while(t--){
		cin >> n;
		int m=0,d=0;
		while(n>0){
			int b=n%10;
			n /= 10;
			a[m++]=b;
		}
		for(int i=m-1;i>=0;i--){
			b[d++]=a[i];
			}
		for(int j=0;j<d;j++){
			if(b[j]==0 && b[j+1]==8 && b[j+2]==4){
				for(int i=j+3;i<d;i++)
					cout << b[i]; break;
			}else cout << b[j];
			}cout << endl;
		}
}
