/*
Clase: Biblioteca.h
Autor: Mar�a Fernanda Hern�ndez Montes
Descripci�n: Clase herramientas de streaming
*/ 



#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H
#include "Contenidos.h"

//CLASE BIBLIOTECA
//Definici�n
class Biblioteca{
	private:		//Atributos
		int cantElementos;
		Contenidos titulo;
		Contenidos duracion;
		Contenidos actores;
		Contenidos director;
		Contenidos etiquetas;
		Contenidos temporadas;
		Contenidos calificacion;
		
	
	public:			//M�todos
		Biblioteca();	//Constructor
		void buscarVid(string);
		void buscarEtiqueta(string);
		void buscarActor( string );
		void buscarDirector(string);
		void modificarSerie();
		void modificarPelicula();
};

#endif
