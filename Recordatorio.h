#ifndef RECORDATORIO_H
#define RECORDATORIO_H
using namespace std;

#include <fecha.h>

class Recordatorio : public Fecha
{
	private: 		//ATRIBUTOS
		string hora;
	public:			//MÉTODOS
		Recordatorio(string);
		void mostrar();
};

#endif
