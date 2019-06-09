#ifndef MOCHILA
#define MOCHILA
#include "Criatura.h"
public:
		int hitP; 	//health point
		int atk;	// attack
		int size;   // 0 pequeño, 1 grande 
		CriaturaCombate();
		// Recibe: Un puntero a una criatura para cruzarla con la actual
		// Efectua: Retorna un vector terminado en 0 con los hijos
		Criatura ** cruzar( Criatura * ); //tiene que borrarse
		// Efecto: Aplica una mutación a la criatura
		void mutar();
		ostream& imprimir(ostream&);
		Criatura * clonar(); //tiene que borrarse
		Criatura * inverso(); //tiene que borrarse
		int operator==(Criatura *); //
