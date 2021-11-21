#include<iostream>
#include<cmath>
using namespace std;
int ngto(int n){
	if(n<2)	return 0;
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0)	return 0;
			return 1; 
} 
int main(){
	int t;
	long long L,R;
	cin >> t;
	while(t--){
	int d=0;	
	cin >> L >> R;
	 for(long long i=L;i<=sqrt(R);i++){
	 	if(ngto(i))	d++;
	 }
	 	cout << d << endl;
	}
}
