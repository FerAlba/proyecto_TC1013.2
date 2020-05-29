#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "Calendario.h"
using namespace std;

int menu(option)
{
		switch (option) {
			case 1:	
				crearUsuario();
				return 1;
			case 0:
				intregarUsuario();
				return 2
			}
}
int main()
{
	int option;
	
	system ("color B0");
	cout<<"\n \n \n"<<endl;
	cout<<"\t \t \t AGENDA 2020"<<endl;
	cout<<"\n \n "<<endl;
	cout<<"\n \n 1) INGRESAR \n \n 2) CREAR CUENTA"<<endl;
	cout<<"Elige una opción: "<<endl;
	cin>>option;
}
