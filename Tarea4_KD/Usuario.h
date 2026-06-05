#pragma once
#include "TipoPerfil.h"

//  Esta clase solo transporta el nombre y perfil del usuario
//  autenticado hacia los formularios de menu y pantallas.

using namespace System;

namespace HospitalApp {

    public ref class Usuario
    {
        // -------------------------------------------------------
        //  ATRIBUTOS PRIVADOS
        // -------------------------------------------------------
    private:
        String^ _nombre;
        TipoPerfil _perfil;

        // -------------------------------------------------------
        //  CONSTRUCTORES
        // -------------------------------------------------------
    public:
        Usuario(String^ nombre, TipoPerfil perfil)
        {
            _nombre = nombre;
            _perfil = perfil;
        }

        Usuario()
        {
            _nombre = "";
            _perfil = TipoPerfil::Ninguno;
        }

        // -------------------------------------------------------
        //  PROPIEDADES
        // -------------------------------------------------------
        property String^ Nombre {
            String^ get() { return _nombre; }
            void    set(String^ valor) {
                if (!String::IsNullOrWhiteSpace(valor))
                    _nombre = valor->Trim();
            }
        }

        property TipoPerfil Perfil {
            TipoPerfil get() { return _perfil; }
        }

        // -------------------------------------------------------
        //  METODOS
        // -------------------------------------------------------
        virtual String^ ObtenerDescripcionPerfil()
        {
            switch (_perfil)
            {
            case TipoPerfil::Director: return "Director";
            case TipoPerfil::Paciente: return "Paciente";
            case TipoPerfil::Personal: return "Personal";
            default:                   return "Sin perfil";
            }
        }

        // Metodo virtual: cada subclase abre su propio menu.
        // Concepto POO: POLIMORFISMO
        virtual void AbrirMenu() {}
    };

}