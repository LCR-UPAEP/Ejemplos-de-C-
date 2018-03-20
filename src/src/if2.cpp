#include <iostream>
using namespace std;

int main()
{
	int sensor;
	cout <<"Ingrese la temperatura: "<<endl;
	cin >>sensor;
	
	if (sensor>30)
	{
		cout <<"Temperatura excedida"<<endl;
	}
	
	else if ((sensor <= 30) && (sensor>=20))
	{
		
		cout <<"Temperatura limite"<<endl;
		
	}
	
	else
	
	{
			
		cout <<"Temperatura menor a 20"<<endl;
	}
	
	
	
	return 0;
	}
