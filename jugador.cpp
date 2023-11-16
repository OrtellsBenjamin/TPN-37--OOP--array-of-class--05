#include <iostream>
#include "jugador.h"

using namespace std;

void MostrarDatos(Cjugador*arreglo, int n){
	for(int i=0;i<n;i++){
		cout<<"Nombre: "<<arreglo[i].getnombre()<<endl;
		cout<<"Posicion: "<<arreglo[i].getposicion()<<endl;
		cout<<"Edad: "<<arreglo[i].getedad()<<endl;
		cout<<"Estatura: "<<arreglo[i].getestatura()<<endl;
		cout<<"Peso: "<<arreglo[i].getpeso()<<endl;
		cout<<"Nacionalidad: "<<arreglo[i].getnacionalidad()<<endl;
		cout<<endl;
	}
	
}

void ListarNacionalidad(Cjugador*arreglo, int n, string nacionalidad){
	cout<<"Jugadores de Nacionalidad "<<nacionalidad<<": "<<endl;
	for(int i=0;i<n;i++){
		if(arreglo[i].getnacionalidad()== nacionalidad){
			cout<<"-"<<arreglo[i].getnombre()<<endl;
			cout<<endl;
		}
	}
}

void ListarPesos(Cjugador*arreglo,int n){
	cout<<"Jugadores que pesan entre 75-80kg: "<<endl;
	for(int i=0;i<n;i++){
		if(arreglo[i].getpeso()>=75 && arreglo[i].getpeso()<=80){
			cout<<"-"<<arreglo[i].getnombre()<<endl;
			cout<<endl;
		}
	}
}
 
void ListarMasAlto(Cjugador* arreglo, int n) {
    Cjugador x = arreglo[0];
    cout << "El jugador mas alto es: " << endl;
    for (int i = 1; i < n; i++) {
        if (arreglo[i].getestatura() > x.getestatura()) {
            x = arreglo[i];
            
        }
    }
     cout<<"-"<<x.getnombre()<<endl;
}

int main(){
	Cjugador*jugadores= new Cjugador[7];
	
	jugadores[0]= Cjugador("Fabio",'G',43,1.88,86,"Brasil");
	jugadores[1]= Cjugador("Marlon",'D',28,1.83,78,"Brasil");
	jugadores[2]= Cjugador("Marcelo",'D',35,1.73,72,"Brasil");
	jugadores[3]= Cjugador("Nino",'D',26,1.88,82,"Brasil");
	jugadores[4]= Cjugador("John Kennedy",'A',21,1.73,71,"Brasil");
	jugadores[5]= Cjugador("Keno",'A',34,1.78,72,"Brasil");
	jugadores[6]= Cjugador("German Cano",'A',35,1.78,81,"Argentina");
	
	
	
	
	
	MostrarDatos(jugadores, 7);
	ListarNacionalidad(jugadores,7,"Argentina");
	ListarPesos(jugadores,7);
	ListarMasAlto(jugadores,7);
	
	
	return 0;
}
