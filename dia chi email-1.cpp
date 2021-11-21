#include<iostream>
#include<cstring>
using namespace std;
void chuanhoa(char s[]){
	int n=0;
	char email[50][50],add[50]="";
	char *p=strtok(s," ");
	while(p!=NULL){
		for(int i=0;i<strlen(p);i++)
			p[i]=tolower(p[i]);
			strcpy(email[n],p);
			n++;
			p=strtok(NULL," ");
		}
		strcat(add,email[n-1]);
		for(int i=0;i<n-1;i++)
			strncat(add,email[i],1);
		cout << add;
}
int main(){
	char s[100];
	fflush(stdin);
	gets(s);
	chuanhoa(s);
	cout <<"@ptit.edu.vn";
}
