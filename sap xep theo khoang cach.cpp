#include<iostream>
#include<cmath>
#include<algorithm> 
using namespace std;
int n,x;
bool cmp(int a,int b){
	return abs(x-a)<abs(x-b);
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> x;
		int a[n+1],b[n+1];
		for(int i=0;i<n;i++)
			cin >> a[i];
		for(int i=0;i<n;i++){
			sort(a,a+n,cmp);
		}
		for(int i=0;i<n;i++)
			cout << a[i] << " ";
			cout << endl;
	}
}
