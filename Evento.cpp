#include "Evento.h"
using namespace std;

Evento::Evento(string _lugar,string _horaInicio,string _horaTermino,string _nota):Fecha(string _name,string _descripcion,string _mes,int _dia)
{
	lugar = _lugar;
	horaInicio = _horaInicio;
	horaTermino = _horaTermino;
	nota = _nota;
}

void Evento::mostrar()
{
	Fecha::mostrar();
	cout<<"Lugar del evento: "<<lugar<<endl;
	cout<<"Hora de inicio: "<<horaInicio<<endl;
	cout<<"Hora de finalización: "<<horaTermino<<endl;
	cout<<"Notas adicionales: "<<nota<<endl;
}
