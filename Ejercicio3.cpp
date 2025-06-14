/*Cálculo de la Hipotenusa: Crea un programa que calcule la hipotenusa de un triángulo rectángulo
utilizando la fórmula de Pitágoras. Solicita al usuario los valores de los catetos y utiliza la función
sqrt de cmath para calcular la raíz cuadrada de la suma de los cuadrados de los catetos. Muestra el
resultado de la hipotenusa calculada.*/

#include <iostream>
#include <cmath>

using namespace std;

int main (){
	double Cateto1, Cateto2, Hipotenusa;
	
	cout << "=====================================" << endl;
	cout << "      BIENVENIDO A MI PROGRAMA!" << endl;
	cout << "=====================================\n" << endl;
	
	cout << "Ingrese el primer cateto de su triangulo" << endl;
	cin >> Cateto1;
	
	cout << "\nIngrese el segundo cateto de su triangulo" << endl;
	cin >> Cateto2;
	
	Hipotenusa = sqrt(pow(Cateto1,2) + pow (Cateto2,2));
	
	cout << "\nLa hipotenusa de tu triangulo es: " << Hipotenusa << endl;
	cout << "\n   GRACIAS POR USAR MI PROGRAMA <3!" << endl;
	
	return 0;
}
