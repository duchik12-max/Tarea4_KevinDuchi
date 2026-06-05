#pragma once

namespace Tarea4KD {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de informeForm
	/// </summary>
	public ref class informeForm : public System::Windows::Forms::Form
	{
	public:
		informeForm(void)
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
		~informeForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::DataGridView^ tablaInforme;




	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Paciente;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ btnInforme;

	private: System::Windows::Forms::Button^ btnResumen;
	private: System::Windows::Forms::TextBox^ txtDirecMedico;


	private: System::Windows::Forms::TextBox^ txtDirecPaciente;

	private: System::Windows::Forms::Label^ label4;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(informeForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->btnInforme = (gcnew System::Windows::Forms::Button());
			this->btnResumen = (gcnew System::Windows::Forms::Button());
			this->txtDirecMedico = (gcnew System::Windows::Forms::TextBox());
			this->txtDirecPaciente = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tablaInforme = (gcnew System::Windows::Forms::DataGridView());
			this->Paciente = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tablaInforme))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->btnInforme);
			this->panel1->Controls->Add(this->btnResumen);
			this->panel1->Controls->Add(this->txtDirecMedico);
			this->panel1->Controls->Add(this->txtDirecPaciente);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->tablaInforme);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(21, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(624, 465);
			this->panel1->TabIndex = 0;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(0, 86);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(159, 84);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 12;
			this->pictureBox2->TabStop = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button3->Location = System::Drawing::Point(432, 394);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(145, 47);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Volver";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &informeForm::button3_Click);
			// 
			// btnInforme
			// 
			this->btnInforme->Location = System::Drawing::Point(36, 394);
			this->btnInforme->Name = L"btnInforme";
			this->btnInforme->Size = System::Drawing::Size(163, 47);
			this->btnInforme->TabIndex = 10;
			this->btnInforme->Text = L"Ver Informe";
			this->btnInforme->UseVisualStyleBackColor = true;
			this->btnInforme->Click += gcnew System::EventHandler(this, &informeForm::button2_Click);
			// 
			// btnResumen
			// 
			this->btnResumen->Location = System::Drawing::Point(36, 326);
			this->btnResumen->Name = L"btnResumen";
			this->btnResumen->Size = System::Drawing::Size(163, 52);
			this->btnResumen->TabIndex = 9;
			this->btnResumen->Text = L"Ver Resumen";
			this->btnResumen->UseVisualStyleBackColor = true;
			this->btnResumen->Click += gcnew System::EventHandler(this, &informeForm::button1_Click);
			// 
			// txtDirecMedico
			// 
			this->txtDirecMedico->Location = System::Drawing::Point(36, 285);
			this->txtDirecMedico->Name = L"txtDirecMedico";
			this->txtDirecMedico->Size = System::Drawing::Size(178, 22);
			this->txtDirecMedico->TabIndex = 8;
			this->txtDirecMedico->TextChanged += gcnew System::EventHandler(this, &informeForm::textBox2_TextChanged);
			// 
			// txtDirecPaciente
			// 
			this->txtDirecPaciente->Location = System::Drawing::Point(36, 214);
			this->txtDirecPaciente->Name = L"txtDirecPaciente";
			this->txtDirecPaciente->Size = System::Drawing::Size(178, 22);
			this->txtDirecPaciente->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(301, 161);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(72, 18);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Resumen";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(33, 254);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(126, 18);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Médico Asignado:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(33, 182);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 18);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Paciente: ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(205, 86);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(209, 22);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Busqueda de Informes";
			// 
			// tablaInforme
			// 
			this->tablaInforme->AllowUserToOrderColumns = true;
			this->tablaInforme->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tablaInforme->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Paciente,
					this->Column1
			});
			this->tablaInforme->Location = System::Drawing::Point(304, 191);
			this->tablaInforme->Name = L"tablaInforme";
			this->tablaInforme->RowHeadersWidth = 51;
			this->tablaInforme->RowTemplate->Height = 24;
			this->tablaInforme->Size = System::Drawing::Size(301, 175);
			this->tablaInforme->TabIndex = 2;
			this->tablaInforme->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &informeForm::dataGridView1_CellContentClick);
			// 
			// Paciente
			// 
			this->Paciente->HeaderText = L"Campos";
			this->Paciente->MinimumWidth = 6;
			this->Paciente->Name = L"Paciente";
			this->Paciente->Width = 125;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Datos";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(621, 79);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// informeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(673, 489);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"informeForm";
			this->Text = L"informeForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tablaInforme))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Buscando informe", "Informe", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Volviendo al menu", "Mensaje", MessageBoxButtons::OK, MessageBoxIcon::Information);
	this->Close();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
