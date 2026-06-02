#pragma once
#include "Usuario.h"
#include "menuDirecForm.h"
#include "menuPacienForm.h"
#include "menuPersoForm.h"
#include <msclr/marshal_cppstd.h>
namespace Tarea4KD {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de loginForm
	/// </summary>
	public ref class loginForm : public System::Windows::Forms::Form
	{
	public:
		loginForm(void)
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
		~loginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;


	private: System::Windows::Forms::TextBox^ txtClave;
	private: System::Windows::Forms::TextBox^ txtUsuario;



	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Button^ btnLogin;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(loginForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnLogin = (gcnew System::Windows::Forms::Button());
			this->txtClave = (gcnew System::Windows::Forms::TextBox());
			this->txtUsuario = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->btnLogin);
			this->panel1->Controls->Add(this->txtClave);
			this->panel1->Controls->Add(this->txtUsuario);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(32, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(544, 355);
			this->panel1->TabIndex = 0;
			// 
			// btnLogin
			// 
			this->btnLogin->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnLogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLogin->Location = System::Drawing::Point(341, 287);
			this->btnLogin->Name = L"btnLogin";
			this->btnLogin->Size = System::Drawing::Size(118, 55);
			this->btnLogin->TabIndex = 7;
			this->btnLogin->Text = L"Ingresar";
			this->btnLogin->UseVisualStyleBackColor = false;
			this->btnLogin->Click += gcnew System::EventHandler(this, &loginForm::btnLogin_Click);
			// 
			// txtClave
			// 
			this->txtClave->Location = System::Drawing::Point(38, 209);
			this->txtClave->Name = L"txtClave";
			this->txtClave->PasswordChar = '*';
			this->txtClave->Size = System::Drawing::Size(167, 22);
			this->txtClave->TabIndex = 6;
			// 
			// txtUsuario
			// 
			this->txtUsuario->Location = System::Drawing::Point(38, 141);
			this->txtUsuario->Name = L"txtUsuario";
			this->txtUsuario->Size = System::Drawing::Size(167, 22);
			this->txtUsuario->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(38, 177);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(95, 20);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Contraseña";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(38, 107);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(67, 20);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Usuario";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(286, 91);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(214, 168);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(3, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(541, 71);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(36, 374);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(266, 22);
			this->dateTimePicker1->TabIndex = 1;
			// 
			// loginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(615, 422);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"loginForm";
			this->Text = L"loginForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
		//conversion de string normal a string de .net
		private: static String^ toSystemString(string str)
		{
			return gcnew String(str.c_str());
		}
			   //conversion de string de .net a string normal
		private: static string toStdString(String^ str)
		{
			return msclr::interop::marshal_as<string>(str);
		}
#pragma endregion
	
private: System::Void btnLogin_Click(System::Object^ sender, System::EventArgs^ e) {
	Usuario* usuarios[3];
	usuarios[0] = new Usuario("Carlos", "dir1978Hd", "Director");
	usuarios[1] = new Usuario("Kevin", "pac29IESS", "Paciente");
	usuarios[2] = new Usuario("Javier", "per72Hp", "Personal");
	Usuario user;
	string usuario = toStdString(txtUsuario->Text);
	string clave = toStdString(txtClave->Text);
	for (size_t i = 0; i < 3; i++)
	{
		if (usuarios[i]->verificarUsuario(usuario, clave))
		{
			user.setUsuario(usuarios[i]->getUsuario());
			user.setClave(usuarios[i]->getClave());
			user.setPerfil(usuarios[i]->getPerfil());
			MessageBox::Show("Hola " + this->toSystemString(user.getUsuario()), "Bienvenido ", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			this->Visible = false;

		}
	}
	if (user.getPerfil() == "Director") {
		menuDirecForm^ menu1 = gcnew menuDirecForm();
		menu1->Show();
	}
	else if (user.getPerfil() == "Paciente") {
		menuPacienForm^ menu2 = gcnew menuPacienForm();
		menu2->Show();
	}
	else if (user.getPerfil() == "Personal") {
		menuPersoForm^ menu3 = gcnew menuPersoForm();
		menu3->Show();
	}
	else {
		MessageBox::Show("Error en login ", "Error ", MessageBoxButtons::OK, MessageBoxIcon::Stop);
	}
}
};
}
