/*Juego de Dados por Turnos: Desarrolla un programa que simule un juego entre dos jugadores que
lanzan un dado por turnos. Cada dado genera un número aleatorio entre 1 y 6. El jugador que
obtenga el número mayor gana la ronda. El primero en ganar 3 rondas será el ganador del juego.
Muestra el resultado de cada ronda y el marcador acumulado. Usa funciones y números aleatorios
(rand de cstdlib).*/
 
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int lanzarDado(){
	return rand() % 6 + 1;
}


int main() {
    srand(time(0));
    
    int jugador1, jugador2, ronda = 1;
    int puntosJ1 = 0, puntosJ2 = 0;
    string enter;
    
    cout << "==========================================================" << endl;
	cout << "              BIENVENIDO A MI PROGRAMA!" << endl;
	cout << "==========================================================\n" << endl;
    
    while (puntosJ1 < 3 && puntosJ2 < 3){
    	cout << "\n             RONDA NUMERO " << ronda << endl;
    	
    	cout << "\nPresiona ENTER para que el Jugador 1 lance...";
        getline(cin, enter);
    	
    	jugador1 = lanzarDado();
    	cout << "\nJugador 1 lanzo: " << jugador1 << endl;
    	cout << "\n+----------------------------------------------+" << endl;
    	
    	cout << "\nPresiona ENTER para que el Jugador 2 lance...";
        getline(cin, enter);
        
		jugador2 = lanzarDado();

    	cout << "\nJugador 2 lanzo: " << jugador2 << endl;

    	if (jugador1 > jugador2){
			cout << "\n+==========================================+" << endl;
        	cout << "\n       Jugador 1 GANA la ronda.\n" << endl;
        	cout << "+==========================================+" << endl;
        	puntosJ1++;
        	
    	}else if (jugador2 > jugador1){
    		cout << "\n+==========================================+" << endl;
        	cout << "\n       Jugador 2 GANA la ronda.\n" << endl;
        	cout << "+==========================================+" << endl;
        	puntosJ2++;
        	
    	}else{
			cout << "\n+==========================================+" << endl;
        	cout << "\n                Empate!\n" << endl;
        	cout << "+==========================================+" << endl;
		}
		
		cout << "\nMarcador: Jugador 1 = " << puntosJ1 << " | Jugador 2 = " << puntosJ2 << endl;
        ronda++;
	}
	
    cout << "\n----------------- Resultado Final -----------------\n";
    
    if (puntosJ1 == 3){
	
        cout << "        Jugador 1 gana el juego, FELICIDADES!\n";
        
    }else{
    	
        cout << "        Jugador 2 gana el juego, FELICIDADES!\n";
    }
    
    cout << "\n          GRACIAS POR USAR MI PORGRAMA <3!" << endl;
    
    return 0;
}

