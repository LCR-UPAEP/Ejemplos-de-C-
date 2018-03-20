#include <iostream>

using namespace std;

class Auto

{
	public:
	int precio;
	
	void Mostrar()
	{
		cout << " El precio del carro es : "<<precio<<endl;
	}
	
	
};

int main()
{
	
	
Auto Auto1;
Auto1.precio = 150000;
Auto1.Mostrar();


Auto *Auto2;
Auto2 = &Auto1;
Auto2->precio = 250000;
Auto2->Mostrar();

//(*Auto2).Mostrar();

return 0;
	
}

