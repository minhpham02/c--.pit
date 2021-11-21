#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int t,n;
	string a="ABBADCCABDCCABD", b="ACCABCDDBBCDDBB"; 
	cin >> t;
	while(t--){
		fflush(stdin);
		int d=0;
		string s;
		float total=10.00;
		cin >> n;
		if(n==101){
		for(int i=0;i<15;i++){
				 if(s[i] != a[i]){d++;
				}	
			}
		}else
		for(int i=0;i<15;i++){
				if(s[i] != b[i]){d++;
				}
			}
		cout << fixed << setprecision(2) << 10.00-((float)2/3)*d << endl;
	}
}
