#pragma once

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(menuDirecForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->informeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->asignarPersonalToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gestionarInsumosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1->SuspendLayout();
			this->panel1->SuspendLayout();
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
			// 
			// asignarPersonalToolStripMenuItem
			// 
			this->asignarPersonalToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"asignarPersonalToolStripMenuItem.Image")));
			this->asignarPersonalToolStripMenuItem->Name = L"asignarPersonalToolStripMenuItem";
			this->asignarPersonalToolStripMenuItem->Size = System::Drawing::Size(148, 24);
			this->asignarPersonalToolStripMenuItem->Text = L"AsignarPersonal";
			// 
			// gestionarInsumosToolStripMenuItem
			// 
			this->gestionarInsumosToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gestionarInsumosToolStripMenuItem.Image")));
			this->gestionarInsumosToolStripMenuItem->Name = L"gestionarInsumosToolStripMenuItem";
			this->gestionarInsumosToolStripMenuItem->Size = System::Drawing::Size(164, 24);
			this->gestionarInsumosToolStripMenuItem->Text = L"Gestionar Insumos";
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"salirToolStripMenuItem.Image")));
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(72, 24);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &menuDirecForm::salirToolStripMenuItem_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(82, 67);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(421, 271);
			this->panel1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(112, 212);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(199, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Bienvenido Director de Medicos";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(40, 23);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(342, 171);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// menuDirecForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(626, 418);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"menuDirecForm";
			this->Text = L"menuDirecForm";
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
		this -> Close();
	}
};
}
