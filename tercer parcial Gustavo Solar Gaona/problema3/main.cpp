#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
	//vareables 
	int num1=0;
	int num2=0;
	
	//--------------------------------
	cout << "ingrese el primer numero" << endl;
	cin >> num1;
	cout << "ingrese segundo numero" << endl;
	cin >> num2;
	if (num1>num2){
		cout << "el numero mayor es: " << num1 << endl;
		cout << "el numero menor es: " << num2 << endl;
		cout << "el rango de valores es:" << endl;
		for (int i=num1; i>=num2; i--)
		{
			cout << i << endl; 
		}
	}
	else {
		cout << "el numero mayor es: " << num2 << endl;
		cout << "el numero menor es: " << num1 << endl;
		cout << "el rango de valores es:" << endl;
		for (int i=num2; i>=num1; i--)
		{
		cout << i << endl;	
		}
	}
	
	return 0;
}
