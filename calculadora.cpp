#include <iostream>
#include <math.h>
using namespace std;

int main(){

	int num,num2,temp,res;
	string op;
	
	cout<<"Numero: ";
	cin>>num;
	temp = num;
	
	while(true){
	
	cout<<"Operador: ";
	cin>>op;
	
		
		if (op=="+"){
			cout<<"Numero: ";
			cin>>num2;
			temp += num2;
		}
		else if (op=="*"){
			cout<<"Numero: ";
			cin>>num2;
			temp = temp * num2;
		}
		else if (op=="-"){
			cout<<"Numero: ";
			cin>>num2;
			temp -= num2;
		}
		else if (op=="/"){
			cout<<"Numero: ";
			cin>>num2;
			temp = temp / num2;
		}
		else if (op=="n"){
			cout<<temp;
			return 0;
		}
		else{
			cout<<"Operador desconocido."<<endl;
		}
		

	}





}
