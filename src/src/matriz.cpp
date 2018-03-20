#include <iostream>
using namespace std;

int i,j;
int renglon, columna;

int main()
{
	cout << "Ingrese el numero de renglones: "<<endl;
	cin >> renglon;
		cout << "Ingrese el numero de columnas: "<<endl;
	cin >> columna;
	
	int matriz[renglon][columna];
	
	for (i=0; i<renglon; i++){
		
		for (j=0; j<columna; j++)
		{
			cout<<"Ingrese valor de matriz en posicion: "<<i<<","<<j<<endl;
			cin>>matriz[i][j];
		}
		
	}
	
	cout <<"\n"<<endl;
	
	for (i=0; i<renglon; i++){
		
		for (j=0; j<columna; j++)
		{
			cout<<matriz[i][j];
		}
			cout <<"\n"<<endl;

		
	}
	
	
return 0;	
	
}
