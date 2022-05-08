#include "main.h"

int main()
{


	_CrtDumpMemoryLeaks();

	return 0;
}

int menu()
{
	int num;
	cout << "\n" << "1: Ordenar por num, 2: Ordenar por color, 3: Sugerir, 4: Poner, 5: Sig., 0: Fin >>>  ";
	cin >> num;
	while (num < 0 || num > 5)
	{
		cout << "EL VALOR QUE HA INTRODUCIDO ES INCORRECTO, VUELVA A INTENTARLO:";
		cin >> num;
	}
	return num;
}