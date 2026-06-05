#pragma once
#include "Usuario.h"

using namespace System;
using namespace System::Windows::Forms;

namespace HospitalApp {

    public ref class Director : public Usuario
    {
    private:
        String^ _area;
        String^ _cargo;

    public:
        Director(String^ nombre, String^ area, String^ cargo)
            : Usuario(nombre, TipoPerfil::Director)
        {
            _area = area;
            _cargo = cargo;
        }

        // Constructor minimo: solo nombre
        Director(String^ nombre)
            : Usuario(nombre, TipoPerfil::Director)
        {
            _area = "General";
            _cargo = "Director General";
        }

        property String^ Area {
            String^ get() { return _area; }
            void    set(String^ v) { _area = v; }
        }

        property String^ Cargo {
            String^ get() { return _cargo; }
            void    set(String^ v) { _cargo = v; }
        }

        virtual void AbrirMenu() override
        {
            // FormMenuDirector^ menu = gcnew FormMenuDirector(this);
            // menu->Show();
        }

        virtual String^ ObtenerDescripcionPerfil() override
        {
            return "Director - " + _cargo + " (" + _area + ")";
        }
    };

}