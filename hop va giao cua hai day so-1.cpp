#include <iostream>
using namespace std;
main(){
	int t;
	cin >> t;
	while(t--){
		int n, m, i, j=0, c, x, a[100100]={0}, b[100100];
		cin >> n >> m;
		for(i=0; i<n-1; i++){
			cin >> x;
			a[x]=1;
		}
		cin >> x; a[x]=1; c=x;
		for(i=0; i<m; i++){
			cin >> x;
			if(a[x]==1){ b[j]=x; j++; }
			else a[x]=1;
			if(x>c) c=x;
		}
		for(i=0; i<=c; i++)	if(a[i]==1) cout << i << " ";
		cout << endl;
		for(i=0; i<j; i++)	cout << b[i] << " ";
		cout << endl;
	}
}
