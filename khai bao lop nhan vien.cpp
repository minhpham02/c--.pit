#include<bits/stdc++.h>
using namespace std;
class NhanVien{
	private:
		string ten,gt,ns,dc,ma,hd;
	public:
		void nhap(){
			getline(cin,ten);
			scanf("\n");
			getline(cin,gt);
			scanf("\n");
			getline(cin,ns);
			scanf("\n");
			getline(cin,dc);
			scanf("\n");
			getline(cin,ma);
			scanf("\n");
			getline(cin,hd);
		}
		void xuat(){
			cout << "00001 ";
			cout << ten << ' ' << gt << ' ' << ns << ' ' << dc << ' ' << ma << ' ' << hd;
	}		
};
int main(){
    NhanVien a;
    a.nhap();
    a.xuat();
    return 0;
}
