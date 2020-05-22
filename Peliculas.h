/*
Clase: Peliculas.h
Autor: María Fernanda Hernández Montes
Descripción: Clase hija de Contenidos
*/ 

#ifndef PELICULAS_H
#define PELICULAS_H

#include "Contenidos.h"

class Peliculas : public Contenidos
{
	private:	//Atributos
	string url;
	public:		//Métodos
	Peliculas(string,string,string[],string,string[],int,int,string);
	string getUrl();
};

#endif
