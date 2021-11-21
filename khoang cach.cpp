#include<iostream>
#include<cmath>
#include<iomanip> 
using namespace std;

int main(){
	double x1,y1,x2,y2,A,B;
	int t;
	cin >> t;
	while(t--){
		cin >>  x1 >> y1 >> x2 >> y2;
		A=x1-x2;
		B=y1-y2;
		cout << fixed << setprecision(4) << sqrt((A*A)+(B*B))<< endl;
	}
}
