#include<bits/stdc++.h>
#include<string>
using namespace std;
struct ThiSinh{
	string name;
	string date;
	float a,b,c,count;
};
void nhap(struct ThiSinh &A){
	getline(cin,A.name); 
	fflush(stdin); 
	getline(cin,A.date);
	fflush(stdin); 
	cin >> A.a >> A.b >> A.c;
}
void in(struct ThiSinh &A){
	A.count = A.a+A.b+A.c;
	cout << A.name << " " << A.date << " " ;
	cout << fixed << setprecision(1) << A.count << endl; 
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}

