#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	char name[100],clas[15],date[10];
	float d;
	int id;
};
void nhap(struct SinhVien ds[], int N){
	for(int i=0;i<N;i++){
		scanf("\n");
		ds[i].id=i+1;
		cin.getline(ds[i].name,100);
		cin.getline(ds[i].clas,15);
		cin.getline(ds[i].date,10);
		cin >> ds[i].d;
	}	
}
void sapxep(struct SinhVien ds[],int N){
	for(int i=0;i<N-1;i++){
		for(int j=i+1;j<N;j++){
		if(ds[i].d<ds[j].d)	swap(ds[i],ds[j]);
		}
	}
}
void in(struct SinhVien ds[], int N){
	for(int i=0;i<N;i++){
		if(ds[i].id<=9)	cout << "B20DCCN00";
		else cout <<"B20DCCN0";
		cout << ds[i].id << " ";
		char *p=strtok(ds[i].name," ");
			while(p!=NULL){
				p[0]=toupper(p[0]);
				for(int j=1;j<strlen(ds[i].name);j++)
					p[j]=tolower(p[j]);
					cout << p << " ";
					p=strtok(NULL," ");
				}
		cout << ds[i].clas << " ";
		int m=strlen(ds[i].date);
		if(m<10){
			if(m==9){
				if(ds[i].date[1]=='/')	cout << 0 << ds[i].date; 
				else{
					cout << ds[i].date[0] << ds[i].date[1] << ds[i].date[2] << 0;
					for(int j=3;j<m;j++)	cout << ds[i].date[j];
				}
			}else{
				cout << 0 << ds[i].date[0] << ds[i].date[1] << 0;
				for(int j=2;j<m;j++)	cout << ds[i].date[j];
			}
		}else cout << ds[i].date; 
		cout << " " << fixed << setprecision(2) << ds[i].d << endl; 
	}
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}
