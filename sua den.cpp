#include<bits/stdc++.h>
using namespace std;
vector<bool>check(1e6+5,true);
vector<int>dem(1e6+5,0);
int main(){
	int N,K,B,a,min= INT_MAX;
	cin >> N >> K >> B;
	for(int i=1;i<=B;i++){
		cin >> a;
		check[a] = false;
	}
	for(int i = 1;i <= N;i++){
		dem[i] = dem[i-1];
		if(check[i] == false)	dem[i]++;
	}
	for(int i = K;i <= N;i++){
		if(min > dem[i]-dem[i-K])	min= dem[i]-dem[i-K];
	}
	cout << min; 
}
