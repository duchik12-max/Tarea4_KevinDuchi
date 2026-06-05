#pragma once
#include "doctorForm.h"
#include "boticarioForm.h"
#include "laboratorioForm.h"
namespace Tarea4KD {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de menuPersoForm
	/// </summary>
	public ref class menuPersoForm : public System::Windows::Forms::Form
	{
	public:
		menuPersoForm(void)
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
		~menuPersoForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ doctorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ boticarioToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ laboratorioToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(menuPersoForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->doctorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->boticarioToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->laboratorioToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->doctorToolStripMenuItem,
					this->boticarioToolStripMenuItem, this->laboratorioToolStripMenuItem, this->salirToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(856, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// doctorToolStripMenuItem
			// 
			this->doctorToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"doctorToolStripMenuItem.Image")));
			this->doctorToolStripMenuItem->Name = L"doctorToolStripMenuItem";
			this->doctorToolStripMenuItem->Size = System::Drawing::Size(89, 24);
			this->doctorToolStripMenuItem->Text = L"Doctor";
			this->doctorToolStripMenuItem->Click += gcnew System::EventHandler(this, &menuPersoForm::doctorToolStripMenuItem_Click);
			// 
			// boticarioToolStripMenuItem
			// 
			this->boticarioToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"boticarioToolStripMenuItem.Image")));
			this->boticarioToolStripMenuItem->Name = L"boticarioToolStripMenuItem";
			this->boticarioToolStripMenuItem->Size = System::Drawing::Size(103, 24);
			this->boticarioToolStripMenuItem->Text = L"Boticario";
			this->boticarioToolStripMenuItem->Click += gcnew System::EventHandler(this, &menuPersoForm::boticarioToolStripMenuItem_Click);
			// 
			// laboratorioToolStripMenuItem
			// 
			this->laboratorioToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"laboratorioToolStripMenuItem.Image")));
			this->laboratorioToolStripMenuItem->Name = L"laboratorioToolStripMenuItem";
			this->laboratorioToolStripMenuItem->Size = System::Drawing::Size(121, 24);
			this->laboratorioToolStripMenuItem->Text = L"Laboratorio";
			this->laboratorioToolStripMenuItem->Click += gcnew System::EventHandler(this, &menuPersoForm::laboratorioToolStripMenuItem_Click);
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"salirToolStripMenuItem.Image")));
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(72, 24);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &menuPersoForm::salirToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(339, 296);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(149, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Personal Medico";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(144, 67);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(518, 212);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(289, 351);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(251, 263);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			// 
			// menuPersoForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(856, 715);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"menuPersoForm";
			this->Text = L"menuPersoForm";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Saliendo del menu", "Salida", MessageBoxButtons::OK, MessageBoxIcon::Information);
		this->Close();
	}
private: System::Void doctorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	doctorForm^ doctor1 = gcnew doctorForm();
	doctor1->Show();
}
private: System::Void boticarioToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	boticarioForm^ boticario1 = gcnew boticarioForm();
	boticario1->Show();
}
private: System::Void laboratorioToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	laboratorioForm^ laboratorio1 = gcnew laboratorioForm();
	laboratorio1->Show();
}
};
}
