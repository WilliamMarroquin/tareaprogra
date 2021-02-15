#include "Persona.cpp"
#include <iostream>
using namespace std;
class Empleado : Persona{
	// atributos
	private : string salario;
	// constructor
	public : 
				Empleado(){
				}
				Empleado(string nom,string ape,string dir,int tel,string s) : Persona(nom,ape,dir,tel) {
					salario = s;
				}
	//metodos
//set (modificar)
	void setSalario(string s){salario = s;}
	void setNombres(string nom){nombres = nom;}
	void setApellidos(string ape){apellidos = ape;}
	void setDireccion(string dir){direccion = dir;}
	void setTelefono(int tel){telefono = tel;}
	//get (mostrar)
	string getSalario(){return salario;}
	string getNombres(){return nombres;}
	string getApellidos(){return apellidos;}
	string getDireccion(){return direccion;}
	int getTelefono(){return telefono;}
	
	void mostrar(){
		cout<<endl;
		cout<<"_________________Datos del Empleado_________________"<<endl;
		cout<<nombres<<"  |  "<<apellidos<<"  |  "<<direccion<<"  |  "<<telefono<<"  |  "<<salario<<"  |  "<<endl;
		cout<<"____________________________________________________"<<endl;
	}
};
