#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
	//vareables
	int numero=0;
	
	cout << "ingrese un numero" << endl;
	cin >> numero;
	cout << "---------------------" << endl;
	
	if (numero>=0);
	{
		for (int n=numero; n>=0; n=n-2)
		{
			cout << n << endl;
		}
	}
	
	return 0;
}
