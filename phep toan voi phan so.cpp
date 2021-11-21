#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
struct PhanSo{
	ll tu,mau;
};
struct PhanSo C;
struct PhanSo D;
void process(struct PhanSo &A, struct PhanSo &B){
	ll tu=(A.tu*B.mau)+(A.mau*B.tu);
	ll mau=(A.mau*B.mau);
	ll h=__gcd(tu,mau);
	tu=tu/h;
	mau=mau/h;
	C.tu=tu*tu;
	C.mau=mau*mau;
	ll tu1=A.tu*B.tu*C.tu;
	ll mau1=A.mau*B.mau*C.mau;
	ll k=__gcd(tu1,mau1);
	D.tu=tu1/k;
	D.mau=mau1/k;
	cout << C.tu << "/" << C.mau << " " << D.tu << "/" << D.mau << endl;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}
