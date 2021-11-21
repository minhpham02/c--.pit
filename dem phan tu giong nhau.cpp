#include<bits/stdc++.h>
#define MAX 1000001
using namespace std;
void Init(int *A[MAX],int n){
	for(int i=0;i<n;i++){
		A[i]=new int[n];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin >> A[i][j];
		}
	}
}
void Solution(int *A[MAX],int n){
	int H[MAX]={0};
	for(int i=0;i<n;i++){
		if(H[A[0][i]]==0)
			H[A[0][i]]=1;
	}
	for(int i=1;i<n;i++){
		for(int j=0;j<n;j++){
			if(H[A[i][j]]==i){
				H[A[i][j]]++;
			}
		}
	}
	int res=0;
	for(int i=0;i<MAX;i++){
		if(H[i]==n)	res++;
	}
	cout << res << endl;
}
int main(){
	int t,n,*A[MAX];
	cin >> t;
	while(t--){
		cin >> n;
	Init(A,n);	Solution(A,n);
	}
}
