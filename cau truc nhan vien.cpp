#include<bits/stdc++.h>
using namespace std;
struct NhanVien{
	string name;
	string sex;
	string date;
	string address;
	string thue;
	string day;
};
void nhap(struct NhanVien &a){
	getline(cin,a.name);
	fflush(stdin);
	getline(cin,a.sex);
	fflush(stdin);
	getline(cin,a.date);
	fflush(stdin);
	getline(cin,a.address);
	fflush(stdin);
	getline(cin,a.thue);
	fflush(stdin);
	getline(cin,a.day);
	fflush(stdin);
}
void in(struct NhanVien &a){
	cout << "00001 ";
	cout << a.name << " " << a.sex << " "<< a.date << " " << a.address << " " << a.thue << " " << a.day << endl;;
}
 int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}
