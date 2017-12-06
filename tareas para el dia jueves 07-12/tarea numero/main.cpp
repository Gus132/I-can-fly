#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
	//vareables 
	int numero=0; 
	int i=0;
	
	cout << "ingresa un numero" << endl;
	cin >> numero;
	if ( numero>=0);
	{
		for( i=numero-1; i>=0; i--)
		{
			cout << "restante " << i << endl;
		}
	}
	
	return 0;
}
