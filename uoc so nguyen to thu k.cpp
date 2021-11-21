#include<iostream>
#include<cmath>
using namespace std;
int tinh(int n, int k){
	int i, d, t=0;
    for(i=2; i<=sqrt(n); i++){
    	d=0;
        while(n%i==0){
            t++;
            n/=i;
            if(t==k) return i;
        }
    }
    if(n>1){
    	t++;
    	if(t==k) return n;
	}
    return -1;
}
int main(){
	int t,k,a[1000]={0};
	long long n; 
	cin >> t;
	while(t--){
		cin >> n >> k;
		if(tinh(n,k)) cout << tinh(n,k) << endl;
		else cout << "-1" <<endl;
	}
}
