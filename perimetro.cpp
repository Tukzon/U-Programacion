#include <iostream>
#include <math.h>
using namespace std;

int main(){
	
	int x1,y1,x2,y2,contador=0;
	float sumper=0; 
	 cout<<"Ingrese X: ";
	 cin>>x1;
	 cout<<"Ingrese Y: ";
	 cin>>y1;
	 cout<<"=====================\n";
	 
	 if (x1==0 && y1==0){
	 	cout<<"Cantidad de puntos ingresados: "<<contador<<endl<<"Perimetro de figura formada: "<<sumper;
	 }
	 
	 else {
	 
	 while ( ((x2!=0) || (y2!=0)) || ((x1!=0) || (y1!=0)) ) {
	 	cout<<"Ingrese X: ";
	    cin>>x2;
	    cout<<"Ingrese Y: ";
	    cin>>y2;
	    contador++;
	    sqrt(pow(x2-x1,2)+pow(y2-y1,2)); 
	    if (sqrt(pow(x2-x1,2)+pow(y2-y1,2))==0){
	    	sumper=sumper;
		}
		else{
	    sumper+=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	}
	     cout<<"=====================\n";
	     
	     if (x2==0 && y2==0){
	 	cout<<"Cantidad de puntos ingresados: "<<contador<<endl<<"Perimetro de figura formada: "<<sumper;
	 	return 0;
	 }
	
	    
	    cout<<"Ingrese X: ";
	    cin>>x1;
	    cout<<"Ingrese Y: ";
	    cin>>y1;
	    contador++;
	    sqrt(pow(x1-x2,2)+pow(y1-y2,2));
	    if(sqrt(pow(x1-x2,2)+pow(y1-y2,2))==0){
	    	sumper=sumper;
		}
		else{
	    sumper+=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
	}
	     cout<<"=====================\n";
	     
	     if (x1==0 && y1==0){ 
	 	cout<<"Cantidad de puntos ingresados: "<<contador<<endl<<"Perimetro de figura formada: "<<sumper;
	 	return 0;
	 }
	 
	 }
	 
     }
}
 
