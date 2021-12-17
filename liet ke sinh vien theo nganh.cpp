#include<bits/stdc++.h>
using namespace std;
class SinhVien{
	public:
		string ma,ten,lop,email;
	public:
		SinhVien(){
			
		}
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
int main(){
	int N;
	cin >> N;
	SinhVien ds[N];
	for(int i=0;i<N;i++)	cin >> ds[i];
	int Q;
	cin >> Q;
	while(Q--){
		string s,t="",x="",z="";
		scanf("\n");
		getline(cin,s);
		stringstream ss(s);
        while(ss>>t){
            transform(t.begin(),t.end(),t.begin(),::toupper);
            if(x.size()<2){x+=t[0];}
            z+=" "+t;
        }
		cout << "DANH SACH SINH VIEN NGANH" << z << ":" << endl;
		for(int i=0;i<N;i++){
		if(x == ds[i].ma[5] && ds[i].lop[0] != 'E')	cout << ds[i];	
		}
	}
}

