#include <iostream>
using namespace std;

int main()
{
	int z;
	z = (sensor>30) ? sensor : -sensor;
	
	//Equivalente

/*     Este es un 
     comentario
     muy extenso */	
	
	if (sensor>30)
	{
		z = sensor; 
	}
	else
	{
		 z = -sensor;
	}

   
	
	return 0;
}
