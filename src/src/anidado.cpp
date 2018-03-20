#include <iostream>
using namespace std;

int main()
{
	
	
	int ne;
	int i,j;
	int cal;
	float sum=0.0, promedio=0;


for(i=1; i<3; i++)
{
	for (j=1; j<3; j++)
	{
		cout << "Calificacion de materia " << j << ":";
		cin >> cal;
		sum += cal; 
	}
	
	promedio = sum/2;
	cout << "el promedio es: " << promedio << endl;
	sum=0;
}
	
	
	
return 0;	
}
