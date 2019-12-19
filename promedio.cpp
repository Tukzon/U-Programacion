#include <iostream>
#include <math.h>
using namespace std;

int main(){
	
	int sum=0, i=0,num;
	
	cout<<"Ingrese un numero: ";
	cin>>num;
	while(num <100 || num>200){
		cout<<"Numero invalido, ingrese un nuevo numero: ";
		cin>>num;
	}
	for(int j=0;j<num;j++){
		if(j%3==0){
			sum+=i;
			i++;
		}
	}
	cout<<"El promedio es: "<<sum;
}
