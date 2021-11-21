#include<iostream>
#include<cmath>
using namespace std;
int nto(int n){
    if(n<2) return 0;
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)  return 0;
        return 1;
}
int tongchuso(int n){
	int sum=0;
	while(n>0){
		sum += n%10;
		n /= 10;
	} return sum;
}
int tonguocso(int n){
	int k=2,s=0,b;
	while(n>1){
		if(n%k==0){
			s += tongchuso(k);
			n /=k;
		}else k++;
	}
	 return s;
}
int main(){
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		if(tongchuso(n)==tonguocso(n) && nto(n)==0)	cout << "YES\n";
		else cout << "NO\n";
	}
}

