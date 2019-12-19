#include <iostream>
#include <math.h>
using namespace std;

int main(){
	
	int dia,mes,anho,s1=0,s2=0,s3=0;
cout<<"Ingrese dia de nacimiento: ";
cin>>dia;
cout<<"\nIngrese mes de nacimiento: ";
cin>>mes;
cout<<"\nIngrese anho de nacimiento: ";
cin>>anho;

s1=dia+mes+anho;

for(int i=1;i<=4;i++){
	s2+=s1%10;
	s1=s1/10;
}
for(int j=1;j<=4;j++){
	s3+=s2%10;
	s2=s2/10;
}
cout<<"\nTu numero de tarot es: "<<s3;
}
