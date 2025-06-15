/*Juego de Piedra, Papel y Tijeras: Desarrolla un programa que simule el juego de piedra, papel y
tijeras contra la computadora. El usuario elegirá su jugada (piedra, papel o tijeras) y la computadora
generará su jugada de forma aleatoria. El programa determinará el ganador de cada ronda según las
reglas del juego. El juego continuará hasta que el usuario o la computadora gane 3 rondas. Muestra el
resultado final indicando el ganador del juego.*/

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main (){
	int contadorC = 0, contadorJ = 0, jugador, computadora;
	srand(time(0));
	
	do {
		cout << "-------menu------" << endl;
		cout << "1. piedra" << endl;
		cout << "2. papel" << endl;
		cout << "3. tijera" << endl;
		cout << "Eliga una opcion:" << endl;
		cin >> jugador;
		
		int computadora = rand() % 3 + 1;
			
		if (jugador >= 1 && jugador <= 3) {
			if (jugador == computadora){
				cout << "EMPATE!" << endl;
			}else if ((jugador == 1 && computadora == 3) || (jugador == 2 && computadora == 1) || (jugador == 3 && computadora == 2)){
				cout << "GANASTE ESTA RONDA!" << endl;
				contadorJ++;
			}else {
				cout << "PERDISTE ESTA RONDA" << endl;
				contadorC++;
			}
		}else{
    		cout << "Opción inválida. Intente de nuevo." << endl;
		}	
			
	}while(contadorJ != 3 && contadorC != 3);

	return 0;
}