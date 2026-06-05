#pragma once
#include "GestorArchivos.h"
namespace Tarea4KD {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de tratamientoForm
	/// </summary>
	public ref class tratamientoForm : public System::Windows::Forms::Form
	{
	public:
		tratamientoForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~tratamientoForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ txtTratFecha;
	protected:

	private: System::Windows::Forms::TextBox^ txtTratDoctor;

	private: System::Windows::Forms::TextBox^ txtTratPaciente;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(tratamientoForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->txtTratFecha = (gcnew System::Windows::Forms::TextBox());
			this->txtTratDoctor = (gcnew System::Windows::Forms::TextBox());
			this->txtTratPaciente = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->txtTratFecha);
			this->panel1->Controls->Add(this->txtTratDoctor);
			this->panel1->Controls->Add(this->txtTratPaciente);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(570, 440);
			this->panel1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(37, 367);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(158, 46);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Ver Tratamiento";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &tratamientoForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(398, 367);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(130, 46);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Volver";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &tratamientoForm::button2_Click);
			// 
			// txtTratFecha
			// 
			this->txtTratFecha->Location = System::Drawing::Point(37, 296);
			this->txtTratFecha->Name = L"txtTratFecha";
			this->txtTratFecha->Size = System::Drawing::Size(214, 22);
			this->txtTratFecha->TabIndex = 8;
			// 
			// txtTratDoctor
			// 
			this->txtTratDoctor->Location = System::Drawing::Point(37, 222);
			this->txtTratDoctor->Name = L"txtTratDoctor";
			this->txtTratDoctor->Size = System::Drawing::Size(214, 22);
			this->txtTratDoctor->TabIndex = 7;
			// 
			// txtTratPaciente
			// 
			this->txtTratPaciente->Location = System::Drawing::Point(37, 147);
			this->txtTratPaciente->Name = L"txtTratPaciente";
			this->txtTratPaciente->Size = System::Drawing::Size(214, 22);
			this->txtTratPaciente->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(34, 261);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(129, 18);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Fecha de consulta";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(34, 190);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(108, 18);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Doctor a cargo";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(34, 126);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 18);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Paciente";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(200, 79);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(186, 22);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Tratamiento Médico";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(389, 140);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(139, 164);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(3, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(563, 73);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// tratamientoForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::PaleTurquoise;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(598, 464);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"tratamientoForm";
			this->Text = L"tratamientoForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Volviendo al menu", "Mensaje", MessageBoxButtons::OK, MessageBoxIcon::Information);
		this->Close();
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Obteniendo información del tratamiento", "Mensaje", MessageBoxButtons::OK, MessageBoxIcon::Information);
	// --- Validación de campos ---
	if (String::IsNullOrWhiteSpace(txtTratPaciente->Text))
	{
		MessageBox::Show(
			"Ingresa el nombre del paciente.",
			"Campo requerido",
			MessageBoxButtons::OK,
			MessageBoxIcon::Warning);
		txtTratPaciente->Focus();
		return;
	}

	if (String::IsNullOrWhiteSpace(txtTratDoctor->Text))
	{
		MessageBox::Show(
			"Ingresa el médico a cargo.",
			"Campo requerido",
			MessageBoxButtons::OK,
			MessageBoxIcon::Warning);
		txtTratDoctor->Focus();
		return;
	}

	if (String::IsNullOrWhiteSpace(txtTratFecha->Text))
	{
		MessageBox::Show(
			"Ingresa la fecha.",
			"Campo requerido",
			MessageBoxButtons::OK,
			MessageBoxIcon::Warning);
		txtTratFecha->Focus();
		return;
	}

	// --- Verificar que el archivo existe y tiene datos ---
	if (!HospitalApp::GestorArchivos::ArchivoTieneDatos(
		HospitalApp::GestorArchivos::RutaHistorial))
	{
		MessageBox::Show(
			"No hay registros en el historial.\n"
			"Registra primero un paciente desde el perfil Personal.",
			"Archivo vacío",
			MessageBoxButtons::OK,
			MessageBoxIcon::Information);
		return;
	}

	// --- Buscar en historial.txt por nombre de paciente ---
	cli::array<String^>^ resultado =
		HospitalApp::GestorArchivos::BuscarHistorialPorPaciente(
			txtTratPaciente->Text);

	if (resultado == nullptr)
	{
		MessageBox::Show(
			"No se encontró tratamiento para el paciente:\n"
			"\"" + txtTratPaciente->Text->Trim() + "\"",
			"Sin resultados",
			MessageBoxButtons::OK,
			MessageBoxIcon::Information);
		return;
	}

	// --- Verificar que el médico también coincida ---
	bool coincideMedico = resultado[1]->ToLower()->Contains(
		txtTratDoctor->Text->Trim()->ToLower());

	if (!coincideMedico)
	{
		MessageBox::Show(
			"Se encontró el paciente pero el médico no coincide.\n\n"
			"Médico registrado: " + resultado[1],
			"Médico no coincide",
			MessageBoxButtons::OK,
			MessageBoxIcon::Warning);
		return;
	}

	// --- Mostrar resultado ---
	MessageBox::Show(
		"Tratamiento encontrado:\n\n"
		"Paciente:      " + resultado[0] + "\n"
		"Médico:        " + resultado[1] + "\n"
		"Tratamiento:   " + resultado[2] + "\n"
		"Indicaciones:  " + resultado[3] + "\n"
		"Fecha:         " + resultado[4],
		"Tratamiento",
		MessageBoxButtons::OK,
		MessageBoxIcon::Information);
}
};
}
