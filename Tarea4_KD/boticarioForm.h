#pragma once

namespace Tarea4KD {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de boticarioForm
	/// </summary>
	public ref class boticarioForm : public System::Windows::Forms::Form
	{
	public:
		boticarioForm(void)
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
		~boticarioForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ btnMedica;

	private: System::Windows::Forms::Button^ btnBoti;
	private: System::Windows::Forms::TextBox^ txtCantidad;



	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(boticarioForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->btnMedica = (gcnew System::Windows::Forms::Button());
			this->btnBoti = (gcnew System::Windows::Forms::Button());
			this->txtCantidad = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->comboBox1);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->btnMedica);
			this->panel1->Controls->Add(this->btnBoti);
			this->panel1->Controls->Add(this->txtCantidad);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(591, 449);
			this->panel1->TabIndex = 0;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(143, 187);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 11;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(424, 379);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(133, 52);
			this->button3->TabIndex = 10;
			this->button3->Text = L"Volver";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &boticarioForm::button3_Click);
			// 
			// btnMedica
			// 
			this->btnMedica->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMedica->Location = System::Drawing::Point(424, 306);
			this->btnMedica->Name = L"btnMedica";
			this->btnMedica->Size = System::Drawing::Size(133, 50);
			this->btnMedica->TabIndex = 9;
			this->btnMedica->Text = L"Guardar";
			this->btnMedica->UseVisualStyleBackColor = true;
			this->btnMedica->Click += gcnew System::EventHandler(this, &boticarioForm::button1_Click);
			// 
			// btnBoti
			// 
			this->btnBoti->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBoti->Location = System::Drawing::Point(35, 379);
			this->btnBoti->Name = L"btnBoti";
			this->btnBoti->Size = System::Drawing::Size(122, 52);
			this->btnBoti->TabIndex = 8;
			this->btnBoti->Text = L"Ver Total";
			this->btnBoti->UseVisualStyleBackColor = true;
			this->btnBoti->Click += gcnew System::EventHandler(this, &boticarioForm::button2_Click);
			// 
			// txtCantidad
			// 
			this->txtCantidad->Location = System::Drawing::Point(389, 232);
			this->txtCantidad->Name = L"txtCantidad";
			this->txtCantidad->Size = System::Drawing::Size(168, 22);
			this->txtCantidad->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(386, 193);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(70, 18);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Cantidad:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(32, 193);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 18);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Medicina:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(180, 80);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(223, 22);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Venta de Medicamentos";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(3, 80);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(122, 81);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(3, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(585, 71);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// boticarioForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(620, 473);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"boticarioForm";
			this->Text = L"boticarioForm";
			this->Load += gcnew System::EventHandler(this, &boticarioForm::boticarioForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		// --- Validación: medicamento seleccionado ---
		if (comboBox1->SelectedIndex < 0)
		{
			MessageBox::Show(
				"Selecciona un medicamento.",
				"Campo requerido",
				MessageBoxButtons::OK,
				MessageBoxIcon::Warning);
			comboBox1->Focus();
			return;
		}

		// --- Validación: cantidad no vacía ---
		if (String::IsNullOrWhiteSpace(txtCantidad->Text))
		{
			MessageBox::Show(
				"Ingresa la cantidad.",
				"Campo requerido",
				MessageBoxButtons::OK,
				MessageBoxIcon::Warning);
			txtCantidad->Focus();
			return;
		}

		// --- Validación: cantidad es número entero positivo ---
		int cantidad = 0;
		if (!int::TryParse(txtCantidad->Text->Trim(), cantidad) || cantidad <= 0)
		{
			MessageBox::Show(
				"La cantidad debe ser un número entero positivo.",
				"Valor inválido",
				MessageBoxButtons::OK,
				MessageBoxIcon::Warning);
			txtCantidad->Clear();
			txtCantidad->Focus();
			return;
		}

		// --- Precios hardcodeados por medicamento (precio unitario) ---
		// Modifica los valores según los precios reales del hospital.
		cli::array<cli::array<String^>^>^ precios = {
			gcnew cli::array<String^> { "Paracetamol",    "0.50"  },
			gcnew cli::array<String^> { "Ibuprofeno",     "0.75"  },
			gcnew cli::array<String^> { "Amoxicilina",    "1.20"  },
			gcnew cli::array<String^> { "Omeprazol",      "0.90"  },
			gcnew cli::array<String^> { "Metformina",     "0.60"  },
			gcnew cli::array<String^> { "Aspirina",       "0.40"  },
			gcnew cli::array<String^> { "Loratadina",     "0.85"  },
			gcnew cli::array<String^> { "Atorvastatina",  "1.50"  },
			gcnew cli::array<String^> { "Azitromicina",   "2.00"  },
			gcnew cli::array<String^> { "Diclofenaco",    "0.70"  }
		};

		// --- Buscar precio del medicamento seleccionado ---
		String^ medicamento = comboBox1->SelectedItem->ToString();
		double  precioUnitario = 0.0;
		bool    encontrado = false;

		for each (cli::array<String^> ^ fila in precios)
		{
			if (fila[0] == medicamento)
			{
				precioUnitario = double::Parse(fila[1],
					System::Globalization::CultureInfo::InvariantCulture);
				encontrado = true;
				break;
			}
		}

		if (!encontrado)
		{
			MessageBox::Show(
				"No se encontró el precio del medicamento seleccionado.",
				"Error",
				MessageBoxButtons::OK,
				MessageBoxIcon::Error);
			return;
		}

		// --- Calcular total ---
		double total = precioUnitario * cantidad;

		// --- Mostrar resultado ---
		MessageBox::Show(
			"Medicamento:     " + medicamento + "\n"
			"Precio unitario: $" + precioUnitario.ToString("F2") + "\n"
			"Cantidad:        " + cantidad.ToString() + "\n"
			"Total:           $" + total.ToString("F2"),
			"Cálculo de total",
			MessageBoxButtons::OK,
			MessageBoxIcon::Information);

		// --- Limpiar campos ---
		txtCantidad->Clear();
		comboBox1->SelectedIndex = 0;
		txtCantidad->Focus();
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Volviendo al menu", "Mensaje", MessageBoxButtons::OK, MessageBoxIcon::Information);
	this->Close();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Guardando orden", "Mensaje", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void boticarioForm_Load(System::Object^ sender, System::EventArgs^ e) {
	comboBox1->Items->Clear();
	comboBox1->Items->Add("Paracetamol");
	comboBox1->Items->Add("Ibuprofeno");
	comboBox1->Items->Add("Amoxicilina");
	comboBox1->Items->Add("Omeprazol");
	comboBox1->Items->Add("Metformina");
	comboBox1->Items->Add("Aspirina");
	comboBox1->Items->Add("Loratadina");
	comboBox1->Items->Add("Atorvastatina");
	comboBox1->Items->Add("Azitromicina");
	comboBox1->Items->Add("Diclofenaco");
	comboBox1->SelectedIndex = 0;
}
};
}
