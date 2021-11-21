#include<iostream>
#define MAX 100 
using namespace std;
void Solution(int a[MAX][MAX],int m,int n){
	int row =0,col=0;
	int prev,curr;
	while(row < m && col < n){
		if(row + 1 == m || col + 1 == n)	break;
		prev=a[row+1][col];
		for(int i= col ;i<n;i++){
			curr=a[row][i];
			a[row][i]=prev;
			prev=curr;
		}
		row++;
		for(int i=row;i<m;i++){
			curr=a[i][n-1];
			a[i][n-1]=prev;
			prev=curr;
		}
		n--;
			for(int i=n-1;i>=col;i--){
				curr=a[m-1][i];
				a[m-1][i]=prev;
				prev=curr;
			}
		m--;
			for(int i=m-1;i>=row;i--){
				curr=a[i][col];
				a[i][col]=prev;
				prev=curr;
			}
			col++;
	}
}
void Result(int a[MAX][MAX],int m,int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout << a[i][j] << " ";
		}
	}
}
int main(){
	int t,n,m;
	cin >> t;
	while(t--){
		cin >> m >> n;
		int a[MAX][MAX];
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				cin >> a[i][j];
			}
		}
	Solution(a,m,n); 	Result(a,m,n); 
	cout << endl;
	}
}
