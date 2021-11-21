#include<bits/stdc++.h>
using namespace std;
class PhanSo{
	private:
		long long tu,mau;
	
	public:
		PhanSo(long long tu,long long mau){
			this -> tu = tu;
			this -> mau = mau;
		}
		void rutgon(PhanSo &c){
			long long x=__gcd(c.tu,c.mau);
			c.tu /= x;
			c.mau /= x;
		}
		void tong(PhanSo &p,PhanSo &q){
			long long y = __gcd(p.mau,q.mau);
			long long z = (p.mau*q.mau)/y;
			p.tu = p.tu*(z/p.mau) + q.tu*(z/q.mau);
			p.mau = z;
			rutgon(p);
		}
		friend istream &operator >> (istream &is, PhanSo &p){
			is >> p.tu >> p.mau;
			return is;
		}
		friend ostream &operator << (ostream &os, PhanSo &p){
			os << p.tu <<"/" << p.mau;
			return os; 
		}
};

int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}
