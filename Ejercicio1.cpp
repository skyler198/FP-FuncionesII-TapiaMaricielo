/*Cálculo del Área de un Círculo: Implementa un programa que calcule el área de un círculo dado su
radio. Utiliza la constante M_PI de la librería cmath para obtener el valor de pi. Solicita al usuario el
radio del círculo y utiliza la función pow de cmath para calcular el cuadrado del radio. Muestra el
resultado del área calculada.*/

#include<iostream>
#include<cmath>
using namespace std;

double CalcularAreaCircular(double radio){
	return M_PI * pow(radio, 2);
}

int main(){
	double radio, Area;
	cout << "=======================================" << endl;
	cout << "       BIENVENIDO A MI PROGRAMA!" << endl;
	cout << "=======================================\n" << endl;
	
	cout << "Ingrese el radio del circulo:" << endl;
	cin >> radio;
	
	Area = CalcularAreaCircular(radio);
	
	cout << "\nEl Area de la circunferencia es: " << Area << endl;
	cout << "\nGRACIAS POR USAR MI PORGRAMA <3!" << endl;
	
	return 0;
}