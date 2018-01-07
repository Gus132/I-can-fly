#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) 
{
	//vareables
	string nombre="", opc="";
	int calificacion=0;
	
	//----------------------------------------------
	do{
	cout << "ingrese el nombre del alumno" << endl;
	cin >> nombre;
	do{
		 cout << "ingrese su calificacion" << endl;
	cin >> calificacion;
	}
	while (calificacion>=11 || calificacion<=-1);
	if (calificacion>=9)
	{
		cout << "el alumno es bueno" << endl;
	}
	else
	{
		if(calificacion>=7)
		{
			cout << "el alumno es regular" << endl;
		}
		else
		{
			if(calificacion>=0)
			{
				cout << "el alumno es malo" << endl;
			}
		}
	}
	cout << "Desea continuar?\n a)si\n b)no\n " << endl;
	cin >> opc;	
	}
	while (opc=="a");
	

	
	
	return 0;
}
