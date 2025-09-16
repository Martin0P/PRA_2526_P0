#include "BrazoRobotico.h"

//Iniciamos la clase
BrazoRobotico::BrazoRobotico(){
	x = 0.0;
	y = 0.0;
	z = 0.0;
	sujeta = false;
}

// Funciones que devuelven los parametros guardados.
double BrazoRobotico::getx(){
	return x;
}

double BrazoRobotico::gety(){
	return y;
}

double BrazoRobotico::getz(){
	return z;
}

bool BrazoRobotico::getsujeta(){
        return sujeta;
}

//Metodos de la clase
void BrazoRobotico::coger(){
	sujeta = true;
}

void BrazoRobotico::dejar(){
	sujeta = false;
}

void BrazoRobotico::mover(double x, double y, double z){
	this -> x = x;
	this -> y = y;
	this -> z = z;
}
