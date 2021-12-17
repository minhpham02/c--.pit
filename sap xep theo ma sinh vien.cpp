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
	if(a.ma<b.ma)	return 1;
	return 0;
}
void sapxep(SinhVien ds[],int N){
	sort(ds,ds+N,ss);
}
SinhVien ds[1005];
int main(){
	int d=0,N;
	while(cin >> ds[d]){
		d++;
	}
	sapxep(ds,d);
	for(int i=0;i<d;i++)	cout << ds[i];
	return 0;
	
} 
