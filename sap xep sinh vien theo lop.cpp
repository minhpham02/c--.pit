#include<bits/stdc++.h>
using namespace std;
class SinhVien{
	private:
		string ma,ten,lop,email;
	public:
		SinhVien(){
			
		}
		friend int ss(SinhVien &a,SinhVien &b);
		friend istream &operator>>(istream &in,SinhVien &a){
			scanf("\n");
			getline(in,a.ma);
			scanf("\n");
			getline(in,a.ten);
			scanf("\n");
			getline(in,a.lop);
			scanf("\n");
			getline(in,a.email);
			return in;
		}
		friend ostream &operator<<(ostream &out,SinhVien &a){
			out << a.ma << ' ' << a.ten << ' ' << a.lop << ' ' << a.email << endl;
			return out;
		}
};
int ss(SinhVien &a,SinhVien &b){
	if(a.lop<b.lop)	return 1;
	if(a.lop>b.lop)	return 0;
	if(a.ma>b.ma)	return 0;
	return 1;
}
void sapxep(SinhVien ds[],int N){
	sort(ds,ds+N,ss);
}
int main(){
	int N;
	cin >> N;
	SinhVien ds[N];
	for(int i=0;i<N;i++)	cin >> ds[i];
	sapxep(ds,N);
	for(int i=0;i<N;i++)	cout << ds[i];
	
} 
