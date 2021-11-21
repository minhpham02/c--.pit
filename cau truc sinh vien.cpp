#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string name;
	string clas;
	string ns;
	float num;
};
void nhap(struct SinhVien &a){
	getline(cin,a.name);
	fflush(stdin);
	getline(cin,a.clas);
	fflush(stdin);
	getline(cin,a.ns);
	cin >> a.num;
}
void in(struct SinhVien &a){
	cout << "B20DCCN001 ";
	cout << a.name << " " << a.clas << " " ;
	int n=a.ns.length();
	if(n<10){
		if(n==9){
			if(a.ns[1]=='/') cout << 0 << a.ns;
			else{
				cout << a.ns[0] << a.ns[1] << a.ns[2] << 0;
				for(int i=3; i<n; i++) cout << a.ns[i];
			}
		}
		else{
			cout << 0 << a.ns[0] << a.ns[1] << 0;
			for(int i=2; i<n; i++) cout << a.ns[i];
		}
	}
	else cout << a.ns <<" ";
	cout << " " <<fixed << setprecision(2) << a.num << endl;
}
 int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}
