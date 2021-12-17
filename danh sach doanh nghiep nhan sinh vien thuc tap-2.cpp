#include<bits/stdc++.h>
using namespace std;
class SinhVien{
	public:
		string ma,ten;
		int so;
	public:
		friend int ss(SinhVien &a,SinhVien &b);
		friend istream &operator>>(istream &in,SinhVien &a){
			scanf("\n");
			getline(in,a.ma);
			scanf("\n");
			getline(in,a.ten);
			scanf("\n");
			in >> a.so;
			return in;
		}
		friend ostream &operator<<(ostream &out,SinhVien &a){
			out << a.ma << ' ' << a.ten << ' ' << a.so << endl;
			return out; 
		}
};
int ss(SinhVien &a,SinhVien &b){
	if(a.so>b.so)	return 1;
	if(a.so<b.so)	return 0;
	if(a.ma<b.ma)	return 1;
	return 0;
}
void sapxep(SinhVien ds[],int N){
	sort(ds,ds+N,ss);
}
int main(){
	int N;
	cin >> N;
	SinhVien ds[N];
	for(int i=0;i<N;i++)	cin >> ds[i];
	int Q;
	cin >> Q;
	while(Q--){
		int L,R;
		cin >> L >> R;
		cout << "DANH SACH DOANH NGHIEP NHAN TU " << L << " DEN " << R << " SINH VIEN:" << endl;
	sapxep(ds,N);
	for(int i=0;i<N;i++){
		if(ds[i].so>=L && ds[i].so<=R)	cout << ds[i];
		}
	}
}
