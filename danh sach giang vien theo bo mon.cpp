#include<bits/stdc++.h>
using namespace std;
int s=0;
class GiangVien{
	public:
		string ma,ten,nganh,ht;
	public:
		GiangVien(){
			
		}
		string getnganh(){
        return nganh;
    	}
		friend istream &operator>>(istream &in,GiangVien &a){
			scanf("\n");
			getline(in,a.ten);
			scanf("\n");
			string nm="";
			getline(in,nm);
			stringstream ss(nm);
			string token="";
			while(ss>>token){
				a.nganh += toupper(token[0]);
			}
			return in;	
		}
		friend ostream &operator<<(ostream &out,GiangVien &a){
			s++;
			if(s<10)	cout << "GV0" << s << ' ';
			else cout << "GV" << s << ' ';
			out << a.ten << ' ' << a.nganh << endl;
			return out;
		}
};
int main(){
	int N;
	cin >> N;
	GiangVien ds[N];
	for(int i=0;i<N;i++)	cin >> ds[i];
	int Q;
	cin >> Q;
	while(Q--){
		scanf("\n");
		string s;
		getline(cin,s);
		stringstream vv(s);
		string res="";
		string token;
		while(vv>>token){
			res += toupper(token[0]);
		}
		cout << "DANH SACH GIANG VIEN BO MON " << res << ":" << endl;
		for(int i=0;i<N;i++){
			if(ds[i].getnganh() == res)	cout << ds[i];
		}
	}
}
