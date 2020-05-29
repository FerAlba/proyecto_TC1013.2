#ifndef EVENTO_H
#define EVENTO_H
using namespace std;

#include <fecha.h>

class Evento : public Fecha
{
	private:			//ATRIBUTOS
		string lugar;
		string horaInicio;
		string horaTermino;
		string nota;
	public:				//MÉTODOS
		Evento(string,string,string,string);
		void mostrar();
};

#endif
