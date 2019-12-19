#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

    int tabla[6][3194],filas,columnas;
    ifstream archivo;
	string txt;
	
void file(){
	archivo.open("migraciones.txt",ios::in);
	if (archivo.fail()){
		cout<<"\nNo se encuentra el archivo migraciones.txt\nPor favor descarguelo de https://udpiler.com/files/1/migraciones.txt y ubiquelo junto al programa.";
	exit(1);
	}
}

int main(){
	
    int tmuertes=0,shotsum=0,drownsum=0;
    float latdrown,londrown,lataut,lonaut;
	
	file();
	while(!archivo.eof()){
		getline(archivo,txt);
		for (int i=0;i==3194;i++){
			string causa[i];
			int muertes[i];
			   if (muertes[i]!=0){
			   tmuertes+=muertes[i];	
			   }
			
		}
	}
	cout<<tmuertes;
}
