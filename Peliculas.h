/*
Clase: Peliculas.h
Autor: Mar�a Fernanda Hern�ndez Montes
Descripci�n: Clase hija de Contenidos
*/ 

#ifndef PELICULAS_H
#define PELICULAS_H

#include "Contenidos.h"

class Peliculas : public Contenidos
{
	private:	//Atributos
	string url;
	public:		//M�todos
	Peliculas(string,string,string[],string,string[],int,int,string);
	string getUrl();
};

#endif
