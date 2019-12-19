 #include <iostream>
 #include <math.h>
 #include <cstdlib>
 #include <stdlib.h>
   using namespace std;

int a,o,n;
   int main()
   {
	  cout <<"OPCIONES:"<<endl<<"1. Verificar si un numero es multiplo de 5"<<endl<<"2. Verificar si un numero es par"<<endl<<"3. Verificar si un numero es par y multiplo de 5"<<endl<<"4. Verificar si un numero es divisible por otro"<<endl<<"5. Cerrar programa"<<endl<<"=================================="<<endl<<"INGRESE UNA OPCION: ";
	  cin >>o;
	  if ( (o<=0) || (o>5) || (o=!(1,2,3,4,5)) )
	  {
	  	system("cls");
	  	cout <<"OPCION NO VALIDA"<<endl<<"ERROR CRITICO"<<endl<<"DEVELOPED BY EHL"<<endl; //ERROR OPCION
	  	return 0;
	  }
	  if (o==5) //OPCION 5
	  {
	  	system("cls");
	  	cout <<"Buen dia! CERRANDO PROGRAMA...";
	  	return 0;
	  }
	  cout <<"=================================="<<endl<< "INGRESE UN NUMERO: ";
	  cin >>a;
	  if (o==4)
	  {
	  cout <<"INGRESE UN SEGUNDO NUMERO: ";
	  		cin >>n;
	  	}
	  switch (o)
	  {
	  	case 1: if ((a%5)==0) //OPCION 1
	  	{
	  		cout <<"El numero "<<a<<" es divisible por 5";
		  }
		  else
		  {
		  	cout <<"El numero "<<a<<" NO es divisible por 5";
		  }
		  break;
		  case 2: if ((a%2)==0) //OPCION 2
		  {
		  	cout <<"El numero "<<a<<" es PAR";
		  }
		  else
		  {
		  	cout <<"El numero "<<a<<" es IMPAR";
		  }
		  break;
		  case 3: if ((a%2)==0) //OPCION 3
		  {
		  	cout <<"El numero "<<a<<" es PAR";
		  }
		  else
		  {
		  	cout <<"El numero "<<a<<" es IMPAR";
		  }
		 if ((a%5)==0)
	  	{
	  		cout <<" y divisible por 5";
		  }
		  else
		  {
		  	cout <<" y NO divisible por 5";
		  }
		  break;
	  	case 4: if ((a%n)==0) //OPCION 4
	  	{
	  	
	  		cout <<endl<<"El numero "<<a<<" es divisible por "<<n;
		  }
		  else
		  {
		  	cout <<"El numero "<<a<<" NO es divisible por "<<n;
		  }
		  break;
	  }
	        return 0;
   }

