#include <iostream>
#include <math.h>
using namespace std;


int main(){
	
	int n,i=0;
	float lb2= (log(n))/(log(2));
	cout<<"Ingrese un numero: ";
	cin>>n;

if (n<=0){
	cout<<"NO VALIDO";
	return 0;
 }
 if (n==2){
 	cout<<"ES POTENCIA\n"<<pow(2,1);
 	return 0;
 }
 if (n==4){
 	cout<<"ES POTENCIA\n "<<pow(2,1)<<" "<<pow(2,2);
 	return 0;
 }
 if (n==8){
 	cout<<"ES POTENCIA\n"<<pow(2,1)<<" "<<pow(2,2)<<" "<<pow(2,3);
 	return 0;
 }
else if ((n/2)%2!=0 || (n/4)%2!=0 || (n/8)%2!=0 ){
	cout<<"NO ES POTENCIA";
	return 0;
} 
else if(n%2==0){
  cout<<"ES POTENCIA\n";
   while (pow(2,i)!=n){
   i++;
   cout<<pow(2,i)<<" ";
    }
 }
else{
	cout<<"NO ES POTENCIA";
    }
}
