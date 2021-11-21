#include<iostream>
#include<string>
using namespace std;
struct NhanVien{
	string name;
	string sex;
	string date;
	string address;
	string ma;
	string day;
};
struct  NhanVien ds[50];
void nhap(NhanVien &a){
	getline(cin,a.name);
	fflush(stdin);
	getline(cin,a.sex);
	fflush(stdin);
	getline(cin,a.date);
	fflush(stdin);
	getline(cin,a.address);
	fflush(stdin);
	getline(cin,a.ma);
	fflush(stdin);
	getline(cin,a.day);
}
void inds(NhanVien ds[],int N){
	for(int i=0;i<N;i++){
		if(i<=9)	cout << "0000" << i+1 << " ";
		else cout << "000" << i+1 << " ";
		cout << ds[i].name << " " << ds[i].sex << " " << ds[i].date << " " << ds[i].address << " " << ds[i].ma << " " <<ds[i].day << endl;
	}
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}
