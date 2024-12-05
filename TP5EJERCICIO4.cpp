#include <iostream>
using namespace std;

int main() {
	int cantvendedores, cantventas[20];
	string nombre [20];
	
	cout << "Ingresar la cantidad de vendedores: " << endl;
	cin >> cantvendedores;
	
	for (int i=0; i<cantvendedores; i++){
		cout << "Ingresa el nombre del vendedor: " << i+1 <<endl,
		cin >> nombre [i];
		cout << "Ingrese el numero de ventas del vendedor: " << i+1 <<endl;
		cin >> cantventas [i];
	}
	for (int i=0; i<cantvendedores; i++){ 
	cout << nombre[i] << ": \t" << cantventas[i]<< " Ventas. " <<endl;
}
	
	return 0;
}
