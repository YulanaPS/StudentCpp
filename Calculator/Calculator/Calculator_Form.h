#pragma once
namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Calculator_Form
	/// </summary>
	public ref class Calculator_Form : public System::Windows::Forms::Form
	{
	public:
		Calculator_Form(void)
		{
			InitializeComponent();
			
			textBox1->Text = "0";
			label2->Text = "";
			label2->Select();
		}

		bool flag = false;
		bool flag1 = false;
		double a, b, c;
		int op = 0;

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Calculator_Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  percent;
	private: System::Windows::Forms::Button^  sqrt;
	private: System::Windows::Forms::Button^  sqr;
	private: System::Windows::Forms::Button^  min_sqr;
	private: System::Windows::Forms::Button^  division;





	private: System::Windows::Forms::Button^  del_but;

	private: System::Windows::Forms::Button^  C;

	private: System::Windows::Forms::Button^  CE;
	private: System::Windows::Forms::Button^  multiplication;


	private: System::Windows::Forms::Button^  nine;

	private: System::Windows::Forms::Button^  eight;

	private: System::Windows::Forms::Button^  seven;
	private: System::Windows::Forms::Button^  minus;


	private: System::Windows::Forms::Button^  six;

	private: System::Windows::Forms::Button^  five;

	private: System::Windows::Forms::Button^  four;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  plus;

	private: System::Windows::Forms::Button^  three;

	private: System::Windows::Forms::Button^  two;

	private: System::Windows::Forms::Button^  one;
	private: System::Windows::Forms::Button^  equality;
	private: System::Windows::Forms::Button^  point;



	private: System::Windows::Forms::Button^  zero;

	private: System::Windows::Forms::Button^  sign;


	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Calculator_Form::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->percent = (gcnew System::Windows::Forms::Button());
			this->sqrt = (gcnew System::Windows::Forms::Button());
			this->sqr = (gcnew System::Windows::Forms::Button());
			this->min_sqr = (gcnew System::Windows::Forms::Button());
			this->division = (gcnew System::Windows::Forms::Button());
			this->del_but = (gcnew System::Windows::Forms::Button());
			this->C = (gcnew System::Windows::Forms::Button());
			this->CE = (gcnew System::Windows::Forms::Button());
			this->multiplication = (gcnew System::Windows::Forms::Button());
			this->nine = (gcnew System::Windows::Forms::Button());
			this->eight = (gcnew System::Windows::Forms::Button());
			this->seven = (gcnew System::Windows::Forms::Button());
			this->minus = (gcnew System::Windows::Forms::Button());
			this->six = (gcnew System::Windows::Forms::Button());
			this->five = (gcnew System::Windows::Forms::Button());
			this->four = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->plus = (gcnew System::Windows::Forms::Button());
			this->three = (gcnew System::Windows::Forms::Button());
			this->two = (gcnew System::Windows::Forms::Button());
			this->one = (gcnew System::Windows::Forms::Button());
			this->equality = (gcnew System::Windows::Forms::Button());
			this->point = (gcnew System::Windows::Forms::Button());
			this->zero = (gcnew System::Windows::Forms::Button());
			this->sign = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(206, 3);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 33);
			this->label1->TabIndex = 0;
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(2, 37);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(300, 40);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Calculator_Form::textBox1_KeyPress);
			// 
			// percent
			// 
			this->percent->BackColor = System::Drawing::SystemColors::Control;
			this->percent->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"percent.BackgroundImage")));
			this->percent->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->percent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->percent->Location = System::Drawing::Point(2, 78);
			this->percent->Name = L"percent";
			this->percent->Size = System::Drawing::Size(75, 50);
			this->percent->TabIndex = 2;
			this->percent->UseVisualStyleBackColor = false;
			this->percent->Click += gcnew System::EventHandler(this, &Calculator_Form::percent_Click);
			// 
			// sqrt
			// 
			this->sqrt->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"sqrt.BackgroundImage")));
			this->sqrt->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->sqrt->Location = System::Drawing::Point(77, 78);
			this->sqrt->Name = L"sqrt";
			this->sqrt->Size = System::Drawing::Size(75, 50);
			this->sqrt->TabIndex = 3;
			this->sqrt->UseVisualStyleBackColor = true;
			this->sqrt->Click += gcnew System::EventHandler(this, &Calculator_Form::sqrt_Click);
			// 
			// sqr
			// 
			this->sqr->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"sqr.BackgroundImage")));
			this->sqr->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->sqr->Location = System::Drawing::Point(152, 78);
			this->sqr->Name = L"sqr";
			this->sqr->Size = System::Drawing::Size(75, 50);
			this->sqr->TabIndex = 4;
			this->sqr->UseVisualStyleBackColor = true;
			this->sqr->Click += gcnew System::EventHandler(this, &Calculator_Form::sqr_Click);
			// 
			// min_sqr
			// 
			this->min_sqr->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"min_sqr.BackgroundImage")));
			this->min_sqr->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->min_sqr->Location = System::Drawing::Point(227, 78);
			this->min_sqr->Name = L"min_sqr";
			this->min_sqr->Size = System::Drawing::Size(75, 50);
			this->min_sqr->TabIndex = 5;
			this->min_sqr->UseVisualStyleBackColor = true;
			this->min_sqr->Click += gcnew System::EventHandler(this, &Calculator_Form::min_sqr_Click);
			// 
			// division
			// 
			this->division->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->division->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->division->Location = System::Drawing::Point(226, 128);
			this->division->Name = L"division";
			this->division->Size = System::Drawing::Size(75, 50);
			this->division->TabIndex = 9;
			this->division->Text = L"/";
			this->division->UseVisualStyleBackColor = false;
			this->division->Click += gcnew System::EventHandler(this, &Calculator_Form::division_Click);
			// 
			// del_but
			// 
			this->del_but->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"del_but.BackgroundImage")));
			this->del_but->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->del_but->Location = System::Drawing::Point(151, 128);
			this->del_but->Name = L"del_but";
			this->del_but->Size = System::Drawing::Size(75, 50);
			this->del_but->TabIndex = 8;
			this->del_but->UseVisualStyleBackColor = true;
			this->del_but->Click += gcnew System::EventHandler(this, &Calculator_Form::del_but_Click);
			// 
			// C
			// 
			this->C->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C.BackgroundImage")));
			this->C->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->C->Location = System::Drawing::Point(76, 128);
			this->C->Name = L"C";
			this->C->Size = System::Drawing::Size(75, 50);
			this->C->TabIndex = 7;
			this->C->UseVisualStyleBackColor = true;
			this->C->Click += gcnew System::EventHandler(this, &Calculator_Form::C_Click);
			// 
			// CE
			// 
			this->CE->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CE.BackgroundImage")));
			this->CE->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->CE->Location = System::Drawing::Point(1, 128);
			this->CE->Name = L"CE";
			this->CE->Size = System::Drawing::Size(75, 50);
			this->CE->TabIndex = 6;
			this->CE->UseVisualStyleBackColor = true;
			this->CE->Click += gcnew System::EventHandler(this, &Calculator_Form::CE_Click);
			// 
			// multiplication
			// 
			this->multiplication->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->multiplication->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->multiplication->Location = System::Drawing::Point(226, 178);
			this->multiplication->Name = L"multiplication";
			this->multiplication->Size = System::Drawing::Size(75, 50);
			this->multiplication->TabIndex = 13;
			this->multiplication->Text = L"*";
			this->multiplication->UseVisualStyleBackColor = false;
			this->multiplication->Click += gcnew System::EventHandler(this, &Calculator_Form::multiplication_Click);
			// 
			// nine
			// 
			this->nine->BackColor = System::Drawing::Color::White;
			this->nine->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->nine->Location = System::Drawing::Point(151, 178);
			this->nine->Name = L"nine";
			this->nine->Size = System::Drawing::Size(75, 50);
			this->nine->TabIndex = 12;
			this->nine->Text = L"9";
			this->nine->UseVisualStyleBackColor = false;
			this->nine->Click += gcnew System::EventHandler(this, &Calculator_Form::nine_Click);
			// 
			// eight
			// 
			this->eight->BackColor = System::Drawing::Color::White;
			this->eight->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->eight->Location = System::Drawing::Point(76, 178);
			this->eight->Name = L"eight";
			this->eight->Size = System::Drawing::Size(75, 50);
			this->eight->TabIndex = 11;
			this->eight->Text = L"8";
			this->eight->UseVisualStyleBackColor = false;
			this->eight->Click += gcnew System::EventHandler(this, &Calculator_Form::eight_Click);
			// 
			// seven
			// 
			this->seven->BackColor = System::Drawing::Color::White;
			this->seven->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->seven->Location = System::Drawing::Point(1, 178);
			this->seven->Name = L"seven";
			this->seven->Size = System::Drawing::Size(75, 50);
			this->seven->TabIndex = 10;
			this->seven->Text = L"7";
			this->seven->UseVisualStyleBackColor = false;
			this->seven->Click += gcnew System::EventHandler(this, &Calculator_Form::seven_Click);
			// 
			// minus
			// 
			this->minus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->minus->Location = System::Drawing::Point(227, 228);
			this->minus->Name = L"minus";
			this->minus->Size = System::Drawing::Size(75, 50);
			this->minus->TabIndex = 17;
			this->minus->Text = L"-";
			this->minus->UseVisualStyleBackColor = false;
			this->minus->Click += gcnew System::EventHandler(this, &Calculator_Form::minus_Click);
			// 
			// six
			// 
			this->six->BackColor = System::Drawing::Color::White;
			this->six->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->six->Location = System::Drawing::Point(152, 228);
			this->six->Name = L"six";
			this->six->Size = System::Drawing::Size(75, 50);
			this->six->TabIndex = 16;
			this->six->Text = L"6";
			this->six->UseVisualStyleBackColor = false;
			this->six->Click += gcnew System::EventHandler(this, &Calculator_Form::six_Click);
			// 
			// five
			// 
			this->five->BackColor = System::Drawing::Color::White;
			this->five->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->five->Location = System::Drawing::Point(77, 228);
			this->five->Name = L"five";
			this->five->Size = System::Drawing::Size(75, 50);
			this->five->TabIndex = 15;
			this->five->Text = L"5";
			this->five->UseVisualStyleBackColor = false;
			this->five->Click += gcnew System::EventHandler(this, &Calculator_Form::five_Click);
			// 
			// four
			// 
			this->four->BackColor = System::Drawing::Color::White;
			this->four->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->four->Location = System::Drawing::Point(2, 228);
			this->four->Name = L"four";
			this->four->Size = System::Drawing::Size(75, 50);
			this->four->TabIndex = 14;
			this->four->Text = L"4";
			this->four->UseVisualStyleBackColor = false;
			this->four->Click += gcnew System::EventHandler(this, &Calculator_Form::four_Click);
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::Silver;
			this->label2->Location = System::Drawing::Point(1, 1);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(308, 33);
			this->label2->TabIndex = 18;
			this->label2->Text = L"label2";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// plus
			// 
			this->plus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->plus->Location = System::Drawing::Point(226, 278);
			this->plus->Name = L"plus";
			this->plus->Size = System::Drawing::Size(75, 50);
			this->plus->TabIndex = 22;
			this->plus->Text = L"+";
			this->plus->UseVisualStyleBackColor = false;
			this->plus->Click += gcnew System::EventHandler(this, &Calculator_Form::plus_Click);
			// 
			// three
			// 
			this->three->BackColor = System::Drawing::Color::White;
			this->three->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->three->Location = System::Drawing::Point(151, 278);
			this->three->Name = L"three";
			this->three->Size = System::Drawing::Size(75, 50);
			this->three->TabIndex = 21;
			this->three->Text = L"3";
			this->three->UseVisualStyleBackColor = false;
			this->three->Click += gcnew System::EventHandler(this, &Calculator_Form::three_Click);
			// 
			// two
			// 
			this->two->BackColor = System::Drawing::Color::White;
			this->two->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->two->Location = System::Drawing::Point(76, 278);
			this->two->Name = L"two";
			this->two->Size = System::Drawing::Size(75, 50);
			this->two->TabIndex = 20;
			this->two->Text = L"2";
			this->two->UseVisualStyleBackColor = false;
			this->two->Click += gcnew System::EventHandler(this, &Calculator_Form::two_Click);
			// 
			// one
			// 
			this->one->BackColor = System::Drawing::Color::White;
			this->one->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->one->Location = System::Drawing::Point(1, 278);
			this->one->Name = L"one";
			this->one->Size = System::Drawing::Size(75, 50);
			this->one->TabIndex = 19;
			this->one->Text = L"1";
			this->one->UseVisualStyleBackColor = false;
			this->one->Click += gcnew System::EventHandler(this, &Calculator_Form::one_Click);
			// 
			// equality
			// 
			this->equality->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->equality->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->equality->Location = System::Drawing::Point(227, 328);
			this->equality->Name = L"equality";
			this->equality->Size = System::Drawing::Size(75, 50);
			this->equality->TabIndex = 26;
			this->equality->Text = L"=";
			this->equality->UseVisualStyleBackColor = false;
			this->equality->Click += gcnew System::EventHandler(this, &Calculator_Form::equality_Click);
			// 
			// point
			// 
			this->point->BackColor = System::Drawing::Color::White;
			this->point->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->point->Location = System::Drawing::Point(152, 328);
			this->point->Name = L"point";
			this->point->Size = System::Drawing::Size(75, 50);
			this->point->TabIndex = 25;
			this->point->Text = L",";
			this->point->UseVisualStyleBackColor = false;
			this->point->Click += gcnew System::EventHandler(this, &Calculator_Form::point_Click);
			// 
			// zero
			// 
			this->zero->BackColor = System::Drawing::Color::White;
			this->zero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->zero->Location = System::Drawing::Point(77, 328);
			this->zero->Name = L"zero";
			this->zero->Size = System::Drawing::Size(75, 50);
			this->zero->TabIndex = 24;
			this->zero->Text = L"0";
			this->zero->UseVisualStyleBackColor = false;
			this->zero->Click += gcnew System::EventHandler(this, &Calculator_Form::zero_Click);
			// 
			// sign
			// 
			this->sign->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"sign.BackgroundImage")));
			this->sign->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->sign->Location = System::Drawing::Point(2, 328);
			this->sign->Name = L"sign";
			this->sign->Size = System::Drawing::Size(75, 50);
			this->sign->TabIndex = 23;
			this->sign->UseVisualStyleBackColor = true;
			this->sign->Click += gcnew System::EventHandler(this, &Calculator_Form::sign_Click);
			// 
			// Calculator_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(303, 379);
			this->Controls->Add(this->equality);
			this->Controls->Add(this->point);
			this->Controls->Add(this->zero);
			this->Controls->Add(this->sign);
			this->Controls->Add(this->plus);
			this->Controls->Add(this->three);
			this->Controls->Add(this->two);
			this->Controls->Add(this->one);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->minus);
			this->Controls->Add(this->six);
			this->Controls->Add(this->five);
			this->Controls->Add(this->four);
			this->Controls->Add(this->multiplication);
			this->Controls->Add(this->nine);
			this->Controls->Add(this->eight);
			this->Controls->Add(this->seven);
			this->Controls->Add(this->division);
			this->Controls->Add(this->del_but);
			this->Controls->Add(this->C);
			this->Controls->Add(this->CE);
			this->Controls->Add(this->min_sqr);
			this->Controls->Add(this->sqr);
			this->Controls->Add(this->sqrt);
			this->Controls->Add(this->percent);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->KeyPreview = true;
			this->Name = L"Calculator_Form";
			this->Text = L"Calculator_Form";
			this->Load += gcnew System::EventHandler(this, &Calculator_Form::Calculator_Form_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Calculator_Form::Calculator_Form_KeyDown);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void Calculator_Form_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void zero_Click(System::Object^  sender, System::EventArgs^  e) {
	if (flag == true)
	{
		textBox1->Text = "0";
		flag = false;
	}
	else if (textBox1->Text != "0") textBox1->Text += "0";
	label2->Select();
}
private: System::Void point_Click(System::Object^  sender, System::EventArgs^  e) {
	if (flag == true)
	{
		textBox1->Text = "0,";
		flag = false;
		flag1 = true;
	}
	else
	{
		if (textBox1->Text[textBox1->Text->Length - 1] != ',')
			textBox1->Text += ",";
	}
	label2->Select();
}
private: System::Void one_Click(System::Object^  sender, System::EventArgs^  e) {
	if (flag == true)
	{
		textBox1->Text = "1";
		flag = false;
		flag1 = true;
	}
	else
	{
		if (textBox1->Text == "0") textBox1->Text = "1";
		else textBox1->Text += "1";
	}
	label2->Select();
}
private: System::Void two_Click(System::Object^  sender, System::EventArgs^  e) {
	if (flag == true)
	{
		textBox1->Text = "2";
		flag = false;
		flag1 = true;
	}
	else
	{
		if (textBox1->Text == "0") textBox1->Text = "2";
		else textBox1->Text += "2";
	}
	label2->Select();
}
private: System::Void three_Click(System::Object^  sender, System::EventArgs^  e) {
	if (flag == true)
	{
		textBox1->Text = "3";
		flag = false;
		flag1 = true;
	}
	else
	{
		if (textBox1->Text == "0") textBox1->Text = "3";
		else textBox1->Text += "3";
	}
	label2->Select();
}
private: System::Void four_Click(System::Object^  sender, System::EventArgs^  e) {
	if (flag == true)
	{
		textBox1->Text = "4";
		flag = false;
		flag1 = true;
	}
	else
	{
		if (textBox1->Text == "0") textBox1->Text = "4";
		else textBox1->Text += "4";
	}
	label2->Select();
}
private: System::Void five_Click(System::Object^  sender, System::EventArgs^  e) {
	if (flag == true)
	{
		textBox1->Text = "5";
		flag = false;
		flag1 = true;
	}
	else
	{
		if (textBox1->Text == "0") textBox1->Text = "5";
		else textBox1->Text += "5";
	}
	label2->Select();
}
private: System::Void six_Click(System::Object^  sender, System::EventArgs^  e) {
	if (flag == true)
	{
		textBox1->Text = "6";
		flag = false;
		flag1 = true;
	}
	else
	{
		if (textBox1->Text == "0") textBox1->Text = "6";
		else textBox1->Text += "6";
	}
	label2->Select();
}
private: System::Void seven_Click(System::Object^  sender, System::EventArgs^  e) {
	if (flag == true)
	{
		textBox1->Text = "7";
		flag = false;
		flag1 = true;
	}
	else
	{
		if (textBox1->Text == "0") textBox1->Text = "7";
		else textBox1->Text += "7";
	}
	label2->Select();
}
private: System::Void eight_Click(System::Object^  sender, System::EventArgs^  e) {
	if (flag == true)
	{
		textBox1->Text = "8";
		flag = false;
		flag1 = true;
	}
	else
	{
		if (textBox1->Text == "0") textBox1->Text = "8";
		else textBox1->Text += "8";
	}
	label2->Select();
}
private: System::Void nine_Click(System::Object^  sender, System::EventArgs^  e) {
	if (flag == true)
	{
		textBox1->Text = "9";
		flag = false;
		flag1 = true;
	}
	else
	{
		if (textBox1->Text == "0") textBox1->Text = "9";
		else textBox1->Text += "9";
	}
	label2->Select();
}
private: System::Void division_Click(System::Object^  sender, System::EventArgs^  e) {
	flag = true;
	if (flag1 == false)
	{
		label2->Text = textBox1->Text + "/";
		a = System::Double::Parse(textBox1->Text);
		op = 1;
	}
	else
	{
		b = System::Double::Parse(textBox1->Text);
		switch (op)
		{
		case 1:
			c = a / b;
			break;
		case 2:
			c = a * b;
			break;
		case 3:
			c = a - b;
			break;
		case 4:
			c = a + b;
			break;
		default:
			break;
		}
		op = 1;
		textBox1->Text = c.ToString();
		label2->Text += b.ToString() + "/";
		a = c;
	}
	label2->Select();
}
private: System::Void multiplication_Click(System::Object^  sender, System::EventArgs^  e) {
	flag = true;
	if (flag1 == false)
	{
		label2->Text = textBox1->Text + "*";
		a = System::Double::Parse(textBox1->Text);
		op = 2;
	}
	else
	{
		b = System::Double::Parse(textBox1->Text);
		switch (op)
		{
		case 1:
			c = a / b;
			break;
		case 2:
			c = a * b;
			break;
		case 3:
			c = a - b;
			break;
		case 4:
			c = a + b;
			break;
		default:
			break;
		}
		op = 2;
		textBox1->Text = c.ToString();
		label2->Text += b.ToString() + "*";
		a = c;
	}
	label2->Select();
}
private: System::Void minus_Click(System::Object^  sender, System::EventArgs^  e) {
	flag = true;
	if (flag1 == false)
	{
		label2->Text = textBox1->Text + "-";
		a = System::Double::Parse(textBox1->Text);
		op = 3;
	}
	else
	{
		b = System::Double::Parse(textBox1->Text);
		switch (op)
		{
		case 1:
			c = a / b;
			break;
		case 2:
			c = a * b;
			break;
		case 3:
			c = a - b;
			break;
		case 4:
			c = a + b;
			break;
		default:
			break;
		}
		op = 3;
		textBox1->Text = c.ToString();
		label2->Text += b.ToString() + "-";
		a = c;
	}
	label2->Select();
}
private: System::Void plus_Click(System::Object^  sender, System::EventArgs^  e) {
	flag = true;
	if (flag1 == false)
	{
		label2->Text = textBox1->Text + "+";
		a = System::Double::Parse(textBox1->Text);
		op = 4;
	}
	else
	{
		b = System::Double::Parse(textBox1->Text);
		switch (op)
		{
		case 1:
			c = a / b;
			break;
		case 2:
			c = a * b;
			break;
		case 3:
			c = a - b;
			break;
		case 4:
			c = a + b;
			break;
		default:
			break;
		}
		op = 4;
		textBox1->Text = c.ToString();
		label2->Text += b.ToString() + "+";
		a = c;
	}
	label2->Select();
}
private: System::Void equality_Click(System::Object^  sender, System::EventArgs^  e) {
	b = System::Double::Parse(textBox1->Text);
	label2->Text = "";
	flag1 = false;

	switch (op)
	{
		case 1:
			c = a / b;
			textBox1->Text = c.ToString();
			break;
		case 2:
			c = a * b;
			textBox1->Text = c.ToString();
			break;
		case 3:
			c = a - b;
			textBox1->Text = c.ToString();
			break;
		case 4:
			c = a + b;
			textBox1->Text = c.ToString();
			break;
		default:
			break;
	}
	label2->Select();
}
private: System::Void C_Click(System::Object^  sender, System::EventArgs^  e) {
	a = 0;
	b = 0;
	flag = false;
	flag1 = false;
	label2->Text = "";
	textBox1->Text = "0";
	label2->Select();
}
private: System::Void CE_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox1->Text = "0";
	label2->Select();
}
private: System::Void del_but_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox1->Text = textBox1->Text->Substring(0, textBox1->Text->Length - 1);
	if (textBox1->Text == "") textBox1->Text = "0";
	label2->Select();
}
private: System::Void sign_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox1->Text != "0")
	{
		double d = System::Double::Parse(textBox1->Text);
		if (d > 0) textBox1->Text = "-" + textBox1->Text;
		else 
		{
			d = -1 * d;
			textBox1->Text = d.ToString();
		}
	}
	label2->Select();
}
private: System::Void percent_Click(System::Object^  sender, System::EventArgs^  e) {
	double d = System::Double::Parse(textBox1->Text);
	d = d / 100;
	textBox1->Text = d.ToString();
	label2->Select();
}
private: System::Void sqr_Click(System::Object^  sender, System::EventArgs^  e) {
	double d = System::Double::Parse(textBox1->Text);
	d = d * d;
	textBox1->Text = d.ToString();
	label2->Text += textBox1->Text;
	label2->Select();
}
private: System::Void min_sqr_Click(System::Object^  sender, System::EventArgs^  e) {
	double d = System::Double::Parse(textBox1->Text);
	d = 1 / d;
	textBox1->Text = d.ToString();
	label2->Text += textBox1->Text;
	label2->Select();
}
private: System::Void sqrt_Click(System::Object^  sender, System::EventArgs^  e) {
	double d = System::Double::Parse(textBox1->Text);
	d = System::Math::Sqrt(d);
	textBox1->Text = d.ToString();
	label2->Text += textBox1->Text;
	label2->Select();
}
private: System::Void Calculator_Form_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	if (e->KeyCode == Keys::NumPad0)
	{
		zero->PerformClick();
	}
	else if (e->KeyCode == Keys::NumPad1)
	{
		one->PerformClick();
	}
	else if (e->KeyCode == Keys::NumPad2)
	{
		two->PerformClick();
	}
	else if (e->KeyCode == Keys::NumPad3)
	{
		three->PerformClick();
	}
	else if (e->KeyCode == Keys::NumPad4)
	{
		four->PerformClick();
	}
	else if (e->KeyCode == Keys::NumPad5)
	{
		five->PerformClick();
	}
	else if (e->KeyCode == Keys::NumPad6)
	{
		six->PerformClick();
	}
	else if (e->KeyCode == Keys::NumPad7)
	{
		seven->PerformClick();
	}
	else if (e->KeyCode == Keys::NumPad8)
	{
		eight->PerformClick();
	}
	else if (e->KeyCode == Keys::NumPad9)
	{
		nine->PerformClick();
	}
	else if (e->KeyCode == Keys::Decimal)
	{
		point->PerformClick();
	}
	else if (e->KeyCode == Keys::Multiply)
	{
		multiplication->PerformClick();
	}
	else if (e->KeyCode == Keys::Add)
	{
		plus->PerformClick();
	}
	else if (e->KeyCode == Keys::Subtract)
	{
		minus->PerformClick();
	}
	else if (e->KeyCode == Keys::Divide)
	{
		division->PerformClick();
	}
	else if (e->KeyCode == Keys::Return)
	{
		equality->PerformClick();
	}
	else if (e->KeyCode == Keys::Escape)
	{ 
		C->PerformClick();
	}
	else if (e->KeyCode == Keys::Back)
	{
		del_but->PerformClick();
	}
	else if (e->KeyCode == Keys::End)
	{
		CE->PerformClick();
	}
}
private: System::Void textBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	e->Handled = true;
}
};
}
