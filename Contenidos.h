/*
Clase: Contenido.h
Autor: Mar�a Fernanda Hern�ndez Montes
Descripci�n: Agregada a la clase Biblioteca
*/ 

#ifndef CONTENIDOS_H
#define CONTENIDOS_H

//CLASE CONTENIDOS
//Definici�n
class Contenidos
{
	protected:	//Atributos
		string titulo;
		string duracion;
		string[] actores;
		string director;
		string[] etiquetas;
		int temporadas;
		int calificacion;
	public:		//M�todos
		Contenidos();
		void reproducir(nombre);
		string getTitulo();
		void nuevoTitulo();
};


#endif
