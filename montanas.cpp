#include <iostream>
#include <math.h>
using namespace std;

int main(){

	int puntos,alturaAnt,alturaAct,alturaSig,cimas=0,valles=0;
	
	cout<<"Ingrese la cantidad de puntos: ";
	cin>>puntos;
	
	if(puntos == 0){
		cout<<"No hay puntos";
		return 0;
	}
	else if(puntos <=0){
		cout<<"Puntos invalidos";
		return 0;
	}
	else{
			
	for (int i = 1; i <= puntos; i++)
            {
                if (i == 1)
                {
                    cout<<"Altura de punto "<<i<<" :";
                    cin>>alturaAct;
                }
                else if (i == 2)
                {
                    alturaAnt = alturaAct;
                    cout<<"Altura de punto "<<i<<" :";
                    cin>>alturaAct;
                }
                else
                {
                    cout<<"Altura de punto "<<i<<" :";
                    cin>>alturaSig;
                    if(alturaAct > alturaAnt && alturaAct > alturaSig)
                    {
                        cout<<"El punto "<<i-1<<" es una cima!"<<endl;
                        cimas++;
                    }else if(alturaAct < alturaAnt && alturaAct < alturaSig)
                    {
                        cout<<"El punto "<<i-1<<" es un valle!"<<endl;
                        valles++;
                    }
                    alturaAnt = alturaAct;
                    alturaAct = alturaSig;
                }
            }
	
		cout<<"Cantidad de cimas: "<<cimas<<endl;
		cout<<"Cantidad de valles: "<<valles<<endl;
	}



}
