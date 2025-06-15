/*Juego de Dados por Turnos: Desarrolla un programa que simule un juego entre dos jugadores que
lanzan un dado por turnos. Cada dado genera un número aleatorio entre 1 y 6. El jugador que
obtenga el número mayor gana la ronda. El primero en ganar 3 rondas será el ganador del juego.
Muestra el resultado de cada ronda y el marcador acumulado. Usa funciones y números aleatorios
(rand de cstdlib).*/
 
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int lanzarDado(){
	return rand() % 6 + 1;
}


int main() {
    srand(time(0));
    int jugador1, jugador2;
    
    jugador1 = lanzarDado();
	jugador2 = lanzarDado();

    cout << "Jugador 1 lanzo: " << jugador1 << endl;
    cout << "Jugador 2 lanzo: " << jugador2 << endl;

    if (jugador1 > jugador2)
        cout << "Jugador 1 gana la ronda.\n";
    else if (jugador2 > jugador1)
        cout << "Jugador 2 gana la ronda.\n";
    else
        cout << "Empate!\n";

    return 0;
}

