#include <iostream>
using namespace std;

int main()
{
	
	int a = 10;
	
	ETIQUETA:do{
		
		if (a==15)
		{
			a = a+1;
			goto ETIQUETA;
		}
		
		
		
	}
	
	while (a <20);
	
	return(0);
}
