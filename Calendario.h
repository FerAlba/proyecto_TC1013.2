#ifndef CALENDARIO_H
#define CALENDARIO_H
using namespace std;


class Calendario
{
	private:		//ATRIBUTOS
		//int cantRegistros;
		string idUsuario;
		string contrasenia;
	public:			//MÉTODOS
		//Constructor, getters y setters
		Calendario(string,string);	   //Este se emplearán para el registro
		string getIDUsuario();				//Estos se emplearán para el INGRESO
		string getContrasenia();			//Estos se emplearán para el INGRESO
		void buscarMes(string); //Pide año; pide mes como palabra
		void buscarMes(int);	//Pide mes como número
		void buscarFecha(int,int);	//int año, int mes, int día
		void buscarFecha(string,int);	//int año, string mes, int día
		void ingresarUsuario();
		void crearUsuario();
}; 

#endif
