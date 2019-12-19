#include <iostream>
using namespace std;

int main(){
	
	string adenina="A",citocina="C",lanina="L",preciosina="P";
	int n;
	string genoma[n];
	
	cout<<"Ingrese valor N: ";
	cin>>n;
	cout<<"Ingrese genoma: ";
    for (int i=0;i<n;i++){
    	cin>>genoma[i];
        if (genoma[i]=="A"){
        	genoma[i]="AL";
		}
		if (genoma[i]=="L"){
			genoma[i]="PACA";
		}
		if (genoma[i]=="P"){
			genoma[i]="CP";
		}
		if (genoma[i]=="C"){
			genoma[i]="PC";
		}
	}
	for (int i=0;i<n;i++){
		cout<<genoma[i];
	}
	
	
	
	
}
