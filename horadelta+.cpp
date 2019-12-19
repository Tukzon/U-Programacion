#include <iostream>
#include <math.h>
using namespace std;

int main(){
	
int hhmm,delta;	
	cout<<"Ingrese hora: (hhmm) ";
	cin>>hhmm;
	
if(hhmm>2400 || hhmm<0){                  //CONDICIONAL HORA
	cout<<"ERROR: HORA INVALIDA";
	return 0;
}	
	cout<<"\nIngrese delta en minutos: ";
	cin>>delta;

cout<<hhmm+(hhmm%360)+(delta%60);

}
