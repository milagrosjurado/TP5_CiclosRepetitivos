#include <iostream>
using namespace std;

int main() {
	int num, producto;
	producto = 0;
	
	cout << "Ingrese un numero positivo: " << endl;
	cin >> num;
	
	while (num <0){
		cout << "Ingrese un numero positivo: " << endl;
		cin >> num;
	}
	
	for (int i=0;i<num;i++){
		for (int j=0;j<num;j++){
			producto= i*j;
			cout << " " << producto;
		}
		cout << endl;
	}
	return 0;
}
