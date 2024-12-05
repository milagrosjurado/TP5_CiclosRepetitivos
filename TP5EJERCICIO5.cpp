#include <iostream>
using namespace std;

int main() {
	double saldo, monto;
	int opcion;
	saldo = 10000;
	
	cout << "Ingrese opcion:"<< endl;
	cout << "1. Consultar saldo." << endl;
	cout << "2. Depositar dinero." << endl;
	cout << "3. Retirar dinero." << endl;
	cout << "4. Salir." << endl;
	cin >> opcion;
	
	while (opcion!=4){
		
	switch (opcion){
		case 1:
			cout << "Su saldo es: "<< saldo<< endl;
			break;
		case 2:
			cout << "Ingresar el monto que desea depositar: " <<endl;
			cin >> monto;
			saldo= saldo + monto;
			
			cout << "Su saldo actual es:" << saldo<< endl;
			break;
		case 3:
			cout << "Ingresar el monto a retirar: " << endl;
			cin >> monto;
			while (monto>saldo){
				cout << "El monto ingresado es mayor al saldo. Ingresar un nuevo saldo: " << endl;
				cin >> monto;
			}
			saldo= saldo-monto;
			
			cout << "Su saldo actual es: " << saldo<< endl;
			break;
		
			
	}
	cout << "Ingrese opcion:"<< endl;
	cout << "1. Consultar saldo." << endl;
	cout << "2. Depositar dinero." << endl;
	cout << "3. Retirar dinero." << endl;
	cout << "4. Salir." << endl;
	cin >> opcion;
}
	
	
	return 0;
}
