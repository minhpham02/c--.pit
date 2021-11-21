#include<iostream>
using namespace std;
int main(){
	int t,n,a[1000000],d[1000000]={0};
	cin >> t;
	while(t--){
		int kt=0;
		cin >> n;
		for(int i=0;i<n;i++)
			cin >> a[i];
		for(int i=0;i<n;i++){
			d[a[i]]++;
			if(d[a[i]]==2){
				kt=1;
				cout << a[i] << endl;
				break;
			}	
		}if(kt==0)	cout << "-1\n";
	}
}
