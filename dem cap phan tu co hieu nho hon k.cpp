#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		int a[n];
		long long count=0;
		for(int i=0;i<n;i++)	cin >> a[i];
		sort(a,a+n);
		for(int i=0;i<n-1;i++){
			int id=upper_bound(a,a+n,a[i]+k-1)-a;
			count += 1LL*(id-i-1);
		}
		cout << count << endl;
	}
}
