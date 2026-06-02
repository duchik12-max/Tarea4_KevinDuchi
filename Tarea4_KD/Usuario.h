#pragma once
#include <string>
using namespace std;
class Usuario
{
private:
	string usuario;
	string clave;
	string perfil;
public:
	Usuario();
	Usuario(string nusuario, string nclave, string nperfil);
	~Usuario();
	void setUsuario(string nusuario);
	void setClave(string nclave);
	void setPerfil(string nperfil);
	string getUsuario();
	string getClave();
	string getPerfil();
	bool verificarUsuario(string nusuario, string nclave);
};

