#include "Recordatorio.h"
using namespace std;

Recordatorio::Recordatorio(string _hora):Fecha(string _name,string _descripcion,string _mes,int _dia)
{
	hora = _hora;
}

void Recordatorio::mostrar()
{
	Fecha::mostrar();
	cout<<"Hora del recordatorio: "<<hora<<endl;
}
