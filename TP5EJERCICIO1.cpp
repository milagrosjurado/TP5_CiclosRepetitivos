#include <iostream>
using namespace std;

int main (){
	int num, resultado;
	resultado = 1;
	
	cout << "Ingrese un numero positivo: " << endl;
	cin >> num;
	
	while (num <0){
		cout << "Ingrese un numero positivo: " << endl;
		cin >> num;
	}
	
	for (int i=1; i<=num; i++){
		resultado = resultado * i;
	}
	
	cout << "El factorial de " <<num << " es igual a: " << resultado;
}
