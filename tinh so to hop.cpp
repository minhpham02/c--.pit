#include<iostream>
#define  P 1000000007
using namespace std;
int c[1005][1005];
void check(){
	int n,k;
	cin >> n >> k;
	cout << c[n][k] << endl;
}
int main(){
	int t;
	cin >> t;
	for(int i=0;i<=1000;i++){
		for(int j=0;j<=i;j++){
			if(j==0||i==j)	c[i][j]=1;
			else c[i][j]=(c[i-1][j]%P+c[i-1][j-1]%P)%P;
		}
	}
		while(t--)	check();
} 
