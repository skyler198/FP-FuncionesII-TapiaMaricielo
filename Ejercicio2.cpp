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
	int Cantidad, ValorMaximo;
	
	
	cout << "Que cantidad de numeros aleatorios desea generar?" << endl;
	cin >> Cantidad;
	
	cout << "Digite el maximo valor que podria tomar un numero" << endl;
	cin >> ValorMaximo;
	
	
	return 0;	
}



