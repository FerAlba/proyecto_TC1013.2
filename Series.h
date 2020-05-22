#ifndef SERIES_H
#define SERIES_H

#include "Contenidos.h"

class Series : public Contenidos
{
	protected:		//Atributos
		string urlTemp;
		int temporadas;
	public:			//Métodos
		Series(string,string,string[],string,string[],int,int,string,int);
		int getTemporadas();
		string getUrlTemp();
		void nuevaTemp();
};

#endif
