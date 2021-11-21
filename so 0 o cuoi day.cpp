#include<iostream>
using namespace std;
void nhap(long long a[],int n){
	for(int i=0;i<n;i++)
		cin >> a[i];
}
void sapxep(long long a[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]<a[j]){
				long long t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
}
int main(){
	int t,n;
	long long a[10000000];
	cin >> t;
	while(t--){
		int d=0;
		cin >> n;
		nhap(a,n);
		sapxep(a,n);
		for(int i=0;i<n;i++){
			if(a[i] != 0)	cout << a[i] <<" ";
			else d++;
		}for(int i=0;i<d;i++)
			cout << "0" << " ";
			cout <<endl;
	}
}

