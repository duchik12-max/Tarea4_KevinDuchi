#pragma once

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
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;

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
				this->doctorToolStripMenuItem,
					this->boticarioToolStripMenuItem, this->laboratorioToolStripMenuItem, this->salirToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(626, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// doctorToolStripMenuItem
			// 
			this->doctorToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"doctorToolStripMenuItem.Image")));
			this->doctorToolStripMenuItem->Name = L"doctorToolStripMenuItem";
			this->doctorToolStripMenuItem->Size = System::Drawing::Size(89, 24);
			this->doctorToolStripMenuItem->Text = L"Doctor";
			// 
			// boticarioToolStripMenuItem
			// 
			this->boticarioToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"boticarioToolStripMenuItem.Image")));
			this->boticarioToolStripMenuItem->Name = L"boticarioToolStripMenuItem";
			this->boticarioToolStripMenuItem->Size = System::Drawing::Size(103, 24);
			this->boticarioToolStripMenuItem->Text = L"Boticario";
			// 
			// laboratorioToolStripMenuItem
			// 
			this->laboratorioToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"laboratorioToolStripMenuItem.Image")));
			this->laboratorioToolStripMenuItem->Name = L"laboratorioToolStripMenuItem";
			this->laboratorioToolStripMenuItem->Size = System::Drawing::Size(121, 24);
			this->laboratorioToolStripMenuItem->Text = L"Laboratorio";
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"salirToolStripMenuItem.Image")));
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(72, 24);
			this->salirToolStripMenuItem->Text = L"Salir";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(74, 49);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(423, 283);
			this->panel1->TabIndex = 1;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(50, 31);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(319, 188);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(160, 244);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(109, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Personal Medico";
			// 
			// menuPersoForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(626, 385);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"menuPersoForm";
			this->Text = L"menuPersoForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
