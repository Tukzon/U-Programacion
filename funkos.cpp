#include <iostream>
using namespace std;

int SaldoActual = 0;

int Semana(){
	int Valor=11000;
	SaldoActual += Valor;
	return Valor;
}

void menu(){
	cout<<"Los Funkos Disponibles son:"<<endl;
	cout<<"1.Spuderman: $11.000"<<endl;
	cout<<"2.El Coringa: $8.000"<<endl;
	cout<<"3.Abby: $17.000"<<endl;
	cout<<"4.Cheems: $14.000"<<endl;
	cout<<"5.Curco Vein: $15.000"<<endl;
	cout<<"6.El Viejas: $9.000"<<endl;
	cout<<"7.Illuminatus: $10.500"<<endl;
	cout<<"8.Mono: $6.000"<<endl;
	cout<<"SI NO DESEA REALIZAR UNA COMPRA DIGITE '0'."<<endl;
}

int FunkoPop(int a){
	
	if(a==1){
		int FunkoPop=11000;
		return FunkoPop;
	
	}
	else if(a==2){
		int FunkoPop=8000;
		return FunkoPop;
		
	}
	else if(a==3){
		int FunkoPop=17000;
		return FunkoPop;
		
	}
	else if(a==4){
		int FunkoPop=14000;
		return FunkoPop;
	
	}
	else if(a==5){
		int FunkoPop=15000;
		return FunkoPop;

	}
	else if(a==6){
		int FunkoPop=9000;
		return FunkoPop;
		
	}
	else if(a==7){
		int FunkoPop=10500;
		return FunkoPop;
	}
	else if(a==8){
		int FunkoPop=6000;
		return FunkoPop;
	}
	else if(a==0){
		return 0;
	}
	else{
		cout<<"Funko Pop INVALIDO"<<endl;
		return 0;
	}
}

int Sopaipillas(int plata){
	int sopaipas = 0;
	int barriga = 0;
	int aceite = 0;
	while(plata > 0){
		if(plata >= 3000){
			sopaipas += 30;
			barriga += 30;
			plata -= 3000;
		}
		else{
			sopaipas += int(plata/200);
			aceite += int(plata/200);
			plata -= plata;
		}
	}
	cout<<"Sopaipillas Dona Barriga: "<<barriga<<endl;
	cout<<"Sopaipillas Tio Aceite: "<<aceite<<endl;
	return sopaipas;

}

int main(){
	int opc;
	int FunkoSum = 0;
	menu();
	
	for(int i=1;i<=4;i++){
	cout<<"========="<<endl;
	cout<<"Semana "<<i<<endl;
	Semana();
	cout<<"El dinero de Mike es: $"<<SaldoActual<<endl;
	cout<<"========="<<endl;
	cout<<"Ingresa opcion: ";
	cin>>opc;
	cout<<"El valor del Funko seleccionado es: $"<<FunkoPop(opc)<<endl;
	if (SaldoActual - FunkoPop(opc) < 0){
		cout<<"Saldo Insuficiente"<<endl;
		return 0;
	}
	else{
		cout<<"Funko Pop comprado!"<<endl;
		FunkoSum += FunkoPop(opc);
		SaldoActual -= FunkoPop(opc);
	}
	
	cout<<"=========="<<endl;
	cout<<"Dinero restante $"<<SaldoActual<<endl;
	cout<<"=========="<<endl;
	cout<<"Se han gastado $"<<FunkoSum<<" en Funko pop's"<<endl;
	cout<<"Esto equivale a : "<<Sopaipillas(FunkoSum)<<" Sopaipillas."<<endl;
	}
		
return 0;

}
