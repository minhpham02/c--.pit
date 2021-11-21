#include<bits/stdc++.h>
typedef long long int ll;
const long long int MAX= 1000000007; 
using namespace std;
int gcd(int a,int b){
	while(b != 0){
		int n=a%b;
		a=b;
		b=n;
	} return a;
}
int gcda(int a[],int n){
	int m=a[0];
	for(int i=1;i<n;i++){
		m=gcd(m,a[i]);
	} return m;
}
ll tich(int a[],int n){
	ll s=1;
	for(int i=0;i<n;i++){
		s=((s%MAX)*(a[i]%MAX))%MAX;
	}
	return s;
}
long long xuly(int a[],int n){
	int m=gcda(a,n);
	long long k=tich(a,n);
	for(int i=1;i<m;i++){
		k=(k*k)%MAX;
	} return k;
}
int main(){
	int t,n,a[100];
	cin >> t;
	while(t--){
		cin >> n;
		for(int i=0;i<n;i++)
			cin >> a[i];
		cout << xuly(a,n) << endl;
	}	
}
