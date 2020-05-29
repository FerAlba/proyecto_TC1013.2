#ifndef FECHA_H
#define FECHA_H
using namespace std;

class Fecha
{
	protected:	//ATRIBUTOS
		string name;
		string descripcion;
		string mes;
		int dia;
	public:		//M�TODOS
		Fecha(string,string,int,int);		//Anio como n�mero
		Fecha(string,string,string,int);	//Anio como cadena
		virtual void mostrar();
};

#endif
