#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
	// vareables
	int num=0;
	
	//-------------------------------------------
	do{
	cout << "ingrese un numero que no sea par" << endl;	
	cin >> num;
	}
	while (num%2==0);
	if(num>0){
		cout << "numero positivo" << endl;
	}
	else{
        cout << "numero negativo" << endl;
	}
	
	
	return 0;
}
