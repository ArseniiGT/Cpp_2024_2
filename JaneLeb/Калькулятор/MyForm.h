#pragma once
#include <math.h>

namespace Calculyator2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ btn_point;


	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ btn_znak;

	private: System::Windows::Forms::Button^ btn_div;

	private: System::Windows::Forms::Button^ btn_mult;



	private: System::Windows::Forms::Button^ btn_add;
	private: System::Windows::Forms::Button^ btn_AC;



	private: System::Windows::Forms::Button^ btn_min;
	private: System::Windows::Forms::Button^ btn_result;
	private: System::Windows::Forms::Button^ butn_percent;
	private: System::Windows::Forms::Button^ butn_sqrt;

	private: System::Windows::Forms::Button^ button13;


	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->btn_point = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->btn_znak = (gcnew System::Windows::Forms::Button());
			this->btn_div = (gcnew System::Windows::Forms::Button());
			this->btn_mult = (gcnew System::Windows::Forms::Button());
			this->btn_add = (gcnew System::Windows::Forms::Button());
			this->btn_AC = (gcnew System::Windows::Forms::Button());
			this->btn_min = (gcnew System::Windows::Forms::Button());
			this->btn_result = (gcnew System::Windows::Forms::Button());
			this->butn_percent = (gcnew System::Windows::Forms::Button());
			this->butn_sqrt = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(18, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(361, 39);
			this->label1->TabIndex = 0;
			this->label1->Text = L"0";
			this->label1->TextAlign = System::Drawing::ContentAlignment::BottomRight;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(90, 156);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(60, 60);
			this->button1->TabIndex = 1;
			this->button1->Text = L"7";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::btn_num_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(165, 156);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(60, 60);
			this->button2->TabIndex = 2;
			this->button2->Text = L"8";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::btn_num_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(243, 156);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(60, 60);
			this->button3->TabIndex = 3;
			this->button3->Text = L"9";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::btn_num_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(90, 231);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(60, 60);
			this->button4->TabIndex = 4;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::btn_num_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(165, 231);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(60, 60);
			this->button5->TabIndex = 5;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::btn_num_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(243, 231);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(60, 60);
			this->button6->TabIndex = 6;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::btn_num_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(90, 308);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(60, 60);
			this->button7->TabIndex = 7;
			this->button7->Text = L"1";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::btn_num_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(165, 308);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(60, 60);
			this->button8->TabIndex = 8;
			this->button8->Text = L"2";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::btn_num_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(243, 308);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(60, 60);
			this->button9->TabIndex = 9;
			this->button9->Text = L"3";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::btn_num_Click);
			// 
			// btn_point
			// 
			this->btn_point->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btn_point->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_point->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_point->Location = System::Drawing::Point(90, 384);
			this->btn_point->Name = L"btn_point";
			this->btn_point->Size = System::Drawing::Size(60, 60);
			this->btn_point->TabIndex = 10;
			this->btn_point->Text = L".";
			this->btn_point->UseVisualStyleBackColor = false;
			this->btn_point->Click += gcnew System::EventHandler(this, &MyForm::btn_point_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->Location = System::Drawing::Point(165, 384);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(60, 60);
			this->button11->TabIndex = 11;
			this->button11->Text = L"0";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::btn_num_Click);
			// 
			// btn_znak
			// 
			this->btn_znak->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btn_znak->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_znak->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_znak->Location = System::Drawing::Point(243, 384);
			this->btn_znak->Name = L"btn_znak";
			this->btn_znak->Size = System::Drawing::Size(60, 60);
			this->btn_znak->TabIndex = 12;
			this->btn_znak->Text = L"+/-";
			this->btn_znak->UseVisualStyleBackColor = false;
			this->btn_znak->Click += gcnew System::EventHandler(this, &MyForm::btn_znak_Click);
			// 
			// btn_div
			// 
			this->btn_div->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btn_div->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_div->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_div->Location = System::Drawing::Point(319, 384);
			this->btn_div->Name = L"btn_div";
			this->btn_div->Size = System::Drawing::Size(60, 60);
			this->btn_div->TabIndex = 13;
			this->btn_div->Text = L"/";
			this->btn_div->UseVisualStyleBackColor = false;
			this->btn_div->Click += gcnew System::EventHandler(this, &MyForm::btn_div_Click);
			// 
			// btn_mult
			// 
			this->btn_mult->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btn_mult->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_mult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_mult->Location = System::Drawing::Point(319, 308);
			this->btn_mult->Name = L"btn_mult";
			this->btn_mult->Size = System::Drawing::Size(60, 60);
			this->btn_mult->TabIndex = 14;
			this->btn_mult->Text = L"*";
			this->btn_mult->UseVisualStyleBackColor = false;
			this->btn_mult->Click += gcnew System::EventHandler(this, &MyForm::btn_mult_Click);
			// 
			// btn_add
			// 
			this->btn_add->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btn_add->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_add->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_add->Location = System::Drawing::Point(318, 156);
			this->btn_add->Name = L"btn_add";
			this->btn_add->Size = System::Drawing::Size(60, 60);
			this->btn_add->TabIndex = 16;
			this->btn_add->Text = L"+";
			this->btn_add->UseVisualStyleBackColor = false;
			this->btn_add->Click += gcnew System::EventHandler(this, &MyForm::btn_add_Click);
			// 
			// btn_AC
			// 
			this->btn_AC->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btn_AC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_AC->Location = System::Drawing::Point(12, 84);
			this->btn_AC->Name = L"btn_AC";
			this->btn_AC->Size = System::Drawing::Size(180, 60);
			this->btn_AC->TabIndex = 17;
			this->btn_AC->Text = L"AC";
			this->btn_AC->UseVisualStyleBackColor = false;
			this->btn_AC->Click += gcnew System::EventHandler(this, &MyForm::btn_AC_Click);
			// 
			// btn_min
			// 
			this->btn_min->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btn_min->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_min->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_min->Location = System::Drawing::Point(318, 231);
			this->btn_min->Name = L"btn_min";
			this->btn_min->Size = System::Drawing::Size(60, 60);
			this->btn_min->TabIndex = 19;
			this->btn_min->Text = L"-";
			this->btn_min->UseMnemonic = false;
			this->btn_min->UseVisualStyleBackColor = false;
			this->btn_min->Click += gcnew System::EventHandler(this, &MyForm::btn_min_Click);
			// 
			// btn_result
			// 
			this->btn_result->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btn_result->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_result->Location = System::Drawing::Point(198, 84);
			this->btn_result->Name = L"btn_result";
			this->btn_result->Size = System::Drawing::Size(180, 60);
			this->btn_result->TabIndex = 20;
			this->btn_result->Text = L"=";
			this->btn_result->UseVisualStyleBackColor = false;
			this->btn_result->Click += gcnew System::EventHandler(this, &MyForm::btn_result_Click);
			// 
			// butn_percent
			// 
			this->butn_percent->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->butn_percent->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->butn_percent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->butn_percent->Location = System::Drawing::Point(12, 156);
			this->butn_percent->Name = L"butn_percent";
			this->butn_percent->Size = System::Drawing::Size(60, 88);
			this->butn_percent->TabIndex = 21;
			this->butn_percent->Text = L"%";
			this->butn_percent->UseVisualStyleBackColor = false;
			this->butn_percent->Click += gcnew System::EventHandler(this, &MyForm::butn_percent_Click);
			// 
			// butn_sqrt
			// 
			this->butn_sqrt->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->butn_sqrt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->butn_sqrt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->butn_sqrt->Location = System::Drawing::Point(12, 250);
			this->butn_sqrt->Name = L"butn_sqrt";
			this->butn_sqrt->Size = System::Drawing::Size(60, 90);
			this->butn_sqrt->TabIndex = 22;
			this->butn_sqrt->Text = L"^";
			this->butn_sqrt->UseVisualStyleBackColor = false;
			this->butn_sqrt->Click += gcnew System::EventHandler(this, &MyForm::butn_sqrt_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button13->Location = System::Drawing::Point(12, 346);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(60, 95);
			this->button13->TabIndex = 23;
			this->button13->Text = L"sqrt";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(400, 453);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->butn_sqrt);
			this->Controls->Add(this->butn_percent);
			this->Controls->Add(this->btn_result);
			this->Controls->Add(this->btn_min);
			this->Controls->Add(this->btn_AC);
			this->Controls->Add(this->btn_add);
			this->Controls->Add(this->btn_mult);
			this->Controls->Add(this->btn_div);
			this->Controls->Add(this->btn_znak);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->btn_point);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Калькулятор";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

    private:System::Void btn_num_Click(System::Object^ sender, System::EventArgs^ e) {
	Button^ btn = safe_cast <Button^>(sender);
	if (this->label1->Text == "0")
		this->label1->Text = btn->Text;
	else
		this->label1->Text = this->label1->Text + btn->Text;
    }

private:  double num1;
private: char op;

	private: System::Void btn_add_Click(System::Object^ sender, System::EventArgs^ e) {
		this->op = '+';
		this->num1 = System::Convert::ToDouble(this->label1->Text);
		this->label1->Text = "0";
	}

    private: System::Void btn_min_Click(System::Object^ sender, System::EventArgs^ e) {
		this->op = '-';
		this->num1 = System::Convert::ToDouble(this->label1->Text);
		this->label1->Text = "0";
    }

    private: System::Void btn_mult_Click(System::Object^ sender, System::EventArgs^ e) {
	this->op = '*';
	this->num1 = System::Convert::ToDouble(this->label1->Text);
	this->label1->Text = "0";
    }

    private: System::Void btn_div_Click(System::Object^ sender, System::EventArgs^ e) {
	this->op = '/';
	this->num1 = System::Convert::ToDouble(this->label1->Text);
	this->label1->Text = "0";
    }

    private: System::Void btn_result_Click(System::Object^ sender, System::EventArgs^ e) {
	 double num2 = System::Convert::ToDouble(this->label1->Text);
	 double res = 0;
	switch (this->op)
		{
		case ('s'): res = sqrt(this->num1); break;
	    case ('^'): res = this->num1 * this->num1; break;
	    case ('%'): res = (this->num1/100) * num2; break;
		case ('+'): res = this->num1 + num2; break;
		case ('-'): res = this->num1 - num2; break;
		case ('*'): res = this->num1 * num2; break;
		case ('/'): 
			if (num2 == 0)
				MessageBox::Show("На ноль делить нельзя.","Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			else
				res = this->num1 / num2; 
			break;
		}
	this->label1->Text = System::Convert::ToString(res);
	}

    private: System::Void btn_AC_Click(System::Object^ sender, System::EventArgs^ e)
	{
		  this->label1->Text = "0";
		  this->op = ' ';
	}

    private: System::Void btn_znak_Click(System::Object^ sender, System::EventArgs^ e) 
    {
		this->label1->Text = System::Convert::ToString(System::Convert::ToDouble(this->label1->Text) * -1);
    }
    private: System::Void btn_point_Click(System::Object^ sender, System::EventArgs^ e) 
    {
		if (!this->label1->Text->Contains(","))this->label1->Text = this->label1->Text + ",";
    }

    private: System::Void butn_percent_Click(System::Object^ sender, System::EventArgs^ e) {
		this->op = '%';
		this->num1 = System::Convert::ToDouble(this->label1->Text);
		this->label1->Text = "0";
    }
    
    private: System::Void butn_sqrt_Click(System::Object^ sender, System::EventArgs^ e) {
		this->op = '^';
		this->num1 = System::Convert::ToDouble(this->label1->Text);
		this->label1->Text = "0";
	}
	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
		this->op = 's';
		this->num1 = System::Convert::ToDouble(this->label1->Text);
		this->label1->Text = "0";
	}
};
}
