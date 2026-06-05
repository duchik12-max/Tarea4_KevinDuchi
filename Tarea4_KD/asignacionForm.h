#pragma once

namespace Tarea4KD {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de asignacionForm
	/// </summary>
	public ref class asignacionForm : public System::Windows::Forms::Form
	{
	public:
		asignacionForm(void)
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
		~asignacionForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TextBox^ txtAsigNombre;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ btnAsignacion;



	private: System::Windows::Forms::MonthCalendar^ monthCalendar1;
	private: System::Windows::Forms::ComboBox^ comboBoxArea;

	private: System::Windows::Forms::Label^ label4;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(asignacionForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->comboBoxArea = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->btnAsignacion = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->txtAsigNombre = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->comboBoxArea);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->monthCalendar1);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->btnAsignacion);
			this->panel1->Controls->Add(this->dataGridView1);
			this->panel1->Controls->Add(this->txtAsigNombre);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(702, 677);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &asignacionForm::panel1_Paint);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(429, 232);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(232, 160);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 13;
			this->pictureBox2->TabStop = false;
			// 
			// comboBoxArea
			// 
			this->comboBoxArea->FormattingEnabled = true;
			this->comboBoxArea->Location = System::Drawing::Point(500, 139);
			this->comboBoxArea->Name = L"comboBoxArea";
			this->comboBoxArea->Size = System::Drawing::Size(133, 24);
			this->comboBoxArea->TabIndex = 12;
			this->comboBoxArea->SelectedIndexChanged += gcnew System::EventHandler(this, &asignacionForm::comboBox1_SelectedIndexChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(38, 221);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(49, 18);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Fecha";
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Location = System::Drawing::Point(41, 248);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 10;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button2->Location = System::Drawing::Point(514, 587);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(147, 52);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Volver";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &asignacionForm::button2_Click);
			// 
			// btnAsignacion
			// 
			this->btnAsignacion->Location = System::Drawing::Point(514, 489);
			this->btnAsignacion->Name = L"btnAsignacion";
			this->btnAsignacion->Size = System::Drawing::Size(147, 58);
			this->btnAsignacion->TabIndex = 8;
			this->btnAsignacion->Text = L"Guardar Cambios";
			this->btnAsignacion->UseVisualStyleBackColor = true;
			this->btnAsignacion->Click += gcnew System::EventHandler(this, &asignacionForm::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(25, 489);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(431, 150);
			this->dataGridView1->TabIndex = 5;
			// 
			// txtAsigNombre
			// 
			this->txtAsigNombre->Location = System::Drawing::Point(41, 159);
			this->txtAsigNombre->Name = L"txtAsigNombre";
			this->txtAsigNombre->Size = System::Drawing::Size(167, 22);
			this->txtAsigNombre->TabIndex = 4;
			this->txtAsigNombre->TextChanged += gcnew System::EventHandler(this, &asignacionForm::txtAsigNombre_TextChanged);
			this->txtAsigNombre->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &asignacionForm::txtAsigNombre_KeyPress);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(392, 139);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(102, 18);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Área Asignada";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(218, 89);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(191, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Asignacion de Tareas";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(38, 139);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(62, 18);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Nombre";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(41, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(620, 83);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// asignacionForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(726, 713);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"asignacionForm";
			this->Text = L"asignacionForm";
			this->Load += gcnew System::EventHandler(this, &asignacionForm::asignacion_Form_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
		
#pragma endregion

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Volviendo al menu", "Mensaje", MessageBoxButtons::OK, MessageBoxIcon::Information);
		this->Close();
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	// --- Validación de campos ---
	if (String::IsNullOrWhiteSpace(txtAsigNombre->Text))
	{
		MessageBox::Show(
			"Ingresa el nombre a asignar.",
			"Campo requerido",
			MessageBoxButtons::OK,
			MessageBoxIcon::Warning);
		txtAsigNombre->Focus();
		return;
	}

	if (comboBoxArea->SelectedIndex < 0)
	{
		MessageBox::Show(
			"Selecciona un área.",
			"Campo requerido",
			MessageBoxButtons::OK,
			MessageBoxIcon::Warning);
		comboBoxArea->Focus();
		return;
	}

	// Validación de fecha: no puede ser día pasado
	// (respaldo por si MinDate no está activo)
	if (monthCalendar1->SelectionStart.Date < DateTime::Today)
	{
		MessageBox::Show(
			"La fecha seleccionada ya pasó.\n"
			"Por favor selecciona una fecha a partir de hoy.",
			"Fecha inválida",
			MessageBoxButtons::OK,
			MessageBoxIcon::Warning);
		return;
	}

	// --- Obtener valores ---
	String^ nombre = txtAsigNombre->Text->Trim();
	String^ area = comboBoxArea->SelectedItem->ToString();
	String^ fecha = monthCalendar1->SelectionStart.ToString("dd/MM/yyyy");

	// --- Agregar fila a la tabla ---
	dataGridView1->Rows->Add(nombre, area, fecha);

	// --- Limpiar campos ---
	txtAsigNombre->Clear();
	comboBoxArea->SelectedIndex = 0;
	txtAsigNombre->Focus();
	/**
	MessageBox::Show(
		"Asignación registrada:\n"
		"Nombre: " + nombre + "\n"
		"Área:   " + area + "\n"
		"Fecha:  " + fecha,
		"Asignación exitosa",
		MessageBoxButtons::OK,
		MessageBoxIcon::Information);
	/**/
	MessageBox::Show("Datos guardados correctamente", "Mensaje", MessageBoxButtons::OK, MessageBoxIcon::Information);

}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void asignacion_Form_Load(System::Object^ sender, System::EventArgs^ e) {
	// Cargar áreas disponibles en el ComboBox
	comboBoxArea->Items->Clear();
	comboBoxArea->Items->Add("Urgencias");
	comboBoxArea->Items->Add("Pediatría");
	comboBoxArea->Items->Add("Cirugía");
	comboBoxArea->Items->Add("Cardiología");
	comboBoxArea->Items->Add("Laboratorio");
	comboBoxArea->Items->Add("Farmacia");
	comboBoxArea->SelectedIndex = 0;

	// Configurar columnas de dataGridView1
	// Si ya definiste Column1, Column2, Column3 en el diseñador
	// solo asigna los encabezados; si no, créalas aquí.
	dataGridView1->Columns->Clear();
	dataGridView1->ColumnCount = 3;
	dataGridView1->Columns[0]->HeaderText = "Nombre";
	dataGridView1->Columns[1]->HeaderText = "Área";
	dataGridView1->Columns[2]->HeaderText = "Fecha";

	dataGridView1->AutoSizeColumnsMode =
		DataGridViewAutoSizeColumnsMode::Fill;
	dataGridView1->ReadOnly = true;
	dataGridView1->AllowUserToAddRows = false;
	dataGridView1->SelectionMode =
		DataGridViewSelectionMode::FullRowSelect;
	// Bloquear días pasados en el calendario visualmente
	monthCalendar1->MinDate = DateTime::Today;
}
private: System::Void txtAsigNombre_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void txtAsigNombre_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	// Permitir: letras, espacios, tildes, ñ y backspace
   // Bloquear: cualquier dígito del 0 al 9
	if (Char::IsDigit(e->KeyChar))
	{
		e->Handled = true; // cancela el carácter, no se escribe
	}
}
};
}
