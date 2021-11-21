#include<bits/stdc++.h>
#include<cstring>
using namespace std;
struct BangDiem{
	string id,name,clas;
	float d1,d2,d3;
};
struct BangDiem a[1000];
int n=0;
void nhap(){
	cin >> n;
	for(int i=0;i<n;i++){
		scanf("\n");
		cin >> a[i].id;
		scanf("\n");
		getline(cin,a[i].name);
		scanf("\n");
		getline(cin,a[i].clas);
		scanf("\n");
		cin >> a[i].d1 >> a[i].d2 >> a[i].d3;
	}
}
void sapxep(){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i].id>a[j].id)	swap(a[i],a[j]);
		}		
	}
}
void in(){
	for(int i=0;i<n;i++){
		cout << i+1 << " " << a[i].id << " "; 
		cout << a[i].name << " " << a[i].clas << " "; 
		cout << fixed << setprecision(1) << a[i].d1 << " " << a[i].d2 << " " << a[i].d3 << endl;
	}
}
int main(){
	nhap();
	sapxep();
	in();
}
