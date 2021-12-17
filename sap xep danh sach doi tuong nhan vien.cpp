#include<bits/stdc++.h>
using namespace std;
int d=0;
class NhanVien{
	private:
		string ten,gt,ns,dc,ma,hd;
		int s;
	public:
		NhanVien(){
			
		}
		friend int ss(NhanVien &a,NhanVien &b);
		friend istream &operator>>(istream &in,NhanVien &nv){
			scanf("\n");
			d++;
			nv.s=d;
			scanf("\n");
			getline(in,nv.ten);
			scanf("\n");
			getline(in,nv.gt);
			scanf("\n");
			getline(in,nv.ns);
			scanf("\n");
			getline(in,nv.dc);
			scanf("\n");
			getline(in,nv.ma);
			scanf("\n");
			getline(in,nv.hd);
			return in;
		}
		friend ostream &operator<<(ostream &out,NhanVien &nv){
			if(nv.s<10){
				out << "0000" << nv.s << ' ' << nv.ten << ' ' << nv.gt << ' ' << nv.ns << ' ' << nv.dc << ' ' << nv.ma << ' ' << nv.hd << endl;
			}else{
				out << "000" << nv.s << ' ' << nv.ten << ' ' << nv.gt << ' ' << nv.ns << ' ' << nv.dc << ' ' << nv.ma << ' ' << nv.hd << endl;
			}
			return out;
		}
};
int ss(NhanVien &a,NhanVien &b){
	string c="";
	string d="";
	for(int i=6;i<=9;i++){
		c += a.ns[i];
		d += b.ns[i];
	}
	for(int i=0;i<=1;i++){
		c += a.ns[i];
		d += b.ns[i];
	}
	for(int i=3;i<=4;i++){
		c += a.ns[i];
		d += b.ns[i];
	}
	if(c<d)	return 1;
	else return 0;
}
void sapxep(NhanVien ds[],int n){
	sort(ds,ds+n,ss);
}
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
