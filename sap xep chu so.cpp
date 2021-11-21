#include<bits/stdc++.h>
 using namespace std;
  int main(){
   int t; 
   cin>>t;
    while(t--){ 
	int n;
	 cin>>n; 
	 int a[n]; 
	 for(int &x:a) cin>>x;
	  set<int>s; 
	  int k=0; 
	  for(int i=0;i<n;i++){
	   int u=a[i];
	    while(u>0){
		 int x=u%10; s.insert(x); u/=10;
		  }
		  }
		   for(int x:s){ 
		   cout<<x<<" "; } cout<<endl;
		    } 
			}
