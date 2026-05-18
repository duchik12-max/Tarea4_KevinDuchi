#pragma once

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
	private: System::Windows::Forms::Panel^ panel1;
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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->panel1->SuspendLayout();
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
			// 
			// tratamientoToolStripMenuItem
			// 
			this->tratamientoToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tratamientoToolStripMenuItem.Image")));
			this->tratamientoToolStripMenuItem->Name = L"tratamientoToolStripMenuItem";
			this->tratamientoToolStripMenuItem->Size = System::Drawing::Size(123, 24);
			this->tratamientoToolStripMenuItem->Text = L"Tratamiento";
			// 
			// agendarToolStripMenuItem
			// 
			this->agendarToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"agendarToolStripMenuItem.Image")));
			this->agendarToolStripMenuItem->Name = L"agendarToolStripMenuItem";
			this->agendarToolStripMenuItem->Size = System::Drawing::Size(100, 24);
			this->agendarToolStripMenuItem->Text = L"Agendar";
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"salirToolStripMenuItem.Image")));
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(72, 24);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &menuPacienForm::salirToolStripMenuItem_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(48, 53);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(472, 338);
			this->panel1->TabIndex = 1;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(54, 30);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(358, 214);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(175, 275);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(131, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Bienvenido Paciente";
			// 
			// menuPacienForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(581, 433);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"menuPacienForm";
			this->Text = L"menuPacienForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
