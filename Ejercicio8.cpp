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
    if (a != b && a != c && b != c) {
        int maxNum = maximo(a, b, c);
        int minNum = minimo(a, b, c);
        return (maxNum - minNum == 2 && (a + b + c == minNum + minNum + 1 + maxNum));
    }
    return false;
}

int main() {
    srand(time(0));
    
    int monedas = 100;
    int apuesta, numero1, numero2, numero3;

    cout << "==========================================================" << endl;
    cout << "   BIENVENIDO A LA MAQUINA TRAGAMONEDAS VIRTUAL DE SKY!" << endl;
    cout << "==========================================================" << endl;

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
    }
    cout << "\nTe quedan " << monedas << " monedas." << endl;
    
    return 0;
}
