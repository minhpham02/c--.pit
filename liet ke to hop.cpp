#include<iostream>
using namespace std;
int a[100],n,k;
void out(){
	for(int i=1;i<=k;i++)
		cout << a[i];
		cout << " ";
}
void ThDq(int m){
	if(m==k+1)	out();
	for(int i=a[m-1]+1;i<=n-k+m;i++){
		a[m]=i;
		if(m==k)	out();
		else	ThDq(m+1);
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		ThDq(1);
		cout << endl;
	}
}
