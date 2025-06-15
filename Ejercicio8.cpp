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
        cout << "Apuesta invalida. Intenta nuevamente: ";
        cin >> apuesta;
    }

  
    numero1 = generarNumero();
    numero2 = generarNumero();
    numero3 = generarNumero();

    cout << "\nSus numeros aleatorios son: \n";
    mostrarNumeros(numero1, numero2, numero3);

    //logica de premios pendiente
    //Menu pendiente

    return 0;
}
