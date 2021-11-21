#include<bits/stdc++.h>
#include<iomanip>
#include<cmath>
using namespace std;
struct Point{
	double x,y;
};
void input(struct Point &A){
	cin >> A.x >> A.y;
}
double distance(struct Point &A,struct Point &B){
	double n=B.x-A.x;
	double m=B.y-A.y;
	double t=(double)sqrt(n*n+m*m);
	return t;	
}
int main(){
    struct Point A, B;
    int t;
    cin>>t;
    while(t--){
        input(A); input(B);
        cout << fixed << setprecision(4) << distance(A,B) << endl;
    }
    return 0;
}
