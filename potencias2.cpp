#include <iostream>
#include <math.h>
using namespace std;


int main(){
	
	int num,i=0;
	float lb2= (log(num))/(log(2));
	cin>>num;

if (num<=0){
	cout<<"Ingrese numero mayor que 0";
	return 0;
 }
 if (num==2){
 	cout<<"Es Potencia\n"<<pow(2,1);
 	return 0;
 }
 if (num==4){
 	cout<<"Es Potencia\n "<<pow(2,1)<<" "<<pow(2,2);
 	return 0;
 }
 if (num==8){
 	cout<<"Es Potencia\n"<<pow(2,1)<<" "<<pow(2,2)<<" "<<pow(2,3);
 	return 0;
 }
else if ((num/2)%2!=0 || (num/4)%2!=0 || (num/8)%2!=0 ){
	cout<<"No es potencia";
	return 0;
} 
else if(num%2==0){
  cout<<"Es Potencia\n";
   while (pow(2,i)!=num){
   i++;
   cout<<pow(2,i)<<" ";
    }
 }
else{
	cout<<"No es potencia";
    }
}
