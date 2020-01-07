#pragma once

namespace Windialog {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ Beenden;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Button^ Fileopen;

	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->Beenden = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->Fileopen = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 12);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox1->Size = System::Drawing::Size(650, 428);
			this->textBox1->TabIndex = 0;
			// 
			// Beenden
			// 
			this->Beenden->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Beenden->Location = System::Drawing::Point(689, 373);
			this->Beenden->Name = L"Beenden";
			this->Beenden->Size = System::Drawing::Size(147, 52);
			this->Beenden->TabIndex = 1;
			this->Beenden->Text = L"btnBeenden";
			this->Beenden->UseVisualStyleBackColor = true;
			this->Beenden->Click += gcnew System::EventHandler(this, &Form1::btnBeenden_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(689, 14);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(80, 17);
			this->checkBox1->TabIndex = 2;
			this->checkBox1->Text = L"checkBox1";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// Fileopen
			// 
			this->Fileopen->Location = System::Drawing::Point(689, 269);
			this->Fileopen->Name = L"Fileopen";
			this->Fileopen->Size = System::Drawing::Size(126, 23);
			this->Fileopen->TabIndex = 3;
			this->Fileopen->Text = L"FileOpen";
			this->Fileopen->UseVisualStyleBackColor = true;
			this->Fileopen->Click += gcnew System::EventHandler(this, &Form1::Fileopen_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(858, 452);
			this->Controls->Add(this->Fileopen);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->Beenden);
			this->Controls->Add(this->textBox1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnBeenden_Click(System::Object^ sender, System::EventArgs^ e) 
	{

	}
	private: System::Void Fileopen_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog openFileDlg;
		openFileDlg.Filter = "Textdokument(*.txt).txt|Alle Dateien (*.*)| *,*";

		openFileDlg.ShowDialog();
	}
};
}
