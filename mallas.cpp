  #include <iostream>
   #include <math.h>
   using namespace std;
int P;
int R;
int AP;
int AR;
int RP=(250*R);
int PP=(400*P);
   int main()
   {
      cout << "Ingresa la cantidad de metros de malla plana que desea comprar:"<<endl;
     cin >>P;
     cout <<"Ingresa la cantidad de metros de malla rollo que desea comprar:"<<endl;
     cin >>R;
     cout <<"Ingresa la cantidad de anos que lleva comprando malla plana:"<<endl;
     cin >>AP;
     cout <<"Ingresa la cantidad de anos que lleva comprando malla rollo:"<<endl;
     cin >>AR;
     if (AP>6)
     {
       cout <<"Obtiene un descuento de 6% en mallas planas"<<endl <<"El valor es: " <<PP-((6*100)/PP);
     }
       else 
       {
         cout <<"No obtiene descuento"<<endl <<"El valor es: " <<PP;
       }
    
       if (AR>5)
       {
         cout <<"Obtiene un descuento de 8% en mallas rollo"<<endl <<"El valor es: " <<RP-((8*100)/RP);
       }
         else
         {
           cout <<"No obtiene descuento"<<endl <<"El valor es: " <<RP;
         }
      
       
      return 0;
   }

