#include "Persona.cpp"
#include <iostream>
using namespace std;
class Empleado : Persona{
	// atributos
	private : string codigo,salario;
	// constructor
	public : 
				Empleado(){
				}
				Empleado(string nom,string ape,string dir,int tel,string c,string s) : Persona(nom,ape,dir,tel) {
					codigo = c;
					salario = s;
				}
	//metodos
//set (modificar)
	void setCodigo(string c){codigo = c;}
	void setSalario(string s){salario = s;}
	void setNombres(string nom){nombres = nom;}
	void setApellidos(string ape){apellidos = ape;}
	void setDireccion(string dir){direccion = dir;}
	void setTelefono(int tel){telefono = tel;}
	//get (mostrar)
	string getCodigo(){return codigo;}
	string getSalario(){return salario;}
	string getNombres(){return nombres;}
	string getApellidos(){return apellidos;}
	string getDireccion(){return direccion;}
	int getTelefono(){return telefono;}
	
	void mostrar(){
		cout<<endl;
		cout<<"_____________________Datos del Empleado_________________"<<endl;
		cout<<codigo<<"  |  "<<nombres<<"  |  "<<apellidos<<"  |  "<<direccion<<"  |  "<<telefono<<"  |  "<<salario<<"  |  "<<endl;
		cout<<"________________________________________________________"<<endl;
	}
};
