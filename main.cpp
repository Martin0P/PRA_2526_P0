#include <iostream>
#include "BrazoRobotico.h"
using namespace std;

int main(){
	BrazoRobotico brazo;

	cout << "Posicion Inicial: (" << brazo.getx() << ", " << brazo.gety() << ", " << brazo.getz() << ")\n"
        cout << "Sujetado: " << (brazo.getsujeta() ? "si" : "no") << "\n"

	cout << "Moviendo a 10 5 3 \n"
	brazo.mover(10.0, 5.0, 3.0);
        cout << "Posicion Actual: (" << brazo.getx() << ", " << brazo.gety() << ", " << brazo.getz() << ")\n"

	cout << "Moviendo a 10.5 5.2 3.1 \n"
        brazo.mover(10.5, 5.2, 3.1);
        cout << "Posicion Actual: (" << brazo.getx() << ", " << brazo.gety() << ", " << brazo.getz() << ")\n"

	cout << "Cogiendo un objeto"
	brazo.coger
	cout << "Sujetado: " << (brazo.getsujeta() ? "si" : "no") << "\n\n"

	cout << "Moviendo a 6 8 5 \n"
        brazo.mover(6.0, 8.0, 7.0);
        cout << "Posicion Actual: (" << brazo.getx() << ", " << brazo.gety() << ", " << brazo.getz() << ")\n"

        cout << "Moviendo a 6.1 8.2 7.2 \n"
        brazo.mover(6.1, 8.2, 7.2);
        cout << "Posicion Actual: (" << brazo.getx() << ", " << brazo.gety() << ", " << brazo.getz() << ")\n"
	
        cout << "Dejando un objeto"
        brazo.dejar
        cout << "Sujetado: " << (brazo.getsujeta() ? "si" : "no") << "\n"

	return 0;
}
