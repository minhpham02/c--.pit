#include<bits/stdc++.h>
using namespace std;
struct ThucTap{
	string id,name,clas,email,cpn,cpn1;
	int ma;
};
struct ThucTap ds[10000];
struct ThucTap s[10000];
int n=0,Q=0;
void nhap(){
	cin >> n;
	for(int i=0;i<n;i++){
		scanf("\n");
		ds[i].ma=i+1;
		scanf("\n");
		getline(cin,ds[i].id);
		scanf("\n");
		getline(cin,ds[i].name);
		scanf("\n");
		getline(cin,ds[i].clas);
		scanf("\n");
		getline(cin,ds[i].email);
		scanf("\n");
		getline(cin,ds[i].cpn);
	}
	cin >> Q;
	for(int i=0;i<Q;i++){
		scanf("\n");
		getline(cin,s[i].cpn1);
	}
}
void sapxep(){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(ds[i].id>ds[j].id)	swap(ds[i],ds[j]);
		}
	}
}
void in(){
	for(int j=0;j<Q;j++){
	for(int i=0;i<n;i++){
			if(ds[i].cpn==s[j].cpn1){
			cout << ds[i].ma << " " << ds[i].id << " ";
			cout << ds[i].name << " " << ds[i].clas << " ";
			cout << ds[i].email << " " << ds[i].cpn << endl;
			}
		}
	}
}
int main(){
	nhap();
	sapxep();
	in();
}

