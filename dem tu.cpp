#include<iostream>
using namespace std;
int a(char c){
    if(c=='\n' || c==' ' || c=='\t') return 0;
    return 1;
}

int main( ){
    int t;
    cin>>t;
    while(t--){
        cin.ignore( );
        string s;
        getline(cin,s);
        int dem=1;
        for(int i=0;i<s.size( )-1;i++)
            if(!a(s[i]) && a(s[i+1]) || !a(s[i]) && !a(s[i+1]))
                dem++;
        cout<<dem<<endl;
    }
}

