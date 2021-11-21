#include<bits/stdc++.h>
using namespace std;
int main(){
	string s1,s;
	getline(cin,s);
	getline(cin,s1);
		int pos=s.find(s1);
		s.erase(pos,s1.size());
		cout << s << endl;
}
