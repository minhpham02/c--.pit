#include<bits/stdc++.h>
using namespace std;
int s=0; 
class TheLoai{
	public:
	string ll;
	friend istream &operator>>(istream &in,TheLoai &a){
		scanf("\n");
		getline(in,a.ll);
		return in;
	}
};
class Phim{
	public:
		Phim(){
			
		}
		string ten,ma,ngay,tap,t,hp,tmp;
		friend int ss(Phim &a,Phim &b);
		friend istream &operator>>(istream &in,Phim &a){
			scanf("\n");
			s++;
			if(s<10)	a.ma = "P00" + to_string(s);
			else a.ma = "P0" + to_string(s);
			scanf("\n"); 
			getline(in,a.t);
			scanf("\n");
			getline(in,a.ngay);
			scanf("\n");
			string s=a.ngay;
			for(int i=6;i<10;i++)	a.tmp += s[i];
			for(int i=3;i<5;i++)	a.tmp += s[i];
			for(int i=0;i<3;i++)	a.tmp += s[i];
			getline(in,a.ten);
			scanf("\n");
			getline(in,a.tap);
			return in;
		}
		friend ostream &operator<<(ostream &out,Phim &a){
			out << a.ma << ' '<< a.hp << ' ' << a.ngay << ' ' << a.ten << ' ' << a.tap << endl;
			return out;
		}
};
int ss(Phim &a,Phim &b){
	if(a.tmp<b.tmp)	return 1;
	if(a.tmp>b.tmp)	return 0;
	if(a.ten<b.ten)	return 1;
	if(a.ten>b.ten)	return 0;
	if(a.tap<b.tap)	return 0;
	return 1;
}
void process(TheLoai tl[],int n,Phim p[],int m){
	int s=0;
	for(int i=0;i<m;i++){
		s=p[i].t[4]-'0';
		p[i].hp=tl[s-1].ll;
	}
	sort(p,p+m,ss);
}
int main() {
	int n, m;
	cin >> n >> m;
	cin.ignore();
	TheLoai tl[100];
	Phim p[1000];
	for (int i = 0; i < n; i++) {
		cin >> tl[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> p[i];
	}
	process(tl, n, p, m);
	for (int i = 0; i < m; i++) {
		cout << p[i];
	}
}
