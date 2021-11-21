#include<bits/stdc++.h>
using namespace std;
struct  SinhVien{
	string name,clas,date;
	float mark;
};
void nhapThongTinSV(SinhVien &a){
	scanf("\n");
	getline(cin, a.name); scanf("\n");
	getline(cin, a.clas); scanf("\n");
	getline(cin, a.date); scanf("\n");
	cin >> a.mark;
}
void inThongTinSV(struct SinhVien &a){
	 cout << "N20DCCN001 " << a.name << " " << a.clas << " ";
	 int n=a.date.length();
	 if(n<10){
	 	if(n==9){
	 		if(a.date[1]=='/') cout << "0" << a.date << " ";
	 		else{
	 			cout << a.date[0] << a.date[1] << a.date[2] << "0";
	 			for(int i=3;i<n;i++)	cout << a.date[i];
	 			 cout << " ";
			 }
		 }
		 else{
		 	cout << "0" << a.date[0] << a.date[1] << "0";
		 	for(int i=2;i<n;i++)	cout << a.date[i];
		 		cout << " ";
		 }
	 }else cout << a.date << " ";
	 cout << fixed << setprecision(2) << a.mark << endl; 
}
int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}
