#include <iostream>
#include "Cliente.cpp"

using namespace std;

main(){
	string nit,nombres,apellidos,direccion;
	int telefono;
	
	cout<<"Ingresar nit:";
	cin>> nit;
	cout<<"Ingresar nombres:";
	cin>> nombres;
	cout<<"Ingresar apellidos:";
	cin>> apellidos;
	cout<<"Ingresar direccion:";
	cin>> direccion;
	cout<<"Ingresar telefono:";
	cin>> telefono;
	
	//instancia de un ibjeto
	Cliente obj = Cliente(nombres,apellidos,direccion,telefono,nit);
	obj.mostrar();	
	
	cout<<"Ingresar nit:";
	cin>> nit;
	obj.setnit(nit);
	obj.mostrar();
	
	cout<<obj.getnit();
	
	/*Cliente obj = Cliente();
	obj.setnit(nit);
	obj.setnombres(nombres);
	obj.setapellidos(apellidos);
	obj.setdireccion(direccion);
	obj.settelefono(telefono);
	
	obj.mostrar();*/
}
