#pragma once

namespace Tarea4KD {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de insumosForm
	/// </summary>
	public ref class insumosForm : public System::Windows::Forms::Form
	{
	public:
		insumosForm(void)
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
		~insumosForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ btnInsumos;
	private: System::Windows::Forms::TextBox^ txtInsumo;



	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::ComboBox^ comboInsuArea;

	private: System::Windows::Forms::PictureBox^ pictureBox2;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(insumosForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->comboInsuArea = (gcnew System::Windows::Forms::ComboBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->btnInsumos = (gcnew System::Windows::Forms::Button());
			this->txtInsumo = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->comboInsuArea);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->btnInsumos);
			this->panel1->Controls->Add(this->txtInsumo);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(627, 414);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &insumosForm::panel1_Paint);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(29, 123);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(184, 187);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 9;
			this->pictureBox2->TabStop = false;
			// 
			// comboInsuArea
			// 
			this->comboInsuArea->FormattingEnabled = true;
			this->comboInsuArea->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Farmacia", L"Consulta", L"Laboratorio", L"Quirófano" });
			this->comboInsuArea->Location = System::Drawing::Point(479, 192);
			this->comboInsuArea->Name = L"comboInsuArea";
			this->comboInsuArea->Size = System::Drawing::Size(121, 24);
			this->comboInsuArea->TabIndex = 8;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(485, 342);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(115, 53);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Volver";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &insumosForm::button2_Click);
			// 
			// btnInsumos
			// 
			this->btnInsumos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnInsumos->Location = System::Drawing::Point(29, 342);
			this->btnInsumos->Name = L"btnInsumos";
			this->btnInsumos->Size = System::Drawing::Size(119, 53);
			this->btnInsumos->TabIndex = 6;
			this->btnInsumos->Text = L"Ver Insumos";
			this->btnInsumos->UseVisualStyleBackColor = true;
			this->btnInsumos->Click += gcnew System::EventHandler(this, &insumosForm::button1_Click);
			// 
			// txtInsumo
			// 
			this->txtInsumo->Location = System::Drawing::Point(427, 139);
			this->txtInsumo->Name = L"txtInsumo";
			this->txtInsumo->Size = System::Drawing::Size(173, 22);
			this->txtInsumo->TabIndex = 5;
			this->txtInsumo->TextChanged += gcnew System::EventHandler(this, &insumosForm::textBox1_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(291, 143);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(57, 18);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Insumo";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(291, 198);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(122, 18);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Selecione el Área";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(216, 84);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(184, 22);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Estatus de Insumos";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(3, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(621, 78);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// insumosForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(651, 438);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"insumosForm";
			this->Text = L"insumosForm";
			this->Load += gcnew System::EventHandler(this, &insumosForm::insumosForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// --- Validación de campos ---
		if (String::IsNullOrWhiteSpace(txtInsumo->Text))
		{
			MessageBox::Show(
				"Ingresa el nombre del insumo.",
				"Campo requerido",
				MessageBoxButtons::OK,
				MessageBoxIcon::Warning);
			txtInsumo->Focus();
			return;
		}

		if (comboInsuArea->SelectedIndex < 0)
		{
			MessageBox::Show(
				"Selecciona un área.",
				"Campo requerido",
				MessageBoxButtons::OK,
				MessageBoxIcon::Warning);
			comboInsuArea->Focus();
			return;
		}

		// --- Datos hardcodeados: insumo + área → stock disponible ---
		// Formato: { "insumo", "área", "stock/descripción" }
		cli::array<cli::array<String^>^>^ baseDatos = {
			gcnew cli::array<String^> { "Guantes",        "Urgencias",     "500 unidades" },
			gcnew cli::array<String^> { "Guantes",        "Cirugía",       "300 unidades" },
			gcnew cli::array<String^> { "Guantes",        "Laboratorio",   "400 unidades" },
			gcnew cli::array<String^> { "Mascarilla",     "Urgencias",     "250 unidades" },
			gcnew cli::array<String^> { "Mascarilla",     "Cirugía",       "180 unidades" },
			gcnew cli::array<String^> { "Jeringa",        "Urgencias",     "600 unidades" },
			gcnew cli::array<String^> { "Jeringa",        "Pediatría",     "350 unidades" },
			gcnew cli::array<String^> { "Jeringa",        "Farmacia",      "450 unidades" },
			gcnew cli::array<String^> { "Bisturí",        "Cirugía",       "80 unidades"  },
			gcnew cli::array<String^> { "Suero",          "Urgencias",     "120 bolsas"   },
			gcnew cli::array<String^> { "Suero",          "Pediatría",     "90 bolsas"    },
			gcnew cli::array<String^> { "Suero",          "Cardiología",   "75 bolsas"    },
			gcnew cli::array<String^> { "Vendaje",        "Urgencias",     "300 rollos"   },
			gcnew cli::array<String^> { "Estetoscopio",   "Cardiología",   "15 unidades"  },
			gcnew cli::array<String^> { "Estetoscopio",   "Pediatría",     "10 unidades"  },
			gcnew cli::array<String^> { "Termómetro",     "Urgencias",     "40 unidades"  },
			gcnew cli::array<String^> { "Termómetro",     "Pediatría",     "30 unidades"  },
			gcnew cli::array<String^> { "Alcohol",        "Laboratorio",   "50 litros"    },
			gcnew cli::array<String^> { "Alcohol",        "Farmacia",      "80 litros"    },
			gcnew cli::array<String^> { "Gasas",          "Urgencias",     "1000 unidades"},
			gcnew cli::array<String^> { "Gasas",          "Cirugía",       "800 unidades" },
			gcnew cli::array<String^> { "Oxígeno",        "Urgencias",     "20 tanques"   },
			gcnew cli::array<String^> { "Oxígeno",        "Cardiología",   "15 tanques"   },
		};

		// --- Búsqueda: compara insumo y área (sin distinguir mayúsculas) ---
		String^ insumo = txtInsumo->Text->Trim()->ToLower();
		String^ area = comboInsuArea->SelectedItem->ToString()->ToLower();
		String^ resultado = nullptr;

		for each (cli::array<String^> ^ fila in baseDatos)
		{
			if (fila[0]->ToLower() == insumo &&
				fila[1]->ToLower() == area)
			{
				resultado = fila[2];
				break;
			}
		}

		// --- Mostrar resultado ---
		if (resultado != nullptr)
		{
			MessageBox::Show(
				"Insumo:     " + txtInsumo->Text->Trim() + "\n"
				"Área:       " + comboInsuArea->SelectedItem->ToString() + "\n"
				"Existencia: " + resultado,
				"Insumo encontrado",
				MessageBoxButtons::OK,
				MessageBoxIcon::Information);
		}
		else
		{
			MessageBox::Show(
				"No se encontró el insumo:\n"
				"\"" + txtInsumo->Text->Trim() + "\"\n"
				"en el área de " + comboInsuArea->SelectedItem->ToString() + ".",
				"Sin resultados",
				MessageBoxButtons::OK,
				MessageBoxIcon::Information);
		}
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Volviendo al menu", "Mensaje", MessageBoxButtons::OK, MessageBoxIcon::Information);
	this->Close();
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void insumosForm_Load(System::Object^ sender, System::EventArgs^ e) {
	comboInsuArea->Items->Clear();
	comboInsuArea->Items->Add("Urgencias");
	comboInsuArea->Items->Add("Pediatría");
	comboInsuArea->Items->Add("Cirugía");
	comboInsuArea->Items->Add("Cardiología");
	comboInsuArea->Items->Add("Laboratorio");
	comboInsuArea->Items->Add("Farmacia");
	comboInsuArea->SelectedIndex = 0;
}
};
}
