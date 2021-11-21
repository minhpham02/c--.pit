#include<iostream>
using namespace std;
int n,A[20];
void in(){
	for(int i=1;i<=n;i++)	cout << A[i];
	cout << " ";
}
void Try(int i){
	int j;
	for(int j=0;j<=1;j++){
		A[i]=j;
		if(i==n)	in();
		else Try(i+1);
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		Try(1);
		cout << endl;
	}
}
