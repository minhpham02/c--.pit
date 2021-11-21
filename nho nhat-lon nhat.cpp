#include<bits/stdc++.h> 
using namespace std; 
string minn(int m, int s){ 
	if(s>9*m || (m>1 && s==0))	return "-1"; 
	s-=1; 
	vector<int> v(m); 
	string x = ""; 
	for(int i=m-1; i>0; i--) { 
		if(s>9){ v[i]=9; s-=9; } 
		else { v[i]=s; s=0; } 
	} 
	v[0] = s+1; 
	for(int i=0; i<m; i++)	x.push_back(v[i]+'0'); 
	return x;
} 
string maxx(int m, int s) { 
	if(s>9*m || (m>1 && s==0)) return "-1";
	vector<int> v(m); 
	string x = ""; 
	for(int i=0; i<m; i++) { 
		if(s>9) { v[i]=9; s-=9; }
		else { v[i]=s; s=0; } 
	} 
	for(int i=0; i<m; i++)	x.push_back(v[i]+'0'); 
	return x; 
}
main() { 
	int m, s; 
	cin >> m >> s; 
	cout << minn(m, s) << " " << maxx(m, s); 
}
