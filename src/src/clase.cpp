#include <iostream>
#include <string>

using namespace std;

class Auto 
{
	public:
	string Marca;
	string Modelo;
	float precio;
	
	float obtener_precio(void);	
	
};

float Auto::obtener_precio(void)
{	
	return precio*1.16;
}

int main()
{

Auto Auto1;
Auto Auto2;
float precio_iva;

Auto1.Marca = "Honda";
Auto1.Modelo = "Civic";
Auto1.precio = 150000;

Auto2.Marca = "Audi";
Auto2.Modelo = "A4";
Auto2.precio = 1500000;

precio_iva =  Auto1.precio*1.16;

cout << " El precio con iva del Auto 1 es: " <<precio_iva<<endl;


return 0;	
}

