/*Cálculo de Raíces de una Ecuación Cuadrática: Crea un programa que calcule las raíces de una
ecuación cuadrática utilizando la fórmula general. Utiliza la función sqrt de la librería cmath para
calcular la raíz cuadrada. Solicita al usuario los coeficientes de la ecuación (a, b, c) y muestra las
raíces obtenidas. Considera los casos en los que las raíces son reales o complejas.*/

#include<iostream>
#include<cmath>

using namespace std;

int main(){
	int a, b, c;
	double Raiz1, Raiz2, Discriminante;
	
	cout << "Ingrese el primer coeficiente de su ecuacion cuadratica: " << endl;
	cin >> a;
	
	cout << "Ingrese el segundo coeficiente de su ecuacion cuadratica:" << endl;
	cin >> b;
	
	cout << "Ingrese el tercer coeficiente de su ecuacion cuadratica:" << endl;
	cin >> c;
	
	Discriminante = pow(b,2) - (4 * a * c);
	
	if (Discriminante > 0){
		cout << "Tu ecuacion tiene dos raices reales diferentes: " << endl;
	
		Raiz1 = (-b + sqrt (Discriminante)) / (2 * a);
		Raiz2 = (-b - sqrt (Discriminante)) / (2 * a);
		
		cout << "Las raices son: " << Raiz1 << ", " << Raiz2 << endl;
		
	} else if (Discriminante == 0){
		cout << "Tu ecuacion tiene una raiz real doble" << endl;
		
		Raiz1 = -b / (2 * a);
		cout << "La raiz es: " << Raiz1 << endl;
		
	} else {
		cout << "Tu ecuacion tiene dos raices complejas diferentes" << endl;
		
		Raiz1 = -b / (2 * a);
		Raiz2 = sqrt(-Discriminante) / (2 * a);
		
	cout << "Las raices complejas son: " << Raiz1 << " + " << Raiz2 << "i  y  " << Raiz1 << " - " << Raiz2 << "i" << endl;

	}
	
	return 0;
}