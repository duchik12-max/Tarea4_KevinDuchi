#pragma once

namespace Tarea4KD {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de laboratorioForm
	/// </summary>
	public ref class laboratorioForm : public System::Windows::Forms::Form
	{
	public:
		laboratorioForm(void)
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
		~laboratorioForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtLaboFecha;



	private: System::Windows::Forms::TextBox^ txtLaboAnalista;
	private: System::Windows::Forms::TextBox^ txtLaboCorreo;


	private: System::Windows::Forms::TextBox^ txtLaboPaciente;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ btnLabo;
	private: System::Windows::Forms::CheckBox^ checkBoxNo;


	private: System::Windows::Forms::CheckBox^ checkBoxSi;

	private: System::Windows::Forms::ComboBox^ comboLaboEstudio;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(laboratorioForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->comboLaboEstudio = (gcnew System::Windows::Forms::ComboBox());
			this->txtLaboFecha = (gcnew System::Windows::Forms::TextBox());
			this->txtLaboAnalista = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->txtLaboCorreo = (gcnew System::Windows::Forms::TextBox());
			this->txtLaboPaciente = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->btnLabo = (gcnew System::Windows::Forms::Button());
			this->checkBoxNo = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxSi = (gcnew System::Windows::Forms::CheckBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->comboLaboEstudio);
			this->panel1->Controls->Add(this->txtLaboFecha);
			this->panel1->Controls->Add(this->txtLaboAnalista);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(530, 314);
			this->panel1->TabIndex = 0;
			// 
			// comboLaboEstudio
			// 
			this->comboLaboEstudio->FormattingEnabled = true;
			this->comboLaboEstudio->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"Examen de sangre", L"Examen de orina",
					L"Examen de heces"
			});
			this->comboLaboEstudio->Location = System::Drawing::Point(184, 197);
			this->comboLaboEstudio->Name = L"comboLaboEstudio";
			this->comboLaboEstudio->Size = System::Drawing::Size(121, 24);
			this->comboLaboEstudio->TabIndex = 8;
			// 
			// txtLaboFecha
			// 
			this->txtLaboFecha->Location = System::Drawing::Point(184, 155);
			this->txtLaboFecha->Name = L"txtLaboFecha";
			this->txtLaboFecha->Size = System::Drawing::Size(165, 22);
			this->txtLaboFecha->TabIndex = 7;
			// 
			// txtLaboAnalista
			// 
			this->txtLaboAnalista->Location = System::Drawing::Point(184, 114);
			this->txtLaboAnalista->Name = L"txtLaboAnalista";
			this->txtLaboAnalista->Size = System::Drawing::Size(165, 22);
			this->txtLaboAnalista->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(45, 155);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(49, 18);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Fecha";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(42, 203);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(122, 18);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Estudio a realizar";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(42, 114);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 18);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Analista";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(180, 74);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(192, 22);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Solicitud de Examen";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(406, 74);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(121, 135);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(3, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(524, 65);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->Controls->Add(this->txtLaboCorreo);
			this->panel2->Controls->Add(this->txtLaboPaciente);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->btnLabo);
			this->panel2->Controls->Add(this->checkBoxNo);
			this->panel2->Controls->Add(this->checkBoxSi);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Location = System::Drawing::Point(12, 353);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(524, 204);
			this->panel2->TabIndex = 1;
			// 
			// txtLaboCorreo
			// 
			this->txtLaboCorreo->Location = System::Drawing::Point(130, 88);
			this->txtLaboCorreo->Name = L"txtLaboCorreo";
			this->txtLaboCorreo->Size = System::Drawing::Size(144, 22);
			this->txtLaboCorreo->TabIndex = 9;
			// 
			// txtLaboPaciente
			// 
			this->txtLaboPaciente->Location = System::Drawing::Point(130, 45);
			this->txtLaboPaciente->Name = L"txtLaboPaciente";
			this->txtLaboPaciente->Size = System::Drawing::Size(144, 22);
			this->txtLaboPaciente->TabIndex = 8;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(346, 138);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(135, 50);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Volver";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &laboratorioForm::button2_Click);
			// 
			// btnLabo
			// 
			this->btnLabo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLabo->Location = System::Drawing::Point(48, 138);
			this->btnLabo->Name = L"btnLabo";
			this->btnLabo->Size = System::Drawing::Size(146, 50);
			this->btnLabo->TabIndex = 6;
			this->btnLabo->Text = L"Generar Orden";
			this->btnLabo->UseVisualStyleBackColor = true;
			this->btnLabo->Click += gcnew System::EventHandler(this, &laboratorioForm::button1_Click);
			// 
			// checkBoxNo
			// 
			this->checkBoxNo->AutoSize = true;
			this->checkBoxNo->Location = System::Drawing::Point(361, 90);
			this->checkBoxNo->Name = L"checkBoxNo";
			this->checkBoxNo->Size = System::Drawing::Size(47, 20);
			this->checkBoxNo->TabIndex = 5;
			this->checkBoxNo->Text = L"No";
			this->checkBoxNo->UseVisualStyleBackColor = true;
			// 
			// checkBoxSi
			// 
			this->checkBoxSi->AutoSize = true;
			this->checkBoxSi->Location = System::Drawing::Point(361, 64);
			this->checkBoxSi->Name = L"checkBoxSi";
			this->checkBoxSi->Size = System::Drawing::Size(41, 20);
			this->checkBoxSi->TabIndex = 4;
			this->checkBoxSi->Text = L"Si";
			this->checkBoxSi->UseVisualStyleBackColor = true;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(358, 45);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(124, 16);
			this->label8->TabIndex = 3;
			this->label8->Text = L"Paciente ingresado";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(45, 86);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(55, 18);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Correo";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(45, 43);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(65, 18);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Paciente";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(149, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(246, 20);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Informacion complementaria";
			// 
			// laboratorioForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(554, 569);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"laboratorioForm";
			this->Text = L"laboratorioForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Volviendo al menu", "Mensaje", MessageBoxButtons::OK, MessageBoxIcon::Information);
		this->Close();
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Orden generada", "Mensaje", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
};
}
