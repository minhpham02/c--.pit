#include<iostream>
using namespace std;
void nhap(int a[],int n){
	for(int i=0;i<n;i++)
		cin >> a[i];
}
void xuly(int a[],int n){
	if(n==1)	cout << "-1\n";
	int first,second;
	first = second = INT_MAX;
	for(int i=0;i<n;i++){
		if(a[i]<first){
			second=first;
			first=a[i];
		}
	}
	if(second == INT_MAX)	cout << "-1\n";
	else cout << first << " " << second << endl;
}
int main(){
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		int a[n];
		nhap(a,n);
		xuly(a,n);
		cout << endl;
	}
} 
