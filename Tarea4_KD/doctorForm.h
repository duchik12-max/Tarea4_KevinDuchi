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
	/// Resumen de doctorForm
	/// </summary>
	public ref class doctorForm : public System::Windows::Forms::Form
	{
	public:
		doctorForm(void)
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
		~doctorForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ btnReceta;
	private: System::Windows::Forms::TextBox^ txtDocIndica;


	private: System::Windows::Forms::TextBox^ txtDocTratam;

	private: System::Windows::Forms::TextBox^ textDocPaciente;
	private: System::Windows::Forms::TextBox^ txtDocDoctor;
	private: System::Windows::Forms::Label^ label5;

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(doctorForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->btnReceta = (gcnew System::Windows::Forms::Button());
			this->txtDocIndica = (gcnew System::Windows::Forms::TextBox());
			this->txtDocTratam = (gcnew System::Windows::Forms::TextBox());
			this->textDocPaciente = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtDocDoctor = (gcnew System::Windows::Forms::TextBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->txtDocDoctor);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->btnReceta);
			this->panel1->Controls->Add(this->txtDocIndica);
			this->panel1->Controls->Add(this->txtDocTratam);
			this->panel1->Controls->Add(this->textDocPaciente);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(589, 516);
			this->panel1->TabIndex = 0;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(425, 445);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(148, 58);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Volver";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &doctorForm::button2_Click);
			// 
			// btnReceta
			// 
			this->btnReceta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnReceta->Location = System::Drawing::Point(42, 445);
			this->btnReceta->Name = L"btnReceta";
			this->btnReceta->Size = System::Drawing::Size(113, 58);
			this->btnReceta->TabIndex = 9;
			this->btnReceta->Text = L"Guardar";
			this->btnReceta->UseVisualStyleBackColor = true;
			this->btnReceta->Click += gcnew System::EventHandler(this, &doctorForm::button1_Click);
			// 
			// txtDocIndica
			// 
			this->txtDocIndica->Location = System::Drawing::Point(42, 386);
			this->txtDocIndica->Name = L"txtDocIndica";
			this->txtDocIndica->Size = System::Drawing::Size(197, 22);
			this->txtDocIndica->TabIndex = 8;
			// 
			// txtDocTratam
			// 
			this->txtDocTratam->Location = System::Drawing::Point(42, 305);
			this->txtDocTratam->Name = L"txtDocTratam";
			this->txtDocTratam->Size = System::Drawing::Size(197, 22);
			this->txtDocTratam->TabIndex = 7;
			// 
			// textDocPaciente
			// 
			this->textDocPaciente->Location = System::Drawing::Point(42, 151);
			this->textDocPaciente->Name = L"textDocPaciente";
			this->textDocPaciente->Size = System::Drawing::Size(197, 22);
			this->textDocPaciente->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(39, 351);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(90, 18);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Indicaciones";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(39, 272);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(87, 18);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Tratamiento";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(39, 110);
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
			this->label1->Location = System::Drawing::Point(153, 76);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(210, 22);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Generación de Receta";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(415, 140);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(121, 139);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(3, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(551, 67);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(39, 186);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(54, 18);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Doctor";
			// 
			// txtDocDoctor
			// 
			this->txtDocDoctor->Location = System::Drawing::Point(42, 229);
			this->txtDocDoctor->Name = L"txtDocDoctor";
			this->txtDocDoctor->Size = System::Drawing::Size(197, 22);
			this->txtDocDoctor->TabIndex = 12;
			// 
			// doctorForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(633, 540);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"doctorForm";
			this->Text = L"doctorForm";
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
	// --- Validación de campos ---
	if (String::IsNullOrWhiteSpace(textDocPaciente->Text))
	{
		MessageBox::Show(
			"Ingresa el nombre del paciente.",
			"Campo requerido",
			MessageBoxButtons::OK,
			MessageBoxIcon::Warning);
		textDocPaciente->Focus();
		return;
	}

	if (String::IsNullOrWhiteSpace(txtDocDoctor->Text))
	{
		MessageBox::Show(
			"Ingresa el médico asignado.",
			"Campo requerido",
			MessageBoxButtons::OK,
			MessageBoxIcon::Warning);
		txtDocDoctor->Focus();
		return;
	}

	if (String::IsNullOrWhiteSpace(txtDocTratam->Text))
	{
		MessageBox::Show(
			"Ingresa el tratamiento.",
			"Campo requerido",
			MessageBoxButtons::OK,
			MessageBoxIcon::Warning);
		txtDocTratam->Focus();
		return;
	}

	if (String::IsNullOrWhiteSpace(txtDocIndica->Text))
	{
		MessageBox::Show(
			"Ingresa las indicaciones.",
			"Campo requerido",
			MessageBoxButtons::OK,
			MessageBoxIcon::Warning);
		txtDocIndica->Focus();
		return;
	}

	// --- Obtener fecha actual ---
	String^ fecha = DateTime::Today.ToString("dd/MM/yyyy");

	// --- Guardar en historial.txt ---
	bool guardado = HospitalApp::GestorArchivos::GuardarHistorial(
		textDocPaciente->Text->Trim(),
		txtDocDoctor->Text->Trim(),
		txtDocTratam->Text->Trim(),
		txtDocIndica->Text->Trim(),
		fecha
	);

	if (guardado)
	{
		MessageBox::Show(
			"Registro guardado exitosamente.\n\n"
			"Paciente:      " + textDocPaciente->Text->Trim() + "\n"
			"Médico:        " + txtDocDoctor->Text->Trim() + "\n"
			"Tratamiento:   " + txtDocTratam->Text->Trim() + "\n"
			"Indicaciones:  " + txtDocIndica->Text->Trim() + "\n"
			"Fecha:         " + fecha,
			"Guardado",
			MessageBoxButtons::OK,
			MessageBoxIcon::Information);

		// Limpiar campos para un nuevo registro
		textDocPaciente->Clear();
		txtDocDoctor->Clear();
		txtDocTratam->Clear();
		txtDocIndica->Clear();
		textDocPaciente->Focus();
	}
	MessageBox::Show("Datos guardados correctamente", "Mensaje", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
};
}
