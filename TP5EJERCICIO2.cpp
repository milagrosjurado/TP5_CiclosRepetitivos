#include <iostream>
using namespace std;

int main() {
	int num, suma;
	suma = 0;
	
	cout << "Ingrese un numero positivo: " << endl;
	cin >> num;
	
	while (num <0){
		cout << "Ingrese un numero positivo: " << endl;
		cin >> num;
	}
	
	for (int i=0; i<num; i++){
		for (int j=0; j<num; j++){
			suma = i+j;
			if (suma<=num){
					cout << "* " ;
			}
			
}
	cout << endl;
}
	
	return 0;
}
