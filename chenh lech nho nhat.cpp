#include<iostream>
#include<cmath>
using namespace std;
void nhap(long long a[],int n){
	for(int i=0;i<n;i++)
		cin >> a[i];
}
void qs(long long a[], int l, int r) {
	int i=l, j=r, p=a[(l+ r)/2];
	while(i<=j) {
		while(a[i]<p)	i++;
		while(a[j]>p)	j--;
		if (i<=j) {
			swap(a[i], a[j]);
			i++;
			j--;
		}
	}
	if(l<j)	qs(a, l, j);
	if(i<r)	qs(a, i, r);
}
int main(){
	int t,n;
	long long a[1000000];
	cin >> t;
	while(t--){
		cin >> n;
		nhap(a,n);
		qs(a,0,n-1); 
		int b=abs(a[0]-a[1]); 
		for(int i=1;i<n;i++){
				int c=abs(a[i]-a[i+1]);
				if(b>c)	b=c; 		
		}
		cout << b << endl;
	}
}
