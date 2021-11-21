#include<bits/stdc++.h>
using namespace std;
struct Time{
	int hour,minute,second,sum;
};
struct Time ds[5001]; int n=0;
void nhap(){
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> ds[i].hour >> ds[i].minute >> ds[i].second;
		ds[i].sum=ds[i].hour*60*60+ds[i].minute*60+ds[i].second;
	}
}
void sapxep(){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
		if(ds[i].sum>ds[j].sum)	swap(ds[i],ds[j]);
		}
	}
}
void in(){
	for(int i=0;i<n;i++){
		cout << ds[i].hour << " " << ds[i].minute << " " << ds[i].second << endl;
	}
}
int main(){
	nhap();
	sapxep();
	in();
}
