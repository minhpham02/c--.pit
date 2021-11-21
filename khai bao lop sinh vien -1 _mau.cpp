#include<iostream>
#include<iomanip>
using namespace std;
#define a() a
class SinhVien{
private:
    string ten, lop, ns;
    float p;
public:
    SinhVien (){    
    }
    friend void nhap(SinhVien &a);
    friend void in(SinhVien a);
};
void nhap(SinhVien &a){
    getline(cin, a.ten);
    getline(cin, a.lop);
    getline(cin, a.ns);
    string s = a.ns ;
    if(s[1]=='/') s='0'+s;
    if(s[4]=='/') s.insert(3, "0");
    while(s.size()<10) s.insert(5, "0");
    a.ns=s ;
    cin >> a.p;
}
void in(SinhVien a){
    cout << "B20DCCN001 Nguyen Van A " << a.lop << " " << a.ns << " " << setprecision(2) << fixed << a.p;
}
int main(){
    SinhVien a();
    nhap(a);
    in(a);
    return 0;
}
