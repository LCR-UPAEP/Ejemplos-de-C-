#include <iostream>
#include <cmath>

using namespace std;

float f_resultante(int, int);

int main()
{
	int vx, vy;
	float resultante;
	
	cout<<"Ingrese los valores de x, y: ";
	cin >> vx >> vy;
	
	resultante = f_resultante(vx, vy);
	
	cout<<"La resultante es: " << resultante;
	
	return 0;
}


float f_resultante(int a, int b)
{
	float calculo;
	calculo =  (sqrt((a*a)+(b*b)));
	
	return calculo;
	
}
