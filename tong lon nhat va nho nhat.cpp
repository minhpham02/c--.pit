#include<iostream>
#include<string>
using namespace std;
void max(string s1,string s2){
	long long sum1=0,sum2=0;
	for(int i=0;i<s1.length();i++){
		if(s1[i]-'0'==5)	s1[i]='6';
		sum1 = sum1*10 + (s1[i]-'0');
	}
	for(int i=0;i<s2.length();i++){
		if(s2[i]-'0'==5)	s2[i]='6';
		sum2 = sum2*10 + (s2[i]-'0');
	}
	cout << sum1+sum2 << endl;;
}
void min(string s1,string s2){
	long long sum3=0,sum4=0;
	for(int i=0;i<s1.length();i++){
		if(s1[i]-'0'==6)	s1[i]='5';
		sum3 = sum3*10 + (s1[i]-'0');
	}
	for(int i=0;i<s2.length();i++){
		if(s2[i]-'0'==6)	s2[i]='5';
		sum4 = sum4*10 + (s2[i]-'0');
	}
	cout << sum3+sum4 << " ";
}
int main(){
	int t;
	cin >> t;
	while(t--){
		fflush(stdin);
		string s1,s2;
		cin >> s1 >> s2;
		min(s1,s2);
		max(s1,s2);		
	}
}
