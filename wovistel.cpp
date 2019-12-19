#include <iostream>
using namespace std;

class Cliente{
	private:
		double rut;
		string nombre;
		float telefono;
		int plan=1;
	
	public:

	    Cliente(){
	    	rut=0;
	    	nombre="NULL";
	    	telefono=0;
	    	plan=1;
		}
	    
		Cliente(double dni,string name,float phone,int data){
	    	rut=dni;
	    	nombre=name;
	    	telefono=phone;
	    	plan=data;
		}
		void setRut(double dni){
			rut=dni;
		}
		void setNombre(string name){
			nombre=name;
		}	
		void setTelefono(float phone){
			telefono=phone;
		}
		void setPlan(int data){
			if (data<1){
				plan=1;
			}
			if (data>3){
				plan=3;
			}
			else{
			plan=data;
		    }
		}
		void getRut(){
			cout<<rut<<endl;
		}
		void getNombre(){
			cout<<nombre<<endl;
		}
		void getTelefono(){
			cout<<telefono<<endl;
		}
		void getPlan(){
			if (plan<=1){cout<<"BASICO"<<endl;}
			if (plan==2){cout<<"AVANZADO"<<endl;}
			if (plan>=3){cout<<"PREMIUM"<<endl;}
		}
		void print(){
			getRut();
			getNombre();
			getTelefono();
			getPlan();
		}
		void upgradePlan(){
		    plan+=1;
		    getPlan();
		}
		
		void compare(Cliente a,Cliente b){
	        bool comparacion;
	        if(a.rut==b.rut&&a.nombre==b.nombre){
		     comparacion=true;
	        }
	        else{
		     comparacion=false;
	        }
	        cout<<comparacion<<endl;
}
		
		void megaUpgrade(Cliente *c,int largo){
	         Cliente arreglo[largo]= *c;
	         for (int i=0;i==largo;i++){
		     upgradePlan();
	        }
        }
};


int main(){
	
	Cliente tussi(99999999,"Gonzalo",911,3);
	Cliente kryper(69696969,"Benjamin",133,2);
	Cliente luts(11111111,"Luis",777,1);
	Cliente THN[3];
	
	  THN[1]=tussi;
	  THN[2]=kryper;
	  THN[3]=luts;
	
	
	
	return 0;
}
