#pragma once

namespace Tarea4KD {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de administradorForm
	/// </summary>
	public ref class administradorForm : public System::Windows::Forms::Form
	{
	public:
		administradorForm(void)
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
		~administradorForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ Nombre;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ btnCancelar;
	private: System::Windows::Forms::Button^ brnBuscar;
	private: System::Windows::Forms::Button^ btnBloquear;
	private: System::Windows::Forms::Button^ btnRegistrar;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboPerfil;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtCorreo;
	private: System::Windows::Forms::TextBox^ txtCedula;
	private: System::Windows::Forms::TextBox^ txtApellido;
	private: System::Windows::Forms::TextBox^ txtNombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(administradorForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Nombre = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->comboPerfil = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnRegistrar = (gcnew System::Windows::Forms::Button());
			this->btnBloquear = (gcnew System::Windows::Forms::Button());
			this->brnBuscar = (gcnew System::Windows::Forms::Button());
			this->btnCancelar = (gcnew System::Windows::Forms::Button());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->txtApellido = (gcnew System::Windows::Forms::TextBox());
			this->txtCedula = (gcnew System::Windows::Forms::TextBox());
			this->txtCorreo = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->txtCorreo);
			this->panel1->Controls->Add(this->txtCedula);
			this->panel1->Controls->Add(this->txtApellido);
			this->panel1->Controls->Add(this->txtNombre);
			this->panel1->Controls->Add(this->btnCancelar);
			this->panel1->Controls->Add(this->brnBuscar);
			this->panel1->Controls->Add(this->btnBloquear);
			this->panel1->Controls->Add(this->btnRegistrar);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->comboPerfil);
			this->panel1->Controls->Add(this->dataGridView1);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->Nombre);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(638, 613);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &administradorForm::panel1_Paint);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(166, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(254, 22);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Administracion de Usuarios";
			// 
			// Nombre
			// 
			this->Nombre->AutoSize = true;
			this->Nombre->Location = System::Drawing::Point(31, 67);
			this->Nombre->Name = L"Nombre";
			this->Nombre->Size = System::Drawing::Size(56, 16);
			this->Nombre->TabIndex = 1;
			this->Nombre->Text = L"Nombre";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(294, 67);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(57, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Apellido";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(30, 150);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(50, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Cédula";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(30, 227);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(48, 16);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Correo";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(493, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(134, 136);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column2, this->Column3, this->Column4
			});
			this->dataGridView1->Location = System::Drawing::Point(33, 346);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(547, 150);
			this->dataGridView1->TabIndex = 7;
			// 
			// comboPerfil
			// 
			this->comboPerfil->FormattingEnabled = true;
			this->comboPerfil->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Perfil Director", L"Perfil Personal", L"Perfil Paciente" });
			this->comboPerfil->Location = System::Drawing::Point(297, 180);
			this->comboPerfil->Name = L"comboPerfil";
			this->comboPerfil->Size = System::Drawing::Size(121, 24);
			this->comboPerfil->TabIndex = 8;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(31, 317);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(151, 16);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Resumen de busqueda:";
			// 
			// btnRegistrar
			// 
			this->btnRegistrar->Location = System::Drawing::Point(33, 536);
			this->btnRegistrar->Name = L"btnRegistrar";
			this->btnRegistrar->Size = System::Drawing::Size(114, 47);
			this->btnRegistrar->TabIndex = 10;
			this->btnRegistrar->Text = L"Registrar";
			this->btnRegistrar->UseVisualStyleBackColor = true;
			// 
			// btnBloquear
			// 
			this->btnBloquear->Location = System::Drawing::Point(189, 534);
			this->btnBloquear->Name = L"btnBloquear";
			this->btnBloquear->Size = System::Drawing::Size(112, 49);
			this->btnBloquear->TabIndex = 11;
			this->btnBloquear->Text = L"Bloquear";
			this->btnBloquear->UseVisualStyleBackColor = true;
			// 
			// brnBuscar
			// 
			this->brnBuscar->Location = System::Drawing::Point(343, 536);
			this->brnBuscar->Name = L"brnBuscar";
			this->brnBuscar->Size = System::Drawing::Size(118, 47);
			this->brnBuscar->TabIndex = 12;
			this->brnBuscar->Text = L"Buscar";
			this->brnBuscar->UseVisualStyleBackColor = true;
			// 
			// btnCancelar
			// 
			this->btnCancelar->Location = System::Drawing::Point(493, 536);
			this->btnCancelar->Name = L"btnCancelar";
			this->btnCancelar->Size = System::Drawing::Size(111, 49);
			this->btnCancelar->TabIndex = 13;
			this->btnCancelar->Text = L"Cancelar";
			this->btnCancelar->UseVisualStyleBackColor = true;
			// 
			// txtNombre
			// 
			this->txtNombre->Location = System::Drawing::Point(33, 97);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(130, 22);
			this->txtNombre->TabIndex = 14;
			// 
			// txtApellido
			// 
			this->txtApellido->Location = System::Drawing::Point(297, 97);
			this->txtApellido->Name = L"txtApellido";
			this->txtApellido->Size = System::Drawing::Size(121, 22);
			this->txtApellido->TabIndex = 15;
			// 
			// txtCedula
			// 
			this->txtCedula->Location = System::Drawing::Point(34, 182);
			this->txtCedula->Name = L"txtCedula";
			this->txtCedula->Size = System::Drawing::Size(129, 22);
			this->txtCedula->TabIndex = 16;
			// 
			// txtCorreo
			// 
			this->txtCorreo->Location = System::Drawing::Point(33, 256);
			this->txtCorreo->Name = L"txtCorreo";
			this->txtCorreo->Size = System::Drawing::Size(130, 22);
			this->txtCorreo->TabIndex = 17;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(294, 150);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(37, 16);
			this->label6->TabIndex = 18;
			this->label6->Text = L"Perfil";
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Perfil";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Nombre";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Cédula";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Correo";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 125;
			// 
			// administradorForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::PapayaWhip;
			this->ClientSize = System::Drawing::Size(662, 637);
			this->Controls->Add(this->panel1);
			this->Name = L"administradorForm";
			this->Text = L"administradorForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
};
}
