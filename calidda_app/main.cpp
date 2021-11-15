//Programa hecho en c++
//Disfrute del programa, gracias :D

#include <conio.h>
#include <iostream>

using namespace std;
using namespace System;

void GenerarNumeroAleatorio(int i_rango, int f_rango, int& x) {
	Random rand;
	f_rango = f_rango + 1;
	x = rand.Next(i_rango, f_rango);
}

void AdivinarNumero(int x, int numero_en_mente) {
	if (numero_en_mente == x) {
		cout << "\nAdivinaste el numero!!\n";
	}else if (numero_en_mente > x) {
		cout << "Te pasaste\n";
	}else{
		cout << "te falto\n";
	}
}

int main() {
	int inicio_rango, fin_rango, x;
	int numero_en_mente, intentos = 0;
	cout << "Indique el inicio del rango del numero a adivinar: ";
	cin >> inicio_rango;
	cout << "Indique el fin del rango del numero a adivinar: ";
	cin >> fin_rango;
	GenerarNumeroAleatorio(inicio_rango, fin_rango, x);
	while (numero_en_mente != x || intentos==0)
	{
		cout << "\nElija un numero entre " << inicio_rango << " y " << fin_rango<<" :";
		cin >> numero_en_mente;
		if (numero_en_mente >= inicio_rango && numero_en_mente <= fin_rango) {
			AdivinarNumero(x, numero_en_mente);
		}
		else {
			cout << "NOTA: El numero esta entre " << inicio_rango << " y " << fin_rango << endl;
		}
		intentos++;
	}
	cout << "Intentos: " << intentos;
	_getch();
	return 0;
}
