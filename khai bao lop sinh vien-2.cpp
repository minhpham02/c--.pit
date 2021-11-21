#include<bits/stdc++.h>
using namespace std;
class SinhVien{
	private:
		string name,clas,date;
		float d;
	public:
		friend istream &operator >> (istream &is,SinhVien &a){
			getline(is,a.name);
			scanf("\n");
			getline(is,a.clas);
			scanf("\n");
			getline(is,a.date);
			scanf("\n");
			is >> a.d;
			return is;
		}
		friend ostream &operator << (ostream &out,SinhVien &a){
			out << "B20DCCN001 " << a.name << " " << a.clas << " ";
			string s = a.date; 
			int n=s.length();
			if(s[1]=='/') s='0'+s;
    		if(s[4]=='/') s.insert(3, "0");
    		while(s.size()<10) s.insert(5, "0");
    		a.date=s ;
			out << a.date << " ";
			out << fixed << setprecision(2) << a.d;
			return out;
		}	
};
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
} 
