#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
	//vareables
	int num=0;
	int cuadrado=0;
	int x=0;
	
	//-------------------------------------------------
	do{
		do{
		cout << "ingrese un numero" << endl;
	    cin >> num;
	    if (num>=0)
		{
	    	x=num*num;
	    	cout << x << endl;
		}
		else 
		{
		   cout << "ingrese un numero valido" << endl;	
		}		
		}
		while (num<=0);
	    
	} 
	while (num>=0);
	
	
	return 0;
}
