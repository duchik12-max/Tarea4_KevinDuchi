#pragma once
#include "citaForm.h"
#include "tratamientoForm.h"
#include "historiaForm.h"
namespace Tarea4KD {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de menuPacienForm
	/// </summary>
	public ref class menuPacienForm : public System::Windows::Forms::Form
	{
	public:
		menuPacienForm(void)
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
		~menuPacienForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ historiaClinicaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ tratamientoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ agendarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(menuPacienForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->historiaClinicaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tratamientoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->agendarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->historiaClinicaToolStripMenuItem,
					this->tratamientoToolStripMenuItem, this->agendarToolStripMenuItem, this->salirToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(581, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// historiaClinicaToolStripMenuItem
			// 
			this->historiaClinicaToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"historiaClinicaToolStripMenuItem.Image")));
			this->historiaClinicaToolStripMenuItem->Name = L"historiaClinicaToolStripMenuItem";
			this->historiaClinicaToolStripMenuItem->Size = System::Drawing::Size(143, 24);
			this->historiaClinicaToolStripMenuItem->Text = L"Historia Clinica";
			this->historiaClinicaToolStripMenuItem->Click += gcnew System::EventHandler(this, &menuPacienForm::historiaClinicaToolStripMenuItem_Click);
			// 
			// tratamientoToolStripMenuItem
			// 
			this->tratamientoToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tratamientoToolStripMenuItem.Image")));
			this->tratamientoToolStripMenuItem->Name = L"tratamientoToolStripMenuItem";
			this->tratamientoToolStripMenuItem->Size = System::Drawing::Size(123, 24);
			this->tratamientoToolStripMenuItem->Text = L"Tratamiento";
			this->tratamientoToolStripMenuItem->Click += gcnew System::EventHandler(this, &menuPacienForm::tratamientoToolStripMenuItem_Click);
			// 
			// agendarToolStripMenuItem
			// 
			this->agendarToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"agendarToolStripMenuItem.Image")));
			this->agendarToolStripMenuItem->Name = L"agendarToolStripMenuItem";
			this->agendarToolStripMenuItem->Size = System::Drawing::Size(100, 24);
			this->agendarToolStripMenuItem->Text = L"Agendar";
			this->agendarToolStripMenuItem->Click += gcnew System::EventHandler(this, &menuPacienForm::agendarToolStripMenuItem_Click);
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"salirToolStripMenuItem.Image")));
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(72, 24);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &menuPacienForm::salirToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(226, 300);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(180, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Bienvenido Paciente";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(110, 76);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(380, 191);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// menuPacienForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(581, 433);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"menuPacienForm";
			this->Text = L"menuPacienForm";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Saliendo del menu", "Salida", MessageBoxButtons::OK, MessageBoxIcon::Information);
		this->Close();
	}
private: System::Void historiaClinicaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	historiaForm^ historia1 = gcnew historiaForm();
	historia1->Show();
}
private: System::Void tratamientoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	tratamientoForm^ tratamiento1 = gcnew tratamientoForm();
	tratamiento1->Show();
}
private: System::Void agendarToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	citaForm^ cita1 = gcnew citaForm();
	cita1->Show();
}
};
}
