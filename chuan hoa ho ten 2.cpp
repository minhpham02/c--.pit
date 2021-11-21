#include<bits/stdc++.h>
using namespace std;
void chuanhoa(char a[],int n){
	char ds[50][50];
	int m=0;
	char *p=strtok(a," ");
	while(p!=NULL){
		p[0]=toupper(p[0]);
		for(int i=1;i<strlen(p);i++){
			p[i]=tolower(p[i]);
			strcpy(ds[m++],p);
			p=strtok(NULL," ");
		}
	}
	if(n==1){
		cout << ds[m-1] << " ";
		for(int i=0;i<m-1;i++){
			cout << ds[i];
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		fflush(stdin);
		int n;
		cin >> n;
		char a[100];
		cin.getline(a,100);
		chuanhoa(a,n);
	}
}
