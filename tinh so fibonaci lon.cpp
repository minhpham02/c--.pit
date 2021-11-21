#include<iostream>
#include<sstream>
#include<vector>
using namespace std;
const long long mod = 1e9 +7;
long long fibo[1001];
void Fibo(){
    fibo[0]=0;
    fibo[1]=1;
    for(int i=2; i<=1000 ; i++){
        fibo[i]=(fibo[i-2]+fibo[i-1])%mod;
    }
}
int main(){
    int t;
    cin>>t;
    Fibo();
    while(t--){
        int n;
        cin>>n;
        cout<<fibo[n]<<endl;
    }
}

