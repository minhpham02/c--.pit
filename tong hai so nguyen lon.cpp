#include<iostream>
#include<string>
using namespace std;
void xuly(){
	string x,y;
	cin >> x >> y;
	int n=x.length(),m=y.length();
	string res="";
	while(n<m)	x=x+"0";
	while(n>m)	y=y+"0";
	for(int i=n-1;i>0;i--){
		if(x[i]-'0'+y[i]-'0'<10)	res=char(x[i]+y[i]-'0') + res;
		else{
			res=char(x[i]+y[i]-'0'-10) +res;
			x[i-1]++;
		}if(x[0]+y[0]-2*'0'<10)	res=char(x[0]+y[0]-'0') +res;
		else{
			res=char(x[0]+y[0]-'0'-10) +res;
			res=res +'1';
		}
	} cout << res << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		xuly();
	}
} 
