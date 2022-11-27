#pragma once
#include<iostream>
#include <msclr\marshal_cppstd.h>
__declspec(selectany)std::string b1;
__declspec(selectany)std::string b2;
__declspec(selectany)std::string b3;
__declspec(selectany)std::string b4;
__declspec(selectany)std::string b5;
namespace Mianauto {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Manual_Product
	/// </summary>
	public ref class Manual_Product : public System::Windows::Forms::Form
	{
	public:
		Manual_Product(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		
		void values(std::string& a1, std::string& a2, std::string& a3, std::string& a4, std::string& a5)
		{
			a1 = msclr::interop::marshal_as<std::string>(textBox1->Text);
			a2 = msclr::interop::marshal_as<std::string>(textBox2->Text);
			a3 = msclr::interop::marshal_as<std::string>(textBox3->Text);
			a4 = msclr::interop::marshal_as<std::string>(textBox4->Text);
			a5 = msclr::interop::marshal_as<std::string>(textBox5->Text);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Manual_Product()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label6;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(344, 336);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(121, 52);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Add";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Manual_Product::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(233, 18);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(194, 34);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Manual_Product::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(233, 80);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(194, 34);
			this->textBox2->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ControlDark;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(186, 29);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Product Name:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ControlDark;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 85);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(165, 29);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Buying price:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ControlDark;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 148);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(168, 29);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Selling price:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ControlDark;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(12, 209);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(166, 29);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Seller Name:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ControlDark;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(14, 266);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(185, 29);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Seller Contact:";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(233, 143);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(194, 34);
			this->textBox3->TabIndex = 8;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(233, 206);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(194, 34);
			this->textBox4->TabIndex = 9;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(233, 261);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(194, 34);
			this->textBox5->TabIndex = 10;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(12, 336);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(121, 52);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Cancel";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Manual_Product::button2_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::Color::Red;
			this->label6->Location = System::Drawing::Point(324, 314);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 16);
			this->label6->TabIndex = 12;
			// 
			// Manual_Product
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(477, 400);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"Manual_Product";
			this->Text = L"Manual_Product";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
public: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ z1 = textBox1->Text;
	String^ z2 = textBox2->Text;
	String^ z3 = textBox3->Text;
	String^ z4 = textBox4->Text;
	String^ z5 = textBox5->Text;
	if (textBox1->Text=="" || textBox2->Text == "" || textBox3->Text == "" || textBox4->Text == "" || textBox5->Text == "")
	{
		label6->Text = "Fill All Values";
	}
	else
	{
		

	}
}
};
}
