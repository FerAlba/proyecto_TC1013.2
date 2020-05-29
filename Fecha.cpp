#include "Fecha.h"
using namespace std;

Fecha::Fecha(string _name, string _descripcion, int _mes, int _dia)
{
	name = _name;
	descripcion = _descripcion;
	switch (_mes){
		case 01:
			mes = "enero";
		case 02:
			mes = "febrero";
		case 03:
			mes = "marzo";
		case 04:
			mes = "abril";
		case 05:
			mes = "mayo";
		case 06:
			mes = "junio";
		case 07:
			mes = "julio";
		case 08:
			mes = "agosto";
		case 09:
			mes = "septiembre";
		case 10:
			mes = "octubre";
		case 11:
			mes = "noviembre";
		case 12:
			mes = "diciembre";
		}
	dia = _dia;
}

Fecha::Fecha(string _name, string _descripcion, string _mes, int _dia)
{
	name = _name;
	descripcion = _descripcion;
	mes = _mes;
	dia = _dia;
}

void Fecha::mostrar()
{
	cout<<"Título: "<<name<<endl;
	cout<<"Descripción: "<<descripcion<<endl;
	cout<<"Fecha: "<<dia<<" de "<<mes<<endl;
}
