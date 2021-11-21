#include<iostream>
using namespace std;
void nhap(int a[],int n){
	for(int i=0;i<n;i++)
		cin >> a[i];
}
int main(){
	int t,n,a[1005],Q,L,R;
	cin >> t;
	while(t--){
		cin >> n >> Q;
		nhap(a,n);
		while(Q--){
		cin >> L >> R;
		int s=0;
		for(int i=L-1;i<R;i++)
			s += a[i];
		cout << s << endl;
		}
	} 
} 
