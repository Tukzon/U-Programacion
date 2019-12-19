#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

int main(){
	
	char binario[7];
	int byt=0,dec=0;
	cout<<"Ingrese binario: ";
	cin>>binario;
	
	//PESO DE BINARIO
	if(binario[0]=='1'){ byt++;}
	if(binario[1]=='1'){ byt++;}
	if(binario[2]=='1'){ byt++;}
	if(binario[3]=='1'){ byt++;}
	if(binario[4]=='1'){ byt++;}
	if(binario[5]=='1'){ byt++;}
	if(binario[6]=='1'){ byt++;}
	if(binario[7]=='1'){ byt++;}
	
	
	//BINARIO A DECIMAL
	
	if(binario[0]=='1'){ 
	   dec=dec+1*(pow(2,7));
	   }
	   else{
	   	dec=dec;
	   }
	if(binario[1]=='1'){
	   dec=dec+1*(pow(2,6));
	   }
	    else{
	   	dec=dec;
	   }
	if(binario[2]=='1'){ 
	   dec=dec+1*(pow(2,5));
	   }
	    else{
	   	dec=dec;
	   }
	if(binario[3]=='1'){ 
	  dec=dec+1*(pow(2,4));
	   }
	    else{
	   	dec=dec;
	   }
	if(binario[4]=='1'){ 
	  dec=dec+1*(pow(2,3));
	   }
	    else{
	   	dec=dec;
	   }
    if(binario[5]=='1'){ 
	   dec=dec+1*(pow(2,2));
	   }
	    else{
	   	dec=dec;
	   }
    if(binario[6]=='1'){ 
	   dec=dec+1*(pow(2,1));
	   }
	    else{
	   	dec=dec;
	   }
	if(binario[7]=='1'){ 
	   dec=dec+1*(pow(2,0));
	   }
	    else{
	   	dec=dec;
	   }
	
	//BINARIO COMPLEMENTADO
	if(binario[0]=='1'){ 
	   binario[0]='0';
	   }
	   else{
	   	binario[0]='1';
	   }
	if(binario[1]=='1'){
	   binario[1]='0';
	   }
	    else{
	   	binario[1]='1';
	   }
	if(binario[2]=='1'){ 
	   binario[2]='0';
	   }
	    else{
	   	binario[2]='1';
	   }
	if(binario[3]=='1'){ 
	   binario[3]='0';
	   }
	    else{
	   	binario[3]='1';
	   }
	if(binario[4]=='1'){ 
	   binario[4]='0';
	   }
	    else{
	   	binario[4]='1';
	   }
    if(binario[5]=='1'){ 
	   binario[5]='0';
	   }
	    else{
	   	binario[5]='1';
	   }
    if(binario[6]=='1'){ 
	   binario[6]='0';
	   }
	    else{
	   	binario[6]='1';
	   }
	if(binario[7]=='1'){ 
	   binario[7]='0';
	   }
	    else{
	   	binario[7]='1';
	   }
	
    cout<<"El binario pesa: "<<byt<<" bytes\n";
	cout<<"El binario complemento es: "<<binario[0]<<binario[1]<<binario[2]<<binario[3]<<binario[4]<<binario[5]<<binario[6]<<binario[7];
	cout<<"\nEl numero en notacion decimal es: "<<dec;

	
}
