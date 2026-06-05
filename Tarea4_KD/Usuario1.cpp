#include "Usuario1.h"
#include <iostream>
Usuario1::Usuario1()
{
	usuario = "";
	clave = "";
	perfil = "";
}
Usuario1::Usuario1(string nusuario, string nclave, string nperfil)
{
	this->setUsuario(nusuario);
	this->setClave(nclave);
	this->setPerfil(nperfil);
}
Usuario1::~Usuario1()
{
}
//set get
void Usuario1::setUsuario(string nusuario)
{
	this->usuario = nusuario;
}
void Usuario1::setClave(string nclave)
{
	this->clave = nclave;
}
void Usuario1::setPerfil(string nperfil)
{
	this->perfil = nperfil;
}
string Usuario1::getUsuario()
{
	return this->usuario;
}
string Usuario1::getClave()
{
	return this->clave;
}
string Usuario1::getPerfil()
{
	return this->perfil;
}
//metodo
bool Usuario1::verificarUsuario(string nusuario, string ncalve)
{
	bool result = false;
	if (nusuario == this->getUsuario() && ncalve == this->getClave())
	{
		result = true;
	}
	return result;
}
