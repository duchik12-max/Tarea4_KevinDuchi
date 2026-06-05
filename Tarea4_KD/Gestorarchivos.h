#pragma once

using namespace System;
using namespace System::IO;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;

namespace HospitalApp {

    public ref class GestorArchivos
    {
    public:
        // -------------------------------------------------------
        //  RUTAS DE ARCHIVOS
        // -------------------------------------------------------
        static String^ RutaHistorial =
            Path::Combine(Application::StartupPath, "historial.txt");
        static String^ RutaCitas =
            Path::Combine(Application::StartupPath, "citas.txt");
        static String^ RutaLaboratorio =
            Path::Combine(Application::StartupPath, "laboratorio.txt");

        static String^ SEPARADOR = "|";

        // -------------------------------------------------------
        //  ESCRITURA GENERICA
        // -------------------------------------------------------
        static bool EscribirLinea(String^ ruta, String^ linea)
        {
            try {
                StreamWriter^ sw = gcnew StreamWriter(ruta, true);
                sw->WriteLine(linea);
                sw->Close();
                return true;
            }
            catch (Exception^ ex) {
                MessageBox::Show(
                    "Error al escribir archivo:\n" + ex->Message,
                    "Error de archivo",
                    MessageBoxButtons::OK,
                    MessageBoxIcon::Error);
                return false;
            }
        }

        // -------------------------------------------------------
        //  LECTURA GENERICA
        // -------------------------------------------------------
        static List<String^>^ LeerLineas(String^ ruta)
        {
            List<String^>^ resultado = gcnew List<String^>();
            try {
                if (!File::Exists(ruta))
                    return resultado;

                StreamReader^ sr = gcnew StreamReader(ruta);
                String^ linea;
                while ((linea = sr->ReadLine()) != nullptr)
                {
                    if (!String::IsNullOrWhiteSpace(linea))
                        resultado->Add(linea);
                }
                sr->Close();
            }
            catch (Exception^ ex) {
                MessageBox::Show(
                    "Error al leer archivo:\n" + ex->Message,
                    "Error de archivo",
                    MessageBoxButtons::OK,
                    MessageBoxIcon::Error);
            }
            return resultado;
        }

        // -------------------------------------------------------
        //  HISTORIAL — formato: paciente|medico|tratamiento|indicaciones|fecha
        // -------------------------------------------------------

        static bool GuardarHistorial(String^ paciente,
            String^ medico,
            String^ tratamiento,
            String^ indicaciones,
            String^ fecha)
        {
            String^ linea = paciente + SEPARADOR +
                medico + SEPARADOR +
                tratamiento + SEPARADOR +
                indicaciones + SEPARADOR +
                fecha;
            return EscribirLinea(RutaHistorial, linea);
        }

        // Busca por paciente Y medico — usado en FormInforme
        static List<cli::array<String^>^>^ BuscarEnHistorial(String^ paciente,
            String^ medico)
        {
            List<cli::array<String^>^>^ encontrados =
                gcnew List<cli::array<String^>^>();

            List<String^>^ lineas = LeerLineas(RutaHistorial);

            for each (String ^ linea in lineas)
            {
                cli::array<String^>^ campos = linea->Split('|');
                if (campos->Length >= 5)
                {
                    bool coincidePaciente = campos[0]->ToLower()->Contains(
                        paciente->ToLower()->Trim());
                    bool coincideMedico = campos[1]->ToLower()->Contains(
                        medico->ToLower()->Trim());
                    if (coincidePaciente && coincideMedico)
                        encontrados->Add(campos);
                }
            }
            return encontrados;
        }

        // Busca solo por paciente — usado en FormTratamiento
        static cli::array<String^>^ BuscarHistorialPorPaciente(String^ paciente)
        {
            List<String^>^ lineas = LeerLineas(RutaHistorial);

            for each (String ^ linea in lineas)
            {
                cli::array<String^>^ campos = linea->Split('|');
                if (campos->Length >= 5)
                {
                    if (campos[0]->ToLower()->Contains(
                        paciente->ToLower()->Trim()))
                        return campos;
                }
            }
            return nullptr;
        }

        // -------------------------------------------------------
        //  CITAS — formato: nombre|doctor|fecha
        // -------------------------------------------------------
        static bool GuardarCita(String^ nombre,
            String^ doctor,
            String^ fecha)
        {
            String^ linea = nombre + SEPARADOR +
                doctor + SEPARADOR +
                fecha;
            return EscribirLinea(RutaCitas, linea);
        }

        // -------------------------------------------------------
        //  LABORATORIO — formato: analista|fecha|paciente|correo|tipoEstudio|internado
        // -------------------------------------------------------
        static bool GuardarLaboratorio(String^ analista,
            String^ fecha,
            String^ paciente,
            String^ correo,
            String^ tipoEstudio,
            bool    internado)
        {
            String^ estadoInternado = internado ? "SI" : "NO";
            String^ linea = analista + SEPARADOR +
                fecha + SEPARADOR +
                paciente + SEPARADOR +
                correo + SEPARADOR +
                tipoEstudio + SEPARADOR +
                estadoInternado;
            return EscribirLinea(RutaLaboratorio, linea);
        }

        // -------------------------------------------------------
        //  UTILIDAD
        // -------------------------------------------------------
        static bool ArchivoTieneDatos(String^ ruta)
        {
            return File::Exists(ruta) &&
                (gcnew FileInfo(ruta))->Length > 0;
        }
    };

}
