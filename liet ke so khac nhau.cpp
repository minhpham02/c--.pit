#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a[100],b[100]={0};
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
		sort(a,a+n);
	for(int i=0;i<n;i++){
		if(b[i]==0){
			b[i]=1;
		for(int j=i+1;j<n;j++){
			if(a[j]==a[i]){
				b[i]++;
				b[j]=-1;
				}
			}
		}
	}for(int i=0;i<n;i++){
		if(b[i]>=1)	cout << a[i] << " ";
	}cout << endl;
}
