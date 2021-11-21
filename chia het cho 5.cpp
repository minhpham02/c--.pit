#include<iostream>
#include<string> 
using namespace std;
string s; 
void kt(){
	cin >> s; 
	int temp=0;
	for(int i=0;i<s.size();i++){
		if(s[i]=='1'){
			if(i%4==0)	temp += 1;
			else if(i%4==1)	temp += 2;
			else if(i%4==2)	temp += 4;
			else if(i%4==3) temp += 3; 
		}	
	}if(temp % 5==0)		cout << "Yes\n";
	else	cout <<"No\n"; 
}
int main(){
	int t;
	cin >> t;
	while(t--){
		kt();
}
	}
