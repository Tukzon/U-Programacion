#include <iostream>
using namespace std;

void Conexion(string a){
     bool b=false;
	 if (a=="INSERTE DISPOSITIVO"){
	 	b=b;
	 }	
	 else{
	 	b=true;
	 	cout<<"DISPOSITIVO CONECTADO"<<endl;
	 }
	
}


int main(){
	
	//M4ST3R_B0MB

 string device="INSERTE DISPOSITIVO";
 string port;
 int time;
 bool activar=0;	
	
	cout<<"Porfavor realice el enlace con el dispositivo..."<<endl;
	Conexion(device);
	cout<<"Ingrese puerto de entrada: ";
	cin>>port;
	Conexion(device);
	cout<<"NOMBRE DISPOSITIVO: ";
	cin>>device;
	Conexion(device);
	cout<<"DISPOSITIVO: "<<device<<endl<<"PUERTO: "<<port<<endl;
	cout<<"================================="<<endl;
	cout<<"INGRESE CUENTA REGRESIVA: ";
	cin>>time;
	for (int i=0;i<time;i++){
		cout<<time-i;
	}
	activar=true;
	
	
	
	return 0;
}
