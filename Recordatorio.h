#ifndef RECORDATORIO_H
#define RECORDATORIO_H
using namespace std;

#include <fecha.h>

class Recordatorio : public Fecha
{
	private: 		//ATRIBUTOS
		string hora;
	public:			//M�TODOS
		Recordatorio(string);
		void mostrar();
};

#endif
