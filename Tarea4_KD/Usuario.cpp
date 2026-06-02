#include "Usuario.h"
#include <iostream>
Usuario::Usuario()
{
	usuario = "";
	clave = "";
	perfil = "";
}
Usuario::Usuario(string nusuario, string nclave, string nperfil)
{
	this->setUsuario(nusuario);
	this->setClave(nclave);
	this->setPerfil(nperfil);
}
Usuario::~Usuario()
{
}
//set get
void Usuario::setUsuario(string nusuario)
{
	this->usuario = nusuario;
}
void Usuario::setClave(string nclave)
{
	this->clave = nclave;
}
void Usuario::setPerfil(string nperfil)
{
	this->perfil = nperfil;
}
string Usuario::getUsuario()
{
	return this->usuario;
}
string Usuario::getClave()
{
	return this->clave;
}
string Usuario::getPerfil()
{
	return this->perfil;
}
//metodo
bool Usuario::verificarUsuario(string nusuario, string ncalve)
{
	bool result = false;
	if (nusuario == this->getUsuario() && ncalve == this->getClave())
	{
		result = true;
	}
	return result;
}
