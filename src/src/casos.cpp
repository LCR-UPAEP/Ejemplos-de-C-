#include <iostream>
using namespace std;

int main()
{
	char letra = 'A';
	
	switch(letra)
	{
		case 'A':
		cout<<"Avanza"<<endl;
		break;
		
		case 'B':
		cout <<"Retrocede"<<endl;
		break;
		
	    case 'C':
		cout<<"Giro derecha"<<endl;
		break;
		
		case 'D':
		cout <<"Giro izquierda"<<endl;
		break;
		
		default:
		cout << "Tecla incorrecta"<<endl;	
		
	}
return 0;	
}
