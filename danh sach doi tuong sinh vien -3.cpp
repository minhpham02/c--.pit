#include<bits/stdc++.h>
using namespace std;
int h=0;
class SinhVien{
	private:
		string ten,lop,ns,dem;
		float d;
	public:
		SinhVien(){
			
		}
		friend int ss(SinhVien &a,SinhVien &b);
		friend string ch(SinhVien &a);
		friend istream &operator >> (istream &in,SinhVien &a){
			scanf("\n");
			getline(in,a.ten);
			scanf("\n");
			getline(in,a.lop);
			scanf("\n");
			getline(in,a.ns);
			scanf("\n");
			in >> a.d;
			string s = a.ns;
			if(s[1]=='/')	s = '0' +s;
			if(s[4]=='/')	s.insert(3,"0");
			a.ns = s;
			h++;
			if(h<10)	a.dem = "B20DCCN00" + to_string(h);
			else a.dem = "B20DCCN0" + to_string(h);	
			return in;
		}
		friend ostream &operator << (ostream &out,SinhVien a){
			
			a.ten=ch(a);
			out << a.dem << ' ' <<a.ten << ' ' << a.lop << ' ' << a.ns << ' ' << fixed << setprecision(2) << a.d << endl;
			return out;
		}
};
string ch(SinhVien &a){
	stringstream ss(a.ten);
	string res="";
	string token;
	while(ss>>token){
		res += toupper(token[0]);
		for(int i=1;i<token.length();i++)	res += tolower(token[i]);
		res += " ";
	}
	res.erase(res.length()-1);
	return res;
}
int ss(SinhVien &a,SinhVien &b){
	if(a.d > b.d)	return 1;
	return 0;
}
void sapxep(SinhVien ds[],int N){
	sort(ds,ds+N,ss);
}
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
