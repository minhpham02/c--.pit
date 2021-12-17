#include<bits/stdc++.h>
using namespace std;
bool SoSanh(string X,string Y){
	string XY=X.append(Y);
	string YX=Y.append(X);
	if(XY.compare(YX)>0)	return 1;
	return 0;
}
void Sapxep(vector<string>arr){
	sort(arr.begin(),arr.end(),SoSanh);
	for(int i=0;i<arr.size();i++)
		cout << arr[i];
}
int main(){
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		string s;
		vector<string>arr;
		for(int i=0;i<n;i++){
			cin >> s;
			arr.push_back(s);
		}
		Sapxep(arr);
		cout << endl;
	}
}
