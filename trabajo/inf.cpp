#include <iostream>
#include <fstream>
#include <sstream>
using std::stringstream;
using namespace std;

int main(){

int muertes=-1,desaparecidas=0,md=0,ms=0,casosauto=0,casosdrow=0,casosshot=0,dd=0;
double tablacausas,tablamuertes,tabladesaparecidos,tablalat,tablalon,latdrow,londrow,latcar,loncar;
string p1,p2,p3,p4,p5,p6,causa;

ifstream archivo("migraciones.txt");

	if (archivo.fail()){
		cout<<"\nNo se encuentra el archivo migraciones.txt\nPor favor descarguelo desde el grupo de Facebook y ubiquelo junto al programa.";
	return 0;
	}
  
  while(!archivo.eof()){
   archivo>>p1>>p2>>p3>>p4>>p5>>p6;
   istringstream(p3)>>tablamuertes;
   istringstream(p4)>>tabladesaparecidos;
   istringstream(p5)>>tablalat;
   istringstream(p6)>>tablalon;
   //cout<<p1<<" "<<p2<<" "<<p3<<" "<<p4<<" "<<p5<<" "<<p6<<endl; //BORRAR PARA PROBAR SI FUNCIONA EL CICLO

	   muertes+=tablamuertes;
	   desaparecidas+=tabladesaparecidos;
   
   if(p1=="drowned"){
       casosdrow++;   	
	   md+=tablamuertes;
	   latdrow+=tablalat;
	   londrow+=tablalon;
	   dd+=tabladesaparecidos;
   }
   
   if(p1=="shot_by_the_police"){
   	   casosshot++;
	   ms+=tablamuertes;
   }
   
    if(p1=="car_accident"){
   	    casosauto++;
   	   latcar+=tablalat;
   	   loncar+=tablalon;
   }
   
    if(tabladesaparecidos>2){
	   	causa=p1;
	   }
   
}

   cout<<muertes<<endl<<desaparecidas<<endl<<md<<endl<<ms<<endl<<causa<<endl;
   cout<<latdrow/casosdrow<<" "<<londrow/casosdrow<<endl;
   cout<<latcar/casosauto<<" "<<loncar/casosauto;
 
archivo.close();
   return 0;

}

//1.	Suma de muertes confirmadas. 
//2.	Suma de personas desaparecidas.
//3.	Cantidad de muertes asociadas a "drowned".
//4.	Cantidad de muertes asociadas a "shot_by_the_police".
//5.	Causa con mayor numero de desaparecidos.
//6.	Latitud y longitud promedio asociada a "drowned".
//7.	Latitud y longitud promedio asociada a "car_accident".

