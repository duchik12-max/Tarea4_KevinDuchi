#pragma once
#include "informeForm.h"
#include "asignacionForm.h"
#include "insumosForm.h"
namespace Tarea4KD {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de menuDirecForm
	/// </summary>
	public ref class menuDirecForm : public System::Windows::Forms::Form
	{
	public:
		menuDirecForm(void)
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
		~menuDirecForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ informeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ asignarPersonalToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ gestionarInsumosToolStripMenuItem;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(menuDirecForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->informeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->asignarPersonalToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gestionarInsumosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
				this->informeToolStripMenuItem,
					this->asignarPersonalToolStripMenuItem, this->gestionarInsumosToolStripMenuItem, this->salirToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(626, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// informeToolStripMenuItem
			// 
			this->informeToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"informeToolStripMenuItem.Image")));
			this->informeToolStripMenuItem->Name = L"informeToolStripMenuItem";
			this->informeToolStripMenuItem->Size = System::Drawing::Size(95, 24);
			this->informeToolStripMenuItem->Text = L"Informe";
			this->informeToolStripMenuItem->Click += gcnew System::EventHandler(this, &menuDirecForm::informeToolStripMenuItem_Click);
			// 
			// asignarPersonalToolStripMenuItem
			// 
			this->asignarPersonalToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"asignarPersonalToolStripMenuItem.Image")));
			this->asignarPersonalToolStripMenuItem->Name = L"asignarPersonalToolStripMenuItem";
			this->asignarPersonalToolStripMenuItem->Size = System::Drawing::Size(148, 24);
			this->asignarPersonalToolStripMenuItem->Text = L"AsignarPersonal";
			this->asignarPersonalToolStripMenuItem->Click += gcnew System::EventHandler(this, &menuDirecForm::asignarPersonalToolStripMenuItem_Click);
			// 
			// gestionarInsumosToolStripMenuItem
			// 
			this->gestionarInsumosToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gestionarInsumosToolStripMenuItem.Image")));
			this->gestionarInsumosToolStripMenuItem->Name = L"gestionarInsumosToolStripMenuItem";
			this->gestionarInsumosToolStripMenuItem->Size = System::Drawing::Size(164, 24);
			this->gestionarInsumosToolStripMenuItem->Text = L"Gestionar Insumos";
			this->gestionarInsumosToolStripMenuItem->Click += gcnew System::EventHandler(this, &menuDirecForm::gestionarInsumosToolStripMenuItem_Click);
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"salirToolStripMenuItem.Image")));
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(72, 24);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &menuDirecForm::salirToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(200, 297);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(278, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Bienvenido Director de Medicos";
			this->label1->Click += gcnew System::EventHandler(this, &menuDirecForm::label1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(123, 73);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(403, 192);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// menuDirecForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(626, 418);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"menuDirecForm";
			this->Text = L"menuDirecForm";
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
		this -> Close();
	}
private: System::Void informeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	informeForm^ informe1 = gcnew informeForm();
	informe1->Show();

}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void asignarPersonalToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	asignacionForm^ asig1 = gcnew asignacionForm();
	asig1->Show();
}
private: System::Void gestionarInsumosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	insumosForm^ insumos1 = gcnew insumosForm();
	insumos1->Show();
}
};
}
