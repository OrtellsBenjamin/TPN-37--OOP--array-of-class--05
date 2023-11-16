#ifndef jugador_h
#define jugador_h
#include <string>
using namespace std;

class Cjugador{
	
	public:
		Cjugador(string nom, char pos, int e, float est,int p, string nac);
		Cjugador();
		
		string getnombre();
		char getposicion();
		int getedad();
		float getestatura();
		int getpeso();
		string getnacionalidad();
		
	private:
		string nombre;
		char posicion;
		int edad;
		float estatura;
		int peso;
		string nacionalidad;
};

Cjugador::Cjugador(){
}

Cjugador::Cjugador(string nom, char pos, int e, float est, int p, string nac){
	
	nombre= nom;
	posicion= pos;
	edad= e;
	estatura= est;
	peso= p;
	nacionalidad= nac;
}

string Cjugador::getnombre(){
	return nombre;
}

char Cjugador::getposicion(){
	return posicion;
}

int Cjugador::getedad(){
	return edad;
}

float Cjugador::getestatura(){
	return estatura;
}

int Cjugador::getpeso(){
	return peso;
}

string Cjugador::getnacionalidad(){
	return nacionalidad;
}

#endif
