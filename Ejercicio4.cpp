/*Cálculo de Raíces de una Ecuación Cuadrática: Crea un programa que calcule las raíces de una
ecuación cuadrática utilizando la fórmula general. Utiliza la función sqrt de la librería cmath para
calcular la raíz cuadrada. Solicita al usuario los coeficientes de la ecuación (a, b, c) y muestra las
raíces obtenidas. Considera los casos en los que las raíces son reales o complejas.*/

#include<iostream>
#include<cmath>

using namespace std;

int main(){
	double a, b, c, Raiz1, Raiz2, Discriminante;
	
	cout << "Ingrese el primer coeficiente de su ecuacion cuadratica: " << endl;
	cin >> a;
	
	cout << "Ingrese el segundo coeficiente de su ecuacion cuadratica:" << endl;
	cin >> b;
	
	cout << "Ingrese el tercer coeficiente de su ecuacion cuadratica:" << endl;
	cin >> c;
	
	
	return 0;
}