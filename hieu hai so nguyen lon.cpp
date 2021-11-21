#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string x,y;
		cin >> x >> y;
		string res="";
		while(x.length()<y.length())	x="0"+x;
		while(x.length()>y.length())	y="0"+y;
		if(x<y)	swap(x,y);
		for(int i=x.length()-1;i>0;i--){
			if(x[i]>=y[i])	res=char(x[i]-y[i]+'0')+res;
			else{
				res=char(x[i]-y[i]+10+'0')+res;
				x[i-1]--;
			}
		}res=char(x[0]-y[0]+'0')+res;
		cout << res << endl; 
	}
}
