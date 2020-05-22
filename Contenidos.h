/*
Clase: Contenido.h
Autor: María Fernanda Hernández Montes
Descripción: Agregada a la clase Biblioteca
*/ 

#ifndef CONTENIDOS_H
#define CONTENIDOS_H

//CLASE CONTENIDOS
//Definición
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
	public:		//Métodos
		Contenidos();
		void reproducir(nombre);
		string getTitulo();
		void nuevoTitulo();
};


#endif
