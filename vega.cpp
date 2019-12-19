#include <iostream>
#include <math.h>
using namespace std;

int main(){
	
int L,H,E;

cout<<"Ingrese litros de Leche producidos: ";
cin>>L;
cout<<"Ingrese cantidad de Huevos producidos: ";
cin>>H;
cout<<"Ingrese cantidad de Espinaca producida: ";
cin>>E;

int DB=(L*400)+(H*90)+(E*300);   //DINERO BRUTO
cout<<endl<<DB<<" dinero bruto\n";
int TL=((L*400)*4.5)/100,TH=((H*90)*4)/100,TE=((E*300)*4.3)/100;  //TRANSPORTE
cout<<"\nMonto a pagar por transporte de Leche: $"<<TL<<endl<<"Monto a pagar por transporte de Huevos: $"<<TH<<endl<<"Monto a pagar por transporte de Espinacas: $"<<TE<<endl;
int AL=((L*400)*3.5)/100,AH=((H*90)*3)/100,AE=((E*300)*3.8)/100;  //ALMACENAMIENTO
cout<<"\nMonto a pagar por almacenamiento de Leche: $"<<AL<<endl<<"Monto a pagar por almacenamiento de Huevos: $"<<AH<<endl<<"Monto a pagar por almacenamiento de Espinacas: $"<<AE<<endl;		
int CL=(L*400)+TL+AL,CH=(H*90)+TH+AH,CE=(E*300)+TE+AE;  //COSTOS TOTALES
cout<<"\nCosto total leche: $"<<CL<<"\nCosto total Huevos: $"<<CH<<"\nCosto total Espinacas: $"<<CE<<endl;
int UL=(L*400)-TL-AL,UH=(H*90)-TH-AH,UE=(E*300)-TE-AE;  //UTILIDAD  TOTAL
cout<<"\nUtilidad total leche: $"<<UL<<"\nUtilidad total Huevos: $"<<UH<<"\nUtilidad total Espinacas: $"<<UE<<endl<<endl<<"======================================";
int UN=(UL+UH+UE);  //UTILIDAD NETA
cout<<"\nUTILIDAD NETA: $"<<UN<<"\n======================================";


}
