#include <iostream>
#include <math.h>

using namespace std;

int main (){
	
	int cal,km;
	int kmr=0;
	int suma=0;
	
	cout<<"Ingrese cantidad total de calorias\n";
    cin>>cal;
	cout<<"\nIngrese cantidad total de kilometros\n";
	cin>>km;
	
	if(kmr==km){
		cout<<"Ha alcanzado su objetivo y ha quemado " <<km*50<<" calorias\n";
		}
	while (kmr<km){
		cout<<"\nCuantos kilometros ha recorrido?\n";
		cin>>kmr;
		suma=suma+kmr;
		if(km-suma<0){
			cout<<"Ha sobrepasado su objetivo por "<<(km-suma)*(-1)<<" kilometro(s) y ha quemado "<<suma*50<<" calorias\n";
		break;	
		}
		
		if(km-suma>=0){
		cout<<"\nFalta(n) "<<km-suma<<" kilometros\n"<<"==============================";	
	}
	
		if (suma==km){
			cout<<"\nHa alcanzado su objetivo y ha quemado " <<suma*50<<" calorias\n";
			break;
		}
	}			
}
