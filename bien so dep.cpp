#include<iostream>
using namespace std;
int asc(char a[]){
	if(a[5]<a[6] && a[6]<a[7] &&a[7]<a[9] &&a[9]<a[10])	return 1;
	 return 0;
}
int ac(char a[]){
	int kt1=0,kt2=0;
	if(a[5]==a[6] && a[6]==a[7] )	kt1=1;
	if(a[9]==a[10])				kt2=1;
	if(kt1==1 && kt2==1)	return 1;
	else return 0;
}
int pr(char a[]){
	if(a[5] != '6' && a[5] != '8') return 0;
	if(a[6] != '6' && a[6] != '8') return 0;
	if(a[7] != '6' && a[7] != '8') return 0;
	if(a[9] != '6' && a[9] != '8') return 0;
	if(a[10] != '6' && a[10] != '8') return 0;
	return 1;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		char s[20];
		fflush(stdin);
		cin >> s;
		if(asc(s)==1 || ac(s)==1 || pr(s)==1)	cout << "YES\n";
		else cout << "NO\n";
		
	}
} 
