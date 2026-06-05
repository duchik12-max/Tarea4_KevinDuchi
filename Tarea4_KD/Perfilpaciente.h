#pragma once
#include "Usuario.h"

using namespace System;
using namespace System::Windows::Forms;

namespace HospitalApp {

    public ref class PerfilPaciente : public Usuario
    {
    private:
        String^ _idPaciente;
        DateTime _fechaIngreso;

    public:
        PerfilPaciente(String^ nombre, String^ idPaciente, DateTime fechaIngreso)
            : Usuario(nombre, TipoPerfil::Paciente)
        {
            _idPaciente = idPaciente;
            _fechaIngreso = fechaIngreso;
        }

        // Constructor minimo: solo nombre
        PerfilPaciente(String^ nombre)
            : Usuario(nombre, TipoPerfil::Paciente)
        {
            _idPaciente = "PAC-000";
            _fechaIngreso = DateTime::Today;
        }

        property String^ IdPaciente {
            String^ get() { return _idPaciente; }
            void    set(String^ v) { _idPaciente = v; }
        }

        property DateTime FechaIngreso {
            DateTime get() { return _fechaIngreso; }
            void     set(DateTime v) { _fechaIngreso = v; }
        }

        property String^ FechaIngresoTexto {
            String^ get() { return _fechaIngreso.ToString("dd/MM/yyyy"); }
        }

        virtual void AbrirMenu() override
        {
            // FormMenuPaciente^ menu = gcnew FormMenuPaciente(this);
            // menu->Show();
        }

        virtual String^ ObtenerDescripcionPerfil() override
        {
            return "Paciente - ID: " + _idPaciente +
                " | Ingreso: " + FechaIngresoTexto;
        }
    };

}