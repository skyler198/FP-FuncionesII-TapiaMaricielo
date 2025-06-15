/*Juego de Piedra, Papel y Tijeras: Desarrolla un programa que simule el juego de piedra, papel y
tijeras contra la computadora. El usuario elegirá su jugada (piedra, papel o tijeras) y la computadora
generará su jugada de forma aleatoria. El programa determinará el ganador de cada ronda según las
reglas del juego. El juego continuará hasta que el usuario o la computadora gane 3 rondas. Muestra el
resultado final indicando el ganador del juego.*/

#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>

using namespace std;

int main (){
	int contadorC = 0, contadorJ = 0, jugador, computadora;
	string jugadaComp;
	srand(time(0));
	
	do {
		cout << "-------menu------" << endl;
		cout << "\n1. piedra" << endl;
		cout << "2. papel" << endl;
		cout << "3. tijera" << endl;
		cout << "\nEliga una opcion:" << endl;
		cin >> jugador;
		
		int computadora = rand() % 3 + 1;
			
		if (jugador >= 1 && jugador <= 3) {
			
			switch (computadora) {
                case 1: jugadaComp = "piedra"; break;
                case 2: jugadaComp = "papel"; break;
                case 3: jugadaComp = "tijera"; break;
            }
            
            cout << "\nLa computadora eligio: " << jugadaComp << endl;
		
			if (jugador == computadora){
				cout << "\nEMPATE!\n" << endl;
			}else if ((jugador == 1 && computadora == 3) || (jugador == 2 && computadora == 1) || (jugador == 3 && computadora == 2)){
				cout << "\nGANASTE ESTA RONDA\n" << endl;
				contadorJ++;
			}else {
				cout << "\nPERDISTE ESTA RONDA\n" << endl;
				contadorC++;
			}
		}else{
    		cout << "\nOpcion invalida. Intente de nuevo.\n" << endl;
		}	
	}while(contadorJ != 3 && contadorC != 3);

	return 0;
}