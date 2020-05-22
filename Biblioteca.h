/*
Clase: Biblioteca.h
Autor: María Fernanda Hernández Montes
Descripción: Clase herramientas de streaming
*/ 



#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H
#include "Contenidos.h"

//CLASE BIBLIOTECA
//Definición
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
		
	
	public:			//Métodos
		Biblioteca();	//Constructor
		void buscarVid(string);
		void buscarEtiqueta(string);
		void buscarActor( string );
		void buscarDirector(string);
		void modificarSerie();
		void modificarPelicula();
};

#endif
