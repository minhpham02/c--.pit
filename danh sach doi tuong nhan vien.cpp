#include<bits/stdc++.h>
using namespace std;
int s=0;
class NhanVien{
	private:
		string ten,gt,ns,dc,ma,hd;
	public:
		NhanVien(){
			
		}
		friend istream &operator>>(istream &in,NhanVien &a){
			scanf("\n");
			getline(in,a.ten);
			scanf("\n");
			getline(in,a.gt);
			scanf("\n");
			getline(in,a.ns);
			scanf("\n");
			getline(in,a.dc);
			scanf("\n");
			getline(in,a.ma);
			scanf("\n");
			getline(in,a.hd);
			return in;
		}
		friend ostream &operator<<(ostream &out,NhanVien &a){
			s++;
			if(s<10){
				out << "0000" << s << ' ' << a.ten << ' ' << a.gt << ' ' << a.ns << ' ' << a.dc << ' ' << a.ma << ' ' << a.hd << endl;
			}else{
				out << "000" << s << ' ' << a.ten << ' ' << a.gt << ' ' << a.ns << ' ' << a.dc << ' ' << a.ma << ' ' << a.hd << endl;
			}
		return out;
	}
};
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
} 
