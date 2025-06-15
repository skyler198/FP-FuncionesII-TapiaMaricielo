/*Simulación de Tragamonedas Simple: Crea un programa que simule una máquina tragamonedas.
El usuario inicia con 100 monedas y puede apostar entre 1 y 10 por turno. Se generan tres números
aleatorios entre 1 y 5. Si los tres son iguales, gana 10 veces su apuesta. Si hay dos iguales, gana el
doble. Si forman una escalera (por ejemplo como 2-3-4 o 4-3-2), gana 5 veces su apuesta. En
cualquier otro caso, pierde lo apostado. El juego continúa hasta que el jugador se quede sin monedas
o decida salir. Usa funciones y números aleatorios*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void mostrarNumeros(int a, int b, int c) {
    cout << "\n[ " << a << " | " << b << " | " << c << " ]\n";
}

int generarNumero() {
    return rand() % 5 + 1; 
}

bool tresIguales(int a, int b, int c) {
    return (a == b && b == c);
}


bool dosIguales(int a, int b, int c) {
    return (a == b || b == c || a == c);
}


int maximo(int a, int b, int c) {
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    return max;
}


int minimo(int a, int b, int c) {
    int min = a;
    if (b < min) min = b;
    if (c < min) min = c;
    return min;
}

 
bool esEscalera(int a, int b, int c) {
    // Escalera ascendente 
    if ((a == 1 && b == 2 && c == 3) || 
        (a == 2 && b == 3 && c == 4) ||
        (a == 3 && b == 4 && c == 5)) {
        return true;
    }

    // Escalera descendente 
    if ((a == 3 && b == 2 && c == 1) || 
        (a == 4 && b == 3 && c == 2) ||
        (a == 5 && b == 4 && c == 3)) {
        return true;
    }

    return false;
}


int main() {
    srand(time(0));
    
    int monedas = 100;
    int apuesta, numero1, numero2, numero3;
    char respuesta;

    cout << "==========================================================" << endl;
    cout << "   BIENVENIDO A LA MAQUINA TRAGAMONEDAS VIRTUAL DE SKY!" << endl;
    cout << "==========================================================" << endl;
    
    do{
    	cout << "\nTienes " << monedas << " monedas disponibles." << endl;
	    cout << "Cuantas monedas deseas apostar? (1 a 10): ";
	    cin >> apuesta;
	
	    while (apuesta < 1 || apuesta > 10 || apuesta > monedas) {
	        cout << "Apuesta invalida, Intenta nuevamente: ";
	        cin >> apuesta;
	    }
	
	  
	    numero1 = generarNumero();
	    numero2 = generarNumero();
	    numero3 = generarNumero();
	
	    cout << "\nSus numeros aleatorios son: \n";
	    mostrarNumeros(numero1, numero2, numero3);
	    
	    
		 if (tresIguales(numero1, numero2, numero3)) {
	        cout << "\nFelicidades! GANASTE 10 veces tu apuesta!" << endl;
	        monedas += apuesta * 9; // recupera su apuesta + gana 9 veces
	    } else if (esEscalera(numero1, numero2, numero3)) {
	        cout << "\nWow! Formaste una escalera! GANASTE 5 veces tu apuesta!" << endl;
	        monedas += apuesta * 4;
	    } else if (dosIguales(numero1, numero2, numero3)) {
	        cout << "\nBien! Hay dos iguales, GANASTE el doble de tu apuesta!" << endl;
	        monedas += apuesta;
	    } else {
	        cout << "\nLo siento! Perdiste tu apuesta" << endl;
	        monedas -= apuesta;
	    }
	
	    if (monedas <= 0) {
	        cout << "\nTe has quedado sin monedas. JUEGO TERMINADO." << endl;
	        break;
	    }
	    cout << "\nTe quedan " << monedas << " monedas." << endl;
	
        cout << "\nDeseas jugar otra vez? (s/n): ";
        cin >> respuesta;
        
	}while (respuesta == 's' || respuesta == 'S');
    
    cout << "\nGracias por jugar. Vuelve pronto!" << endl;
    return 0;
}
