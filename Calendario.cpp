#include "Calendario.h"
using namespace std;

Calendario::Calendario(string _idUsuario, string _contrasenia)
{
	idUsuario = _idUsuario;
	contrasenia = _contrasenia;
}

string Calendario::getIDUsuario()
{
	return idUsuario;
}

string Calendario::getContrasenia()
{
	return contrasenia;
}

void Calendario::buscarMes(string)
{
	
}

void Calendario::buscarMes(int)
{
	
}

void Calendario::buscarFecha(int,int)
{
	
}

void Calendario::buscarFecha(string,int)
{
	
}


void Calendario::crearUsuario()
{
	Calendario c1;
	int correct = 0;
	string id,string password,string password2
	while (correct!=0){
				cout<<"Nombre: "<<endl;
				cin>>id;
				cout<<"Crear contraseña: "<<endl;
				cin>>password;
				cout<<"Repite tu contraseña: "<<endl;
				cin>>password2;
				if (password == password2)
					ci.Calendario(id,password);
					correct=0;
				else
					correct=1;	
}

void Calendario::ingresarUsuario()
{
	int correct = 0;
	string userName,contrasenia1,contrasenia2;
			
	while (correct!=0){
		cout<<"Nombre: "<<endl;
		cin>>userName;
		cout<<"Contraseña: "<<endl;
		if (contrasenia1 == c1.getContrasenia() && userName == c1.getIDUsuario()):
			cout<<"Welcome back, "<<userName<<endl;
			correct=0;
		else:
			correct=1;

}
