#include<bits/stdc++.h>
using namespace std;
bool test(int n,int m){
	int total_sum=n*(n+1)/2;
	int total_sum1=(total_sum+m)/2;
	int total_sum2=total_sum1-m;
	if(total_sum<m)	return false;
	if(total_sum1+total_sum2==total_sum && total_sum1-total_sum2==m)
		return (__gcd(total_sum1,total_sum2)==1);
	return false;
}
int main(){
	int t;
	long long n,m;
	cin >> t;
	while(t--){
		cin >> n >> m;
		if(test(n,m))	cout << "Yes\n";
		else cout << "No\n";
	}
}
