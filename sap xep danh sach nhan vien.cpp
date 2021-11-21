#include<bits/stdc++.h>
using namespace std;
struct NhanVien{
	string name,gt,date,address,id,day;
	int ma;
	long long s;
};
struct NhanVien s[1000];
void nhap(struct NhanVien &a){
	scanf("\n");
	getline(cin,a.name);
	scanf("\n");
	getline(cin,a.gt);
	scanf("\n");
	getline(cin,a.date);
	scanf("\n");
	getline(cin,a.address);
	scanf("\n");
	getline(cin,a.id);
	scanf("\n");
	getline(cin,a.day);
}
void sapxep(struct NhanVien ds[], int N){
	for(int i=0;i<N;i++){
		ds[i].ma=i+1;
	}
	for(int i=0;i<N;i++){
		for(int j=6;j<10;j++){
			s[i].s=(ds[i].date[j]-'0')+s[i].s*10;
		}
		s[i].s = s[i].s*10 + (ds[i].date[0]-'0');
		s[i].s = s[i].s*10 + (ds[i].date[1]-'0');
		s[i].s = s[i].s*10 + (ds[i].date[3]-'0');
		s[i].s = s[i].s*10 + (ds[i].date[4]-'0');
		
	}
	for(int i=0;i<N-1;i++){
		for(int j=i+1;j<N;j++){
			if(s[i].s>s[j].s)	swap(ds[i],ds[j]);
		}
	}
}
void inds(struct NhanVien ds[], int N){
	for(int i=0;i<N;i++){
		if(ds[i].ma<=9)	cout << "0000";
		else cout << "000";
		cout << ds[i].ma << " " << ds[i].name << " " << ds[i].gt << " ";
		cout << ds[i].date << " " << ds[i].address << " ";
		cout << ds[i].id << " " << ds[i].day << endl; 
	}
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}
