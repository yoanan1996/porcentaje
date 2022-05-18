#include <iostream>


using namespace std;

void funcion(float n, float *por){
	
	cout<< "Ingrese la cantidad: ";
	cin>>n;
	
	if(n >= 10000){
		*por = n*(((float)25) / ((float)100));
	}else{
		
		*por = n*(((float)10) / ((float)100));
	}
	
	
}

int main ()
{
	float n = 0, por = 0;
	
	cout <<"\n" <<endl;
	funcion(n, &por);
	cout <<"La Cantidad es:" <<por <<endl;
	
}
