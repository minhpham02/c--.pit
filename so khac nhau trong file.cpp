#include<bits/stdc++.h>
using namespace std;
int main(){
	long long a[10001]={0};
	ifstream fp1;
	fp1.open("DATA.in");
	long long s;
	while(fp1>>s)	a[s++];
	fp1.close();
	for(int i=0;i<10001;i++){
		if(a[i]!=0){
		cout << i << ' ' << a[i] << endl;
		}
	}
}
