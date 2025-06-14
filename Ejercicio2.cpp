/*Generador de Números Aleatorios: Crea un programa que genere y muestre una serie de números
aleatorios entre 0 y un número máximo especificado por el usuario. El programa solicitará al usuario
la cantidad de números aleatorios que desea generar y el valor máximo permitido. Utiliza la función
rand de la librería cstdlib para generar los números aleatorios.*/

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
	srand(time(0));
	int Cantidad, ValorMaximo, numero;
	cout << "=============================" << endl;
	cout << "  BIENVENIDO A MI PROGRAMA!" << endl;
	cout << "=============================\n" << endl;
	
	cout << "Que cantidad de numeros aleatorios desea generar?" << endl;
	cin >> Cantidad;
	
	cout << "\nDigite el maximo valor que podria tomar un numero:" << endl;
	cin >> ValorMaximo;
	
	for(int i= 0; i < Cantidad; i++){
		numero = rand()% (ValorMaximo + 1);
		cout <<" Numero aleatorio "<< (i + 1) <<": " << numero << endl;
	}
	
	cout << "\n GRACIAS POR USAR MI PROGRAMA <3!" << endl;
	return 0;	
}



