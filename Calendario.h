#ifndef CALENDARIO_H
#define CALENDARIO_H
using namespace std;


class Calendario
{
	private:		//ATRIBUTOS
		//int cantRegistros;
		string idUsuario;
		string contrasenia;
	public:			//M�TODOS
		//Constructor, getters y setters
		Calendario(string,string);	   //Este se emplear�n para el registro
		string getIDUsuario();				//Estos se emplear�n para el INGRESO
		string getContrasenia();			//Estos se emplear�n para el INGRESO
		void buscarMes(string); //Pide a�o; pide mes como palabra
		void buscarMes(int);	//Pide mes como n�mero
		void buscarFecha(int,int);	//int a�o, int mes, int d�a
		void buscarFecha(string,int);	//int a�o, string mes, int d�a
		void ingresarUsuario();
		void crearUsuario();
}; 

#endif
