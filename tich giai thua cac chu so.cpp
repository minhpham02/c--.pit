#include<iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,c[10]={0};
		cin >> n;
		while(n--){
			char i;
			cin >> i;
			if(i=='1')	continue;
			if(i=='2' || i=='3'|| i=='5'|| i=='7')	c[i-48]++;
			if(i=='4'){c[2]+=2; 	c[3]++;}
			if(i=='6'){c[3]++;		c[5]++;}
			if(i=='8'){c[7]++;		c[2] +=3;}
			if(i=='9'){c[7]++;		c[2]++;		c[3] += 2;}	
		}
		for(int j=9;j>1;j--){
			while(c[j]>0){
				cout << j;
				c[j]--;
			}
		}
		cout << endl;
	}
}
