#include<iostream>
#include<cmath>
using namespace std;
#define N 1000000000
bool check[N];
void nto(int n){
	for (int i = 2; i <= n; ++i)	check[i] = true;
	for (int i = 2; i * i <= n; ++i){
		if (check[i] == true){
			for (int j = i * i; j <= n; j = j + i)
				check[j] = false;
		}
	}
}
int ktt(int n){
	while(n > 9){
		int x = n%10;
		n /=10;
		if(x <= n%10) return 0;
	}
	return 1;
}
int ktg(int n){
	while(n > 9){
		int x = n%10;
		n /= 10;
		if(x >= n%10) return 0;
	}
	return 1;
}
main(){
	int t;
	cin >> t;
	while(t--){
		int n, i;
		cin >> n;
		int x = pow(10,n-1);
		int y = pow(10,n);
		int d = 0;
		nto(y);
		for(i = x; i < y; i++){
			if(check[i]){
				if(ktt(i)) d++;
				else if(ktg(i)) d++;
			}
		}	
		cout << d << "\n";
	}
}
