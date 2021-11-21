#include<bits/stdc++.h>
#define PI 3.141592653589793238
using namespace std;
struct Point{
	double x,y;
};
double chia(struct Point p,struct Point q){
	double dx=p.x-q.x,dy=p.y-q.y;
	return sqrt(dx*dx+dy*dy);
}
int check(double d1,double d2,double d3){
	if(d1+d2<=d3 || d1+d3<=d2 || d2+d3<=d1)	return 0;
		return 1;
}
int main(){
	struct Point A,B,C;
	int t;
	cin >> t;
	while(t--){
		cin >> A.x >> A.y >> B.x >> B.y >> C.x >> C.y;
		double d1=chia(A,B)	,d2=chia(A,C) ,d3=chia(B,C);
		if(!check(d1,d2,d3))	cout << "INVALID\n";
		else{
			double s=0.25*sqrt((d1+d2+d3)*(d1+d2-d3)*(d2+d3-d1)*(d3+d1-d2));
			double r=(d1*d2*d3)/(4*s);
			cout << fixed << setprecision(3) <<(PI*r*r) << endl;
		}
	}
}
