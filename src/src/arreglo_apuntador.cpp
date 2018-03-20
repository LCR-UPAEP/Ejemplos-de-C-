#include <iostream>
#include <stdlib.h> //Se utiliza para la indstruccion new

using namespace std;

int main()
{
	
	int num_lecturas, *p_nl;
	int i;
	
	cout << "Ingrese el numero de lecturas: "<< endl;
	cin >> num_lecturas;
	
	p_nl =  new int[num_lecturas];
	
	//Adquisicion de datos
	for (i=0; i<num_lecturas; i++)
	{
		cout<<"Registre la informacion del sensor: "<<endl;
		cin >> p_nl[i];
	}
	
	//Impresion de datos
	for (i=0; i<num_lecturas; i++)
	{
		cout << p_nl[i]<<endl;
	}
	
	delete[] p_nl;
	
	
	
	
	return 0;
}
