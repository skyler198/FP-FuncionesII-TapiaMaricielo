/*Función calcularRaices: Amplía el ejercicio anterior definiendo una función void llamada
calcularRaices que reciba los coeficientes de la ecuación (a, b, c) por valor y las variables donde
se almacenarán las raíces por referencia. Además, incluye una variable por referencia que indique si
las raíces son reales o complejas. La función debe calcular las raíces utilizando la fórmula general y
actualizar las variables correspondientes.*/

#include<iostream>
#include<cmath>

using namespace std;

void calcularRaices(double a, double b, double c, double &raiz1, double &raiz2, bool &sonReales){
	
	double discriminante = pow(b, 2) - 4 * a * c;

}


int main(){
	double a, b, c, raiz1, raiz2;
	bool sonReales;

	
	cout << "Ingrese el primer coeficiente de su ecuacion cuadratica: " << endl;
	cin >> a;
	
	cout << "\nIngrese el segundo coeficiente de su ecuacion cuadratica:" << endl;
	cin >> b;
	
	cout << "\nIngrese el tercer coeficiente de su ecuacion cuadratica:" << endl;
	cin >> c;
	
}
