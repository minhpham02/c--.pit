#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct PhanSo{
	ll tu;
	ll mau;
};
void nhap(struct PhanSo &a){
	cin >> a.tu >> a.mau;
}
PhanSo tong(struct PhanSo &p, struct PhanSo &q){
	ll m=__gcd(p.mau,q.mau);
	ll bcnn=(p.mau*q.mau)/m;
	ll x1=bcnn/p.mau;
	ll x2=bcnn/q.mau;
	PhanSo t;
	t.tu=x1*p.tu+x2*q.tu;
	t.mau=bcnn;
	ll n=__gcd(t.tu,t.mau);
	t.tu=t.tu/n;
	t.mau=t.mau/n;
	return t;
}
void in( PhanSo &t){
	cout << t.tu <<"/" << t.mau;
}
int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}
