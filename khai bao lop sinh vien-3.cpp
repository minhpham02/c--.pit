#include<bits/stdc++.h>
using namespace std;
class SinhVien{
	private:
		string ten,lop,ns;
		float gpa;
	public:
		SinhVien(){
			
		}
		friend istream &operator>>(istream &in,SinhVien &a){
			scanf("\n");
			getline(in,a.ten);
			scanf("\n");
			stringstream ss(a.ten);
			string res="";
			string token;
			while(ss>>token){
				res += toupper(token[0]); 
				for(int i=1;i<token.length();i++)	res += tolower(token[i]);
				res += " ";
			}
			res.erase(res.length()-1);
			a.ten=res;
			getline(in,a.lop);
			scanf("\n");
			getline(in,a.ns);
			string s=a.ns;
			if(s[1]=='/')	s = '0' + s;
			if(s[4]=='/')	s.insert(3,"0");
			a.ns=s;
			in >> a.gpa;
			return in;
		}
		friend ostream &operator<<(ostream &out,SinhVien &a){
			out << "B20DCCN001" << ' ' << a.ten << ' ' << a.lop << ' ' << a.ns << ' ' << fixed << setprecision(2) << a.gpa;
			return out;
		}
};
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}
