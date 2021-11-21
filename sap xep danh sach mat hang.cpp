#include<bits/stdc++.h>
using namespace std;
struct MatHang{
	string name,group;
	float buy,sell,s;
	int id;
};
struct MatHang ds[1000];
int n=0;
void nhap(){
	cin >> n;
	for(int i=0;i<n;i++){
		ds[i].id=i+1;
		scanf("\n");
		getline(cin,ds[i].name);
		scanf("\n");
		getline(cin,ds[i].group);
		scanf("\n");
		cin >> ds[i].buy >> ds[i].sell;
		ds[i].s=ds[i].sell-ds[i].buy;
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
		cout << ds[i].id << " " << ds[i].name << " ";
		cout << ds[i].group << " ";
		cout << fixed << setprecision(2) << ds[i].s << endl;
	}
}
int main(){
	nhap();
	sapxep();
	in();
}
