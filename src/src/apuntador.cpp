#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
	int num1, num2;
	int *ptr1, *ptr2;
	
	num1=5;
	num2=10;
	
	ptr1 = &num1;
	ptr2 = &num2;
	
	cout<<"El valor de num1 es: "<<num1<<endl;
	
	cout<<"El valor de num2 es: "<<num2<<endl;
	
	
	cout<<"El valor de ptr1 es: "<<ptr1<<endl;
	
	cout<<"El valor de ptr2 es: "<<ptr2<<endl;
	

	
	
	return 0;
}
