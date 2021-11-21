#include<bits/stdc++.h>
using namespace std;
struct TreGia{
	string date,name,s;
};
struct TreGia ds[1000];
int n=0;
void nhap(){
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> ds[i].name;
		scanf("\n");
		cin >> ds[i].date;
		scanf("\n");
		for(int m=6;m<=9;m++)	ds[i].s+=ds[i].date[m];
		for(int m=3;m<=4;m++)	ds[i].s+=ds[i].date[m];
		for(int m=0;m<=2;m++)	ds[i].s+=ds[i].date[m];
	}	
}
void sapxep(){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(ds[i].s<ds[j].s)	swap(ds[i],ds[j]);
		}
	}
}
void in(){
	for(int i=0;i<n;i++){
		if(i==0 || i==n-1)	cout << ds[i].name << endl ;
	}
}
int main(){
	nhap();
	sapxep();
	in();
}
