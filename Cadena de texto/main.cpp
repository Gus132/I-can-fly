#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) 
{
	//area de declaracion de vcariables 
	string nombre="", grupo="", Lic="", Fecha="";
    
    cout<<"Ingresa tu nombre"<<endl;
    cin>>nombre;

    cout<<"Ingresa tu grupo"<<endl;
    cin>>grupo;	

    cout<<"Ingresa tu Licenciatura"<<endl;
    cin>>Lic;

    cout<<"Ingresa la fecha"<<endl;	
    cin>>Fecha;

    cout << "Bienvenido al examen " << nombre << " del grupo " << grupo << ". Licenciatura en " << Lic << " con fecha " << Fecha << endl;

    //declaracion de variables 
    string a, b, c, d;
    string A, B, C, D;
    int calificacion=0;
    int incorrectas=0;
    int correctas=0;
    string respuesta="";
    
    //do{
    cout << "1- Cual es la sentencia de salida en Dev C++?" << endl;
	cout << " a)Switch\n b)cin\n c)cout\n d)For\n " << endl; 
	
	cin >> respuesta;	
	//}
    //while ( respuesta== "c", respuesta=="b", respuesta=="a", respuesta=="d" || respuesta=="A", respuesta=="B", respuesta=="C", respuesta=="D");	
	if (respuesta=="c" || respuesta=="C"){
		cout<<"La respuesta es correcta"<<endl;
		calificacion+=2;
		correctas+=1;
	}
	else {
        cout << "La respuesta es incorrecta" << endl;
		incorrectas+=1;	
	}
    

    cout << "2- Que es programacion?" << endl;
    cout << " a)Se usa para resolver un problema\n b)Un conjunto de programas\n c)Secuencia de operaciones en un determinado orden\n d)diseñar, depurar, codificar y mantener un codigo\n" << endl;
    cin>>respuesta;
 
    if(respuesta=="d"){
    	cout << "la respuesta es correcta" <<endl;
    	calificacion+=2;
    	correctas+=1;
	} 
    else{
    	cout <<"La respuesta es incorrecta" << endl;
    	incorrectas+=1;
	}
   


    cout<<"3- Cual es la sentencia de entrada en Dev C++" << endl;
    cout << " a)cin\n b)cout\n c)swish\n d)For\n" << endl;
    cin>>respuesta;
    
    if (respuesta=="a"){
        cout<<"la respuesta es correcta"<<endl;
		calificacion+=2;
		correctas+=1; 	
	}
    
    else{
    	cout << "La respuesta es incorrecta" << endl;
    	incorrectas+=1;
	}
   


    cout << "4.- Que es Dev C++" << endl;
    cout << " a)Juguete\n b)compilador\n c)un programa\n d)no lo se\n " << endl;
    cin>>respuesta;
    
    if(respuesta=="b"){
    	cout<<"la respuesta es correcta"<<endl;
    	calificacion+=2;
    	correctas+=1;
	}
    
    else{
    	cout<<"La respuesta es incorrecta"<<endl;
    	incorrectas+=1;
	}
     


cout<<"5- Cuantos tipos de condicion hay?"<<endl;
    cout << " a)5\n b)3\n c)1\n d)2\n" << endl;
    cin>>respuesta;
    
    if(respuesta=="d"){
    	cout<<"la respuesta es correcta"<<endl;
    	calificacion+=2;
    	correctas+=1;
	}
    
    else{
        cout<<"La respuesta es incorrecta"<<endl;
		incorrectas+=1;	
	}
    
    cout << "Num de respuestas correctas " << correctas << endl;
    cout << "la calificacion es " << calificacion << endl;
    cout << "respuestas incorrectas " << incorrectas << endl;
	
	
	return 0;
}
