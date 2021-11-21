#include<bits/stdc++.h>
using namespace std;
struct TN{
	string s2;
	int d;
};
int n;
struct TN ds[1000];
int tn(string s){
	int n=s.length(),d=0,c=n-1;
	if(n==1)	return 0;
	while(d<c){
		if(s[d] != s[c])	return  0;
		d++; c--;
	}
	return 1;
}
int tim(string s1){
	for(int i=0;i<n;i++){
		if(s1==ds[i].s2)	return i;
	}
	return -1;
}
void sapxep(){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(ds[i].s2<ds[j].s2)	swap(ds[i],ds[j]);
		}
	}
	for(int i=0;i<n;i++)	cout << ds[i].s2 << ' ' << ds[i].d << endl;
}
int main(){
	string s;
	while(cin >> s){
	if(tn(s)){
		int t=tim(s);
		if(t==-1){
			ds[n].s2=s;
			ds[n].d=1;
			n++;
		}
		else ds[t].d++;
		}
	}
	sapxep();
}
