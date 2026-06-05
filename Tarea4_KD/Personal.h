#pragma once
#include "Usuario.h"

using namespace System;
using namespace System::Windows::Forms;

namespace HospitalApp {

    public ref class Personal : public Usuario
    {
    private:
        String^ _especialidad;
        String^ _turno;

    public:
        Personal(String^ nombre, String^ especialidad, String^ turno)
            : Usuario(nombre, TipoPerfil::Personal)
        {
            _especialidad = especialidad;
            _turno = turno;
        }

        // Constructor minimo: solo nombre
        Personal(String^ nombre)
            : Usuario(nombre, TipoPerfil::Personal)
        {
            _especialidad = "General";
            _turno = "Manana";
        }

        property String^ Especialidad {
            String^ get() { return _especialidad; }
            void    set(String^ v) { _especialidad = v; }
        }

        property String^ Turno {
            String^ get() { return _turno; }
            void    set(String^ v) { _turno = v; }
        }

        virtual void AbrirMenu() override
        {
            // FormMenuPersonal^ menu = gcnew FormMenuPersonal(this);
            // menu->Show();
        }

        virtual String^ ObtenerDescripcionPerfil() override
        {
            return "Personal - " + _especialidad + " | Turno: " + _turno;
        }
    };

}