#include <iostream>
using namespace std;


	int vector[] = {5, 0, 1};
	int i, resultado=0;
	

int main()
{
	for(i=0; i<=2; i++)
	{
		//resultado = resultado + vector[i];
		resultado += vector[i];
	}

  cout << "La suma de mis valores es :"<<resultado<<endl;

return 0;
}
