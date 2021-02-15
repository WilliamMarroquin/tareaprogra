//main
#include "Empleado.cpp"
#include <iostream>
using namespace std;
main(){
	string nombres,apellidos,direccion,salario;

	int telefono;
	cout<<"-----------------Ingrese Datos del Empleado-----------------"<<endl;
	cout<<"Ingrese Nombres: ";
	cin>>nombres;
	cout<<"Ingrese Apellidos: ";
	cin>>apellidos;
	cout<<"Ingrese Numero De Telefono: ";
	cin>>telefono;
	cout<<"Ingrese Puesto: ";
	cin>>direccion;
	cout<<"Ingrese Salario: ";
	cin>>salario;
	cout<<"------------------------------------------------------------"<<endl;
	// instanciar
	
	Empleado obj = Empleado(nombres,apellidos,direccion,telefono,salario);
	obj.mostrar();
	

}
