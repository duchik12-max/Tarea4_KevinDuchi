#pragma once
#include <string>
using namespace std;
class Usuario1
{
private:
	string usuario;
	string clave;
	string perfil;
public:
	Usuario1();
	Usuario1(string nusuario, string nclave, string nperfil);
	~Usuario1();
	void setUsuario(string nusuario);
	void setClave(string nclave);
	void setPerfil(string nperfil);
	string getUsuario();
	string getClave();
	string getPerfil();
	bool verificarUsuario(string nusuario, string nclave);
};

