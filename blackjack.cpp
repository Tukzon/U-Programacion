#include <iostream>
#include <map>
#include <vector>
#include <stdlib.h>
#include <time.h>

using namespace std;

class Carta{
	private:
		int valor; //1-11,2,3,4,5,6,7,8,9,10,10,10
		string color; //"rojo,"negro
		string pinta; //"diamante","corazon","trebol","picas"
				
	public:
	    Carta(int value ,string rgb,string design){
	    	color=rgb;
	    	pinta=design;
	    	valor=value;
		}
		Carta(){} //Constructor vacío para permitir auxiliar en Baraja
		
		void setValor(int value){
			valor=value;
		}
		void setColor(string rgb){
			color=rgb;
		}
		void setPinta(string design){
			pinta=design;
		}
		int getValor(){
			return valor;
		}
		string getColor(){
			return color;
		}
		string getPinta(){
			return pinta;
		}	
};

class Jugador{
	protected:
		string nombre;
		int puntaje;
		vector<Carta>mano;
		
	public:
	    Jugador(string name,int score){
	    	nombre=name;
	    	puntaje=score;
		}
		Jugador(){
		}
		
	    void setNombre(string name){
	    	nombre=name;
		}
		void setPuntaje(int score){
			puntaje=score;
			if (score>21||score<0){
				cout<<nombre<<" ha perdido"<<endl;
				puntaje=0;
			}
		}
		int getPuntaje(){
			return puntaje;
		}
		string getNombre(){
			return nombre;
		}
		void tomar(Carta *card){
			mano.push_back(*card);
			if(puntaje<10 && sizeof(card)==1){
				puntaje+=11;
			}
			else{
				puntaje+=1;
			}
		}
	    	
};

class Baraja{
	private:
		vector<Carta*>baraja;
		
	public:	
		void rellenar(){
			for(int i = 1; i <= 12; ++i){  //Rellena la baraja con las 52 cartas
				int patch=10; //soluciona cartas valor 10+
				if(i>=patch){
					baraja.push_back(new Carta(patch,"rojo","diamante"));
            		baraja.push_back(new Carta(patch,"rojo","corazon"));
            		baraja.push_back(new Carta(patch,"negro","trebol"));
            		baraja.push_back(new Carta(patch,"negro","picas"));	
				}			
				else{
            		baraja.push_back(new Carta(i,"rojo","diamante"));
            		baraja.push_back(new Carta(i,"rojo","corazon"));
            		baraja.push_back(new Carta(i,"negro","trebol"));
            		baraja.push_back(new Carta(i,"negro","picas"));
        		}
			}
		}
        void revolver(){	
        	srand (time(NULL));
			Carta* aux=new Carta();
            for (int i = 0; i < 52; i++){
                int r = rand() % 52;
         		Carta aux = *baraja[i];
				baraja[i]=baraja[r];
				*baraja[r]=aux;                
            }
        }
        Carta* robar(){
        	Carta* tief = baraja.back();
        	baraja.pop_back();
        	return tief; 	
		}

        	
			
};

class Crupier : public Jugador{
	private:
		
	public:
		Crupier(string nombre, int puntaje) : Jugador (nombre, puntaje) {
		}
		
};


class Mesa{
	private:
		map<string,string>mesa;
		Jugador P1;
		Jugador P2;
		Jugador AUX;
		Baraja deck;
		
	public:
		Mesa(Jugador p1,Jugador p2){
			Crupier admin("HOST",0);
			P1=p1;
			P2=p2;
			Baraja deck;
			mesa[P1.getNombre()]=P2.getNombre();
						
		}
		
			Mesa(Jugador p1,Jugador p2,Jugador aux){ //FUNCIONA EN CASO QUE SE AGREGUE UN NUEVO JUGADOR
			Crupier admin("HOST",0);
			P1=p1;
			P2=p2;
			AUX=aux;
			Baraja deck;
			mesa[P1.getNombre()]=P2.getNombre();
			mesa[P2.getNombre()]=AUX.getNombre();
						
		}
		
	void jugar(char option,Jugador t){
			cout<<"Turno de "<<t.getNombre()<<endl;
	cout<<"Seleccione una accion:"<<endl<<"Robar(R)"<<endl<<"Plantarse(P)"<<endl;
		cin>>option;
		if (option=='R'){
			cout<<t.getNombre()<<" ha robado una carta."<<endl;
			//t.tomar(deck.robar());   <- lo dejo así porque me crashea
			cout<<"mejor algo, que nada, No tuve opcion :("<<endl;
		}
		else if (option=='P'){
			cout<<t.getNombre()<<" se ha plantado."<<endl;
		}
		else{
			cout<<"OPCION NO VALIDA"<<endl;
		}
	}
	
	void Agregar(){
		AUX.setNombre("NEW PLAYER");
		AUX.setPuntaje(0);	
	}
};

void separador(){ //orden visual para consola
	cout<<"===================================="<<endl;
}
	

int main(){
	string nombrep1="PLAYER 1",nombrep2="PLAYER 2",auxiliar="PLAYER 3";
	Jugador p1(nombrep1,0);
	Jugador p2(nombrep2,0);
	Jugador aux(nombrep2,0);
	Crupier admin("HOST",0);
	Baraja deck;
	Mesa juego(p1,p2);
	Mesa juegov2(p1,p2,aux);
	char opcion;
	map<string,string>::iterator iter;
	
	cout<<"Ingrese nombre jugador 1: ";
	cin>>nombrep1;
	cout<<"Ingrese nombre jugador 2: ";
	cin>>nombrep2;
	p1.setNombre(nombrep1);
	p2.setNombre(nombrep2);
	separador();
	cout<<"Bienvenidos "<<p1.getNombre()<<" y "<<p2.getNombre()<<" mi nombre es "<<admin.getNombre()<< " y sere su Crupier. "<<endl<<"Comencemos el juego: ..."<<endl;
	separador();
	deck.rellenar();
	juego.jugar(opcion,p1);
	p1.setPuntaje(10);
	separador();
	juego.jugar(opcion,p2);
	separador();
	juego.jugar(opcion,admin);
	admin.setPuntaje(18);
	separador();
	juego.jugar(opcion,p1);
	separador();
	juego.jugar(opcion,p2);
	p2.setPuntaje(21);
	separador();
	
	cout<<"Fin del juego:"<<endl<<"Puntajes:"<<endl<<p1.getNombre()<<" "<<p1.getPuntaje()<<endl;
	cout<<p2.getNombre()<<" "<<p2.getPuntaje()<<endl;
	cout<<admin.getNombre()<<" "<<admin.getPuntaje()<<endl;
	
	

	
	return 0;
}
