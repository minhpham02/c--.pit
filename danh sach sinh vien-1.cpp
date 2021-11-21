#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string name,clas,date,id;
	float d;
};
void nhap(struct SinhVien ds[], int N){
	for(int i=0;i<N;i++){
		scanf("\n");
		getline(cin,ds[i].name);
		scanf("\n");
		getline(cin,ds[i].clas);
		scanf("\n");
		getline(cin,ds[i].date);
		scanf("\n");
		cin >> ds[i].d;	
	}	
}
void in(struct SinhVien ds[], int N){
	for(int i=0;i<N;i++){
		if(i<9)	cout << "B20DCCN00";
		else cout <<"B20DCCN0";
		cout << i+1 << " " << ds[i].name << " " << ds[i].clas << " ";
		int m=ds[i].date.length();
		if(m<10){
			if(m==9){
				if(ds[i].date[1]=='/')	cout << 0 << ds[i].date; 
				else{
					cout << ds[i].date[0] << ds[i].date[1] << ds[i].date[2] << 0;
					for(int j=3;j<m;j++)	cout << ds[i].date[j];
				}
			}else{
				cout << 0 << ds[i].date[0] << ds[i].date[1] << 0;
				for(int j=2;j<m;j++)	cout << ds[i].date[j];
			}
		}else cout << ds[i].date; 
		cout << " " << fixed << setprecision(2) << ds[i].d << endl; 
	}
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
