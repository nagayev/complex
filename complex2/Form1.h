#pragma once
#include "complex.h"
#include "conv.h"
#include "form11.h"
namespace complex2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòðóêòîðà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ðåñóðñû.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  num1;
	protected: 
	private: System::Windows::Forms::TextBox^  num2;
	private: System::Windows::Forms::TextBox^  num3;
	private: System::Windows::Forms::Button^  plus;
	private: System::Windows::Forms::Button^  pow;
	private: System::Windows::Forms::Button^  minus;

	private: System::Windows::Forms::Button^  module;

	private: System::Windows::Forms::Button^  div;

	private: System::Windows::Forms::Button^  mul;
	private: System::Windows::Forms::Button^  cosc;
	private: System::Windows::Forms::Button^  sinc;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  îïåðàöèèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem2;


	private: System::Windows::Forms::ToolStripMenuItem^  ñïðàâêàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem3;






	private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  âûõîäToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  îÏðîãðàììåToolStripMenuItem;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::Button^  expc;

	private: System::Windows::Forms::Button^  logc;

	private: System::Windows::Forms::Button^  cothc;

	private: System::Windows::Forms::Button^  thc;

	private: System::Windows::Forms::Button^  chc;

	private: System::Windows::Forms::Button^  shc;

	private: System::Windows::Forms::Button^  ctgc;

	private: System::Windows::Forms::Button^  tgc;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem9;


	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem12;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem13;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem14;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem15;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem16;
	private: System::Windows::Forms::ToolStripMenuItem^  sinToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  cosToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  tgToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ctgToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  shToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  chToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  thToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  cothToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  logToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  expToolStripMenuItem;





	private:
		/// <summary>
		/// Òðåáóåòñÿ ïåðåìåííàÿ êîíñòðóêòîðà.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Îáÿçàòåëüíûé ìåòîä äëÿ ïîääåðæêè êîíñòðóêòîðà - íå èçìåíÿéòå
		/// ñîäåðæèìîå äàííîãî ìåòîäà ïðè ïîìîùè ðåäàêòîðà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->num1 = (gcnew System::Windows::Forms::TextBox());
			this->num2 = (gcnew System::Windows::Forms::TextBox());
			this->num3 = (gcnew System::Windows::Forms::TextBox());
			this->plus = (gcnew System::Windows::Forms::Button());
			this->pow = (gcnew System::Windows::Forms::Button());
			this->minus = (gcnew System::Windows::Forms::Button());
			this->cosc = (gcnew System::Windows::Forms::Button());
			this->sinc = (gcnew System::Windows::Forms::Button());
			this->module = (gcnew System::Windows::Forms::Button());
			this->div = (gcnew System::Windows::Forms::Button());
			this->mul = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->îïåðàöèèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem9 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem12 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem13 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem14 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem15 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem16 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sinToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cosToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tgToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ctgToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->shToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->chToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->thToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cothToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->logToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->expToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->âûõîäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñïðàâêàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îÏðîãðàììåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->expc = (gcnew System::Windows::Forms::Button());
			this->logc = (gcnew System::Windows::Forms::Button());
			this->cothc = (gcnew System::Windows::Forms::Button());
			this->thc = (gcnew System::Windows::Forms::Button());
			this->chc = (gcnew System::Windows::Forms::Button());
			this->shc = (gcnew System::Windows::Forms::Button());
			this->ctgc = (gcnew System::Windows::Forms::Button());
			this->tgc = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// num1
			// 
			this->num1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->num1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->num1->Location = System::Drawing::Point(3, 8);
			this->num1->Name = L"num1";
			this->num1->Size = System::Drawing::Size(205, 41);
			this->num1->TabIndex = 0;
			this->num1->TextChanged += gcnew System::EventHandler(this, &Form1::num1_TextChanged);
			// 
			// num2
			// 
			this->num2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->num2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->num2->Location = System::Drawing::Point(3, 61);
			this->num2->Name = L"num2";
			this->num2->Size = System::Drawing::Size(205, 41);
			this->num2->TabIndex = 1;
			this->num2->TextChanged += gcnew System::EventHandler(this, &Form1::num2_TextChanged);
			// 
			// num3
			// 
			this->num3->BackColor = System::Drawing::SystemColors::Window;
			this->num3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->num3->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->num3->Location = System::Drawing::Point(4, 115);
			this->num3->Name = L"num3";
			this->num3->ReadOnly = true;
			this->num3->Size = System::Drawing::Size(205, 41);
			this->num3->TabIndex = 2;
			this->num3->TextChanged += gcnew System::EventHandler(this, &Form1::num3_TextChanged);
			// 
			// plus
			// 
			this->plus->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->plus->Location = System::Drawing::Point(6, 3);
			this->plus->Name = L"plus";
			this->plus->Size = System::Drawing::Size(100, 40);
			this->plus->TabIndex = 3;
			this->plus->Text = L"+";
			this->plus->UseVisualStyleBackColor = true;
			this->plus->Click += gcnew System::EventHandler(this, &Form1::plus_Click);
			// 
			// pow
			// 
			this->pow->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->pow->Location = System::Drawing::Point(6, 83);
			this->pow->Name = L"pow";
			this->pow->Size = System::Drawing::Size(100, 40);
			this->pow->TabIndex = 4;
			this->pow->Text = L"^";
			this->pow->UseVisualStyleBackColor = true;
			this->pow->Click += gcnew System::EventHandler(this, &Form1::pow_Click);
			// 
			// minus
			// 
			this->minus->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->minus->Location = System::Drawing::Point(108, 3);
			this->minus->Name = L"minus";
			this->minus->Size = System::Drawing::Size(100, 40);
			this->minus->TabIndex = 5;
			this->minus->Text = L"-";
			this->minus->UseVisualStyleBackColor = true;
			this->minus->Click += gcnew System::EventHandler(this, &Form1::minus_Click);
			// 
			// cosc
			// 
			this->cosc->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->cosc->Location = System::Drawing::Point(109, 124);
			this->cosc->Name = L"cosc";
			this->cosc->Size = System::Drawing::Size(100, 40);
			this->cosc->TabIndex = 10;
			this->cosc->Text = L"cos";
			this->cosc->UseVisualStyleBackColor = true;
			this->cosc->Click += gcnew System::EventHandler(this, &Form1::cosc_Click);
			// 
			// sinc
			// 
			this->sinc->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->sinc->Location = System::Drawing::Point(6, 124);
			this->sinc->Name = L"sinc";
			this->sinc->Size = System::Drawing::Size(100, 40);
			this->sinc->TabIndex = 9;
			this->sinc->Text = L"sin";
			this->sinc->UseVisualStyleBackColor = true;
			this->sinc->Click += gcnew System::EventHandler(this, &Form1::sinc_Click);
			// 
			// module
			// 
			this->module->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->module->Location = System::Drawing::Point(108, 83);
			this->module->Name = L"module";
			this->module->Size = System::Drawing::Size(100, 40);
			this->module->TabIndex = 8;
			this->module->Text = L"| |";
			this->module->UseVisualStyleBackColor = true;
			this->module->Click += gcnew System::EventHandler(this, &Form1::module_Click);
			// 
			// div
			// 
			this->div->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->div->Location = System::Drawing::Point(108, 43);
			this->div->Name = L"div";
			this->div->Size = System::Drawing::Size(100, 40);
			this->div->TabIndex = 7;
			this->div->Text = L":";
			this->div->UseVisualStyleBackColor = true;
			this->div->Click += gcnew System::EventHandler(this, &Form1::div_Click);
			// 
			// mul
			// 
			this->mul->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->mul->Location = System::Drawing::Point(6, 43);
			this->mul->Name = L"mul";
			this->mul->Size = System::Drawing::Size(100, 40);
			this->mul->TabIndex = 6;
			this->mul->Text = L"*";
			this->mul->UseVisualStyleBackColor = true;
			this->mul->Click += gcnew System::EventHandler(this, &Form1::mul_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->îïåðàöèèToolStripMenuItem, 
				this->ñïðàâêàToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(482, 24);
			this->menuStrip1->TabIndex = 7;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// îïåðàöèèToolStripMenuItem
			// 
			this->îïåðàöèèToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->toolStripMenuItem2, 
				this->toolStripMenuItem3, this->toolStripMenuItem1, this->âûõîäToolStripMenuItem});
			this->îïåðàöèèToolStripMenuItem->Name = L"îïåðàöèèToolStripMenuItem";
			this->îïåðàöèèToolStripMenuItem->Size = System::Drawing::Size(75, 20);
			this->îïåðàöèèToolStripMenuItem->Text = L"&Îïåðàöèè";
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {this->toolStripMenuItem9, 
				this->toolStripMenuItem12, this->toolStripMenuItem13, this->toolStripMenuItem14, this->toolStripMenuItem15, this->toolStripMenuItem16, 
				this->sinToolStripMenuItem1, this->cosToolStripMenuItem1});
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(152, 22);
			this->toolStripMenuItem2->Text = L"Îïåðàöèè1";
			this->toolStripMenuItem2->Click += gcnew System::EventHandler(this, &Form1::plus_Click);
			// 
			// toolStripMenuItem9
			// 
			this->toolStripMenuItem9->Name = L"toolStripMenuItem9";
			this->toolStripMenuItem9->Size = System::Drawing::Size(92, 22);
			this->toolStripMenuItem9->Text = L"+";
			this->toolStripMenuItem9->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItem9_Click);
			// 
			// toolStripMenuItem12
			// 
			this->toolStripMenuItem12->Name = L"toolStripMenuItem12";
			this->toolStripMenuItem12->Size = System::Drawing::Size(92, 22);
			this->toolStripMenuItem12->Text = L" -";
			this->toolStripMenuItem12->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItem12_Click);
			// 
			// toolStripMenuItem13
			// 
			this->toolStripMenuItem13->Name = L"toolStripMenuItem13";
			this->toolStripMenuItem13->Size = System::Drawing::Size(92, 22);
			this->toolStripMenuItem13->Text = L"*";
			this->toolStripMenuItem13->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItem13_Click);
			// 
			// toolStripMenuItem14
			// 
			this->toolStripMenuItem14->Name = L"toolStripMenuItem14";
			this->toolStripMenuItem14->Size = System::Drawing::Size(92, 22);
			this->toolStripMenuItem14->Text = L":";
			this->toolStripMenuItem14->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItem14_Click);
			// 
			// toolStripMenuItem15
			// 
			this->toolStripMenuItem15->Name = L"toolStripMenuItem15";
			this->toolStripMenuItem15->Size = System::Drawing::Size(92, 22);
			this->toolStripMenuItem15->Text = L"^";
			this->toolStripMenuItem15->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItem15_Click);
			// 
			// toolStripMenuItem16
			// 
			this->toolStripMenuItem16->Name = L"toolStripMenuItem16";
			this->toolStripMenuItem16->Size = System::Drawing::Size(92, 22);
			this->toolStripMenuItem16->Text = L"| |";
			this->toolStripMenuItem16->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItem16_Click);
			// 
			// sinToolStripMenuItem1
			// 
			this->sinToolStripMenuItem1->Name = L"sinToolStripMenuItem1";
			this->sinToolStripMenuItem1->Size = System::Drawing::Size(92, 22);
			this->sinToolStripMenuItem1->Text = L"sin";
			this->sinToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::sinToolStripMenuItem1_Click);
			// 
			// cosToolStripMenuItem1
			// 
			this->cosToolStripMenuItem1->Name = L"cosToolStripMenuItem1";
			this->cosToolStripMenuItem1->Size = System::Drawing::Size(92, 22);
			this->cosToolStripMenuItem1->Text = L"cos";
			this->cosToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::cosToolStripMenuItem1_Click);
			// 
			// toolStripMenuItem3
			// 
			this->toolStripMenuItem3->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {this->tgToolStripMenuItem, 
				this->ctgToolStripMenuItem, this->shToolStripMenuItem, this->chToolStripMenuItem, this->thToolStripMenuItem, this->cothToolStripMenuItem, 
				this->logToolStripMenuItem, this->expToolStripMenuItem});
			this->toolStripMenuItem3->Name = L"toolStripMenuItem3";
			this->toolStripMenuItem3->Size = System::Drawing::Size(152, 22);
			this->toolStripMenuItem3->Text = L"Îïåðàöèè2";
			this->toolStripMenuItem3->Click += gcnew System::EventHandler(this, &Form1::minus_Click);
			// 
			// tgToolStripMenuItem
			// 
			this->tgToolStripMenuItem->Name = L"tgToolStripMenuItem";
			this->tgToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->tgToolStripMenuItem->Text = L"tg";
			this->tgToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::tgToolStripMenuItem_Click);
			// 
			// ctgToolStripMenuItem
			// 
			this->ctgToolStripMenuItem->Name = L"ctgToolStripMenuItem";
			this->ctgToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->ctgToolStripMenuItem->Text = L"ctg";
			this->ctgToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::ctgToolStripMenuItem_Click);
			// 
			// shToolStripMenuItem
			// 
			this->shToolStripMenuItem->Name = L"shToolStripMenuItem";
			this->shToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->shToolStripMenuItem->Text = L"sh";
			this->shToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::shToolStripMenuItem_Click);
			// 
			// chToolStripMenuItem
			// 
			this->chToolStripMenuItem->Name = L"chToolStripMenuItem";
			this->chToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->chToolStripMenuItem->Text = L"ch";
			this->chToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::chToolStripMenuItem_Click);
			// 
			// thToolStripMenuItem
			// 
			this->thToolStripMenuItem->Name = L"thToolStripMenuItem";
			this->thToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->thToolStripMenuItem->Text = L"th";
			this->thToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::thToolStripMenuItem_Click);
			// 
			// cothToolStripMenuItem
			// 
			this->cothToolStripMenuItem->Name = L"cothToolStripMenuItem";
			this->cothToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->cothToolStripMenuItem->Text = L"coth";
			this->cothToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::cothToolStripMenuItem_Click);
			// 
			// logToolStripMenuItem
			// 
			this->logToolStripMenuItem->Name = L"logToolStripMenuItem";
			this->logToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->logToolStripMenuItem->Text = L"log";
			this->logToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::logToolStripMenuItem_Click);
			// 
			// expToolStripMenuItem
			// 
			this->expToolStripMenuItem->Name = L"expToolStripMenuItem";
			this->expToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->expToolStripMenuItem->Text = L"exp";
			this->expToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::expToolStripMenuItem_Click);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(149, 6);
			// 
			// âûõîäToolStripMenuItem
			// 
			this->âûõîäToolStripMenuItem->Name = L"âûõîäToolStripMenuItem";
			this->âûõîäToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->âûõîäToolStripMenuItem->Text = L"&Âûõîä";
			this->âûõîäToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::âûõîäToolStripMenuItem_Click);
			// 
			// ñïðàâêàToolStripMenuItem
			// 
			this->ñïðàâêàToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->îÏðîãðàììåToolStripMenuItem});
			this->ñïðàâêàToolStripMenuItem->Name = L"ñïðàâêàToolStripMenuItem";
			this->ñïðàâêàToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->ñïðàâêàToolStripMenuItem->Text = L"&Ñïðàâêà";
			// 
			// îÏðîãðàììåToolStripMenuItem
			// 
			this->îÏðîãðàììåToolStripMenuItem->Name = L"îÏðîãðàììåToolStripMenuItem";
			this->îÏðîãðàììåToolStripMenuItem->Size = System::Drawing::Size(149, 22);
			this->îÏðîãðàììåToolStripMenuItem->Text = L"&Î ïðîãðàììå";
			this->îÏðîãðàììåToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::îÏðîãðàììåToolStripMenuItem_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->num1);
			this->panel2->Controls->Add(this->num2);
			this->panel2->Controls->Add(this->num3);
			this->panel2->Location = System::Drawing::Point(12, 52);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(216, 172);
			this->panel2->TabIndex = 8;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(234, 30);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(225, 194);
			this->tabControl1->TabIndex = 9;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->tabPage1->Controls->Add(this->cosc);
			this->tabPage1->Controls->Add(this->plus);
			this->tabPage1->Controls->Add(this->minus);
			this->tabPage1->Controls->Add(this->sinc);
			this->tabPage1->Controls->Add(this->mul);
			this->tabPage1->Controls->Add(this->div);
			this->tabPage1->Controls->Add(this->module);
			this->tabPage1->Controls->Add(this->pow);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(217, 168);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Îïåðàöèè1";
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->tabPage2->Controls->Add(this->expc);
			this->tabPage2->Controls->Add(this->logc);
			this->tabPage2->Controls->Add(this->cothc);
			this->tabPage2->Controls->Add(this->thc);
			this->tabPage2->Controls->Add(this->chc);
			this->tabPage2->Controls->Add(this->shc);
			this->tabPage2->Controls->Add(this->ctgc);
			this->tabPage2->Controls->Add(this->tgc);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(217, 168);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Îïåðàöèè2";
			// 
			// expc
			// 
			this->expc->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->expc->Location = System::Drawing::Point(111, 124);
			this->expc->Name = L"expc";
			this->expc->Size = System::Drawing::Size(100, 40);
			this->expc->TabIndex = 11;
			this->expc->Text = L"exp";
			this->expc->UseVisualStyleBackColor = true;
			this->expc->Click += gcnew System::EventHandler(this, &Form1::expc_Click);
			// 
			// logc
			// 
			this->logc->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->logc->Location = System::Drawing::Point(6, 124);
			this->logc->Name = L"logc";
			this->logc->Size = System::Drawing::Size(100, 40);
			this->logc->TabIndex = 10;
			this->logc->Text = L"log";
			this->logc->UseVisualStyleBackColor = true;
			this->logc->Click += gcnew System::EventHandler(this, &Form1::logc_Click);
			// 
			// cothc
			// 
			this->cothc->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->cothc->Location = System::Drawing::Point(111, 83);
			this->cothc->Name = L"cothc";
			this->cothc->Size = System::Drawing::Size(100, 40);
			this->cothc->TabIndex = 9;
			this->cothc->Text = L"coth";
			this->cothc->UseVisualStyleBackColor = true;
			this->cothc->Click += gcnew System::EventHandler(this, &Form1::cothc_Click);
			// 
			// thc
			// 
			this->thc->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->thc->Location = System::Drawing::Point(6, 83);
			this->thc->Name = L"thc";
			this->thc->Size = System::Drawing::Size(100, 40);
			this->thc->TabIndex = 8;
			this->thc->Text = L"th";
			this->thc->UseVisualStyleBackColor = true;
			this->thc->Click += gcnew System::EventHandler(this, &Form1::thc_Click);
			// 
			// chc
			// 
			this->chc->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->chc->Location = System::Drawing::Point(111, 43);
			this->chc->Name = L"chc";
			this->chc->Size = System::Drawing::Size(100, 40);
			this->chc->TabIndex = 7;
			this->chc->Text = L"ch";
			this->chc->UseVisualStyleBackColor = true;
			this->chc->Click += gcnew System::EventHandler(this, &Form1::chc_Click);
			// 
			// shc
			// 
			this->shc->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->shc->Location = System::Drawing::Point(6, 43);
			this->shc->Name = L"shc";
			this->shc->Size = System::Drawing::Size(100, 40);
			this->shc->TabIndex = 6;
			this->shc->Text = L"sh";
			this->shc->UseVisualStyleBackColor = true;
			this->shc->Click += gcnew System::EventHandler(this, &Form1::shc_Click);
			// 
			// ctgc
			// 
			this->ctgc->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->ctgc->Location = System::Drawing::Point(108, 3);
			this->ctgc->Name = L"ctgc";
			this->ctgc->Size = System::Drawing::Size(100, 40);
			this->ctgc->TabIndex = 5;
			this->ctgc->Text = L"ctg";
			this->ctgc->UseVisualStyleBackColor = true;
			this->ctgc->Click += gcnew System::EventHandler(this, &Form1::ctgc_Click);
			// 
			// tgc
			// 
			this->tgc->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->tgc->Location = System::Drawing::Point(6, 3);
			this->tgc->Name = L"tgc";
			this->tgc->Size = System::Drawing::Size(100, 40);
			this->tgc->TabIndex = 4;
			this->tgc->Text = L"tg";
			this->tgc->UseVisualStyleBackColor = true;
			this->tgc->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(482, 231);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Êàëüêóëÿòîð";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void plus_Click(System::Object^  sender, System::EventArgs^  e) {
double cr=conv(num1->Text)[0];
double ci=conv(num1->Text)[1];
complex c1(cr,ci);
cr=conv(num2->Text)[0];
ci=conv(num2->Text)[1];
complex c2(cr,ci);
complex c;c=c1+c2;
if(c.returncomplex()[1]>0) num3->Text=Convert::ToString(c.returncomplex()[0])+"+"+Convert::ToString(c.returncomplex()[1])+"i";
if(c.returncomplex()[1]<0) num3->Text=Convert::ToString(c.returncomplex()[0])+" "+Convert::ToString(c.returncomplex()[1])+"i";
if(c.returncomplex()[1]==0) num3->Text=Convert::ToString(c.returncomplex()[0]);
if(c.returncomplex()[0]==0) num3->Text=Convert::ToString(c.returncomplex()[1])+"i";
			 }
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void pow_Click(System::Object^  sender, System::EventArgs^  e) {
			 double cr=conv(num1->Text)[0];
			 double ci=conv(num1->Text)[1];
			 complex c1(cr,ci);
			 cr=conv(num2->Text)[0];
			 ci=conv(num2->Text)[1];
			 complex a(cr,ci);
			 complex c=c1.powc(a);
			if(c.returncomplex()[1]>0) num3->Text=Convert::ToString(c.returncomplex()[0])+"+"+Convert::ToString(c.returncomplex()[1])+"i";
			if(c.returncomplex()[1]<0) num3->Text=Convert::ToString(c.returncomplex()[0])+" "+Convert::ToString(c.returncomplex()[1])+"i";
			if(c.returncomplex()[1]==0) num3->Text=Convert::ToString(c.returncomplex()[0]);
			if(c.returncomplex()[0]==0) num3->Text=Convert::ToString(c.returncomplex()[1])+"i";

		 }
private: System::Void minus_Click(System::Object^  sender, System::EventArgs^  e) {
double cr=conv(num1->Text)[0];
double ci=conv(num1->Text)[1];
complex c1(cr,ci);
cr=conv(num2->Text)[0];
ci=conv(num2->Text)[1];
complex c2(cr,ci);
complex c;c=c1-c2;
if(c.returncomplex()[1]>0) num3->Text=Convert::ToString(c.returncomplex()[0])+"+"+Convert::ToString(c.returncomplex()[1])+"i";
if(c.returncomplex()[1]<0) num3->Text=Convert::ToString(c.returncomplex()[0])+" "+Convert::ToString(c.returncomplex()[1])+"i";
if(c.returncomplex()[1]==0) num3->Text=Convert::ToString(c.returncomplex()[0]);
if(c.returncomplex()[0]==0) num3->Text=Convert::ToString(c.returncomplex()[1])+"i";
		 }
private: System::Void mul_Click(System::Object^  sender, System::EventArgs^  e) {
double cr=conv(num1->Text)[0];
double ci=conv(num1->Text)[1];
complex c1(cr,ci);
cr=conv(num2->Text)[0];
ci=conv(num2->Text)[1];
complex c2(cr,ci);
complex c;c=c1*c2;
if(c.returncomplex()[1]>0) num3->Text=Convert::ToString(c.returncomplex()[0])+"+"+Convert::ToString(c.returncomplex()[1])+"i";
if(c.returncomplex()[1]<0) num3->Text=Convert::ToString(c.returncomplex()[0])+" "+Convert::ToString(c.returncomplex()[1])+"i";
if(c.returncomplex()[1]==0) num3->Text=Convert::ToString(c.returncomplex()[0]);
if(c.returncomplex()[0]==0) num3->Text=Convert::ToString(c.returncomplex()[1])+"i";

		 }
private: System::Void div_Click(System::Object^  sender, System::EventArgs^  e) {
double cr=conv(num1->Text)[0];
double ci=conv(num1->Text)[1];
complex c1(cr,ci);
cr=conv(num2->Text)[0];
ci=conv(num2->Text)[1];
complex c2(cr,ci);
complex c;c=c1/c2;
if(c.returncomplex()[1]>0) num3->Text=Convert::ToString(c.returncomplex()[0])+"+"+Convert::ToString(c.returncomplex()[1])+"i";
if(c.returncomplex()[1]<0) num3->Text=Convert::ToString(c.returncomplex()[0])+" "+Convert::ToString(c.returncomplex()[1])+"i";
if(c.returncomplex()[1]==0) num3->Text=Convert::ToString(c.returncomplex()[0]);
if(c.returncomplex()[0]==0) num3->Text=Convert::ToString(c.returncomplex()[1])+"i";
		 }
private: System::Void sinc_Click(System::Object^  sender, System::EventArgs^  e) {
double cr=conv(num1->Text)[0];
double ci=conv(num1->Text)[1];
complex c1(cr,ci);
complex c; c=c1.sinc();
if(c.returncomplex()[1]>0) num3->Text=Convert::ToString(c.returncomplex()[0])+"+"+Convert::ToString(c.returncomplex()[1])+"i";
if(c.returncomplex()[1]<0) num3->Text=Convert::ToString(c.returncomplex()[0])+" "+Convert::ToString(c.returncomplex()[1])+"i";
if(c.returncomplex()[1]==0) num3->Text=Convert::ToString(c.returncomplex()[0]);
if(c.returncomplex()[0]==0) num3->Text=Convert::ToString(c.returncomplex()[1])+"i";
		 }
private: System::Void module_Click(System::Object^  sender, System::EventArgs^  e) {
double cr=conv(num1->Text)[0];
double ci=conv(num1->Text)[1];
complex c1(cr,ci);
num3->Text=Convert::ToString(c1.module());
		 }
private: System::Void cosc_Click(System::Object^  sender, System::EventArgs^  e) {
double cr=conv(num1->Text)[0];
double ci=conv(num1->Text)[1];
complex c1(cr,ci);
complex c; c=c1.cosc();
if(c.returncomplex()[1]>0) num3->Text=Convert::ToString(c.returncomplex()[0])+"+"+Convert::ToString(c.returncomplex()[1])+"i";
if(c.returncomplex()[1]<0) num3->Text=Convert::ToString(c.returncomplex()[0])+" "+Convert::ToString(c.returncomplex()[1])+"i";
if(c.returncomplex()[1]==0) num3->Text=Convert::ToString(c.returncomplex()[0]);
if(c.returncomplex()[0]==0) num3->Text=Convert::ToString(c.returncomplex()[1])+"i";
		 }
private: System::Void num3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void num2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void num1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void toolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void âûõîäToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
		 }
private: System::Void îÏðîãðàììåToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 form1 ^ f1= gcnew form1();
			 f1->ShowDialog();
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
double cr=conv(num1->Text)[0];
double ci=conv(num1->Text)[1];
complex c1(cr,ci);
complex c; c=c1.tanc();
if(c.returncomplex()[1]>0) num3->Text=Convert::ToString(c.returncomplex()[0])+"+"+Convert::ToString(c.returncomplex()[1])+"i";
if(c.returncomplex()[1]<0) num3->Text=Convert::ToString(c.returncomplex()[0])+" "+Convert::ToString(c.returncomplex()[1])+"i";
if(c.returncomplex()[1]==0) num3->Text=Convert::ToString(c.returncomplex()[0]);
if(c.returncomplex()[0]==0) num3->Text=Convert::ToString(c.returncomplex()[1])+"i";
		 }
private: System::Void ctgc_Click(System::Object^  sender, System::EventArgs^  e) {
double cr=conv(num1->Text)[0];
double ci=conv(num1->Text)[1];
complex c1(cr,ci);
complex c; c=c1.ctanc();
if(c.returncomplex()[1]>0) num3->Text=Convert::ToString(c.returncomplex()[0])+"+"+Convert::ToString(c.returncomplex()[1])+"i";
if(c.returncomplex()[1]<0) num3->Text=Convert::ToString(c.returncomplex()[0])+" "+Convert::ToString(c.returncomplex()[1])+"i";
if(c.returncomplex()[1]==0) num3->Text=Convert::ToString(c.returncomplex()[0]);
if(c.returncomplex()[0]==0) num3->Text=Convert::ToString(c.returncomplex()[1])+"i";
		 }
private: System::Void shc_Click(System::Object^  sender, System::EventArgs^  e) {
double cr=conv(num1->Text)[0];
double ci=conv(num1->Text)[1];
complex c1(cr,ci);
complex c; c=c1.shc();
if(c.returncomplex()[1]>0) num3->Text=Convert::ToString(c.returncomplex()[0])+"+"+Convert::ToString(c.returncomplex()[1])+"i";
if(c.returncomplex()[1]<0) num3->Text=Convert::ToString(c.returncomplex()[0])+" "+Convert::ToString(c.returncomplex()[1])+"i";
if(c.returncomplex()[1]==0) num3->Text=Convert::ToString(c.returncomplex()[0]);
if(c.returncomplex()[0]==0) num3->Text=Convert::ToString(c.returncomplex()[1])+"i";
		 }
private: System::Void chc_Click(System::Object^  sender, System::EventArgs^  e) {
double cr=conv(num1->Text)[0];
double ci=conv(num1->Text)[1];
complex c1(cr,ci);
complex c; c=c1.chc();
if(c.returncomplex()[1]>0) num3->Text=Convert::ToString(c.returncomplex()[0])+"+"+Convert::ToString(c.returncomplex()[1])+"i";
if(c.returncomplex()[1]<0) num3->Text=Convert::ToString(c.returncomplex()[0])+" "+Convert::ToString(c.returncomplex()[1])+"i";
if(c.returncomplex()[1]==0) num3->Text=Convert::ToString(c.returncomplex()[0]);
if(c.returncomplex()[0]==0) num3->Text=Convert::ToString(c.returncomplex()[1])+"i";
		 }
private: System::Void thc_Click(System::Object^  sender, System::EventArgs^  e) {
double cr=conv(num1->Text)[0];
double ci=conv(num1->Text)[1];
complex c1(cr,ci);
complex c; c=c1.thc();
if(c.returncomplex()[1]>0) num3->Text=Convert::ToString(c.returncomplex()[0])+"+"+Convert::ToString(c.returncomplex()[1])+"i";
if(c.returncomplex()[1]<0) num3->Text=Convert::ToString(c.returncomplex()[0])+" "+Convert::ToString(c.returncomplex()[1])+"i";
if(c.returncomplex()[1]==0) num3->Text=Convert::ToString(c.returncomplex()[0]);
if(c.returncomplex()[0]==0) num3->Text=Convert::ToString(c.returncomplex()[1])+"i"; 
		 }
private: System::Void cothc_Click(System::Object^  sender, System::EventArgs^  e) {
double cr=conv(num1->Text)[0];
double ci=conv(num1->Text)[1];
complex c1(cr,ci);
complex c; c=c1.cothc();
if(c.returncomplex()[1]>0) num3->Text=Convert::ToString(c.returncomplex()[0])+"+"+Convert::ToString(c.returncomplex()[1])+"i";
if(c.returncomplex()[1]<0) num3->Text=Convert::ToString(c.returncomplex()[0])+" "+Convert::ToString(c.returncomplex()[1])+"i";
if(c.returncomplex()[1]==0) num3->Text=Convert::ToString(c.returncomplex()[0]);
if(c.returncomplex()[0]==0) num3->Text=Convert::ToString(c.returncomplex()[1])+"i"; 
		 }
private: System::Void logc_Click(System::Object^  sender, System::EventArgs^  e) {
double cr=conv(num1->Text)[0];
double ci=conv(num1->Text)[1];
complex c1(cr,ci);
complex c; c=c1.logc();
if(c.returncomplex()[1]>0) num3->Text=Convert::ToString(c.returncomplex()[0])+"+"+Convert::ToString(c.returncomplex()[1])+"i";
if(c.returncomplex()[1]<0) num3->Text=Convert::ToString(c.returncomplex()[0])+" "+Convert::ToString(c.returncomplex()[1])+"i";
if(c.returncomplex()[1]==0) num3->Text=Convert::ToString(c.returncomplex()[0]);
if(c.returncomplex()[0]==0) num3->Text=Convert::ToString(c.returncomplex()[1])+"i"; 
		 }
private: System::Void expc_Click(System::Object^  sender, System::EventArgs^  e) {
double cr=conv(num1->Text)[0];
double ci=conv(num1->Text)[1];
complex c1(cr,ci);
complex c; c=c1.expc();
if(c.returncomplex()[1]>0) num3->Text=Convert::ToString(c.returncomplex()[0])+"+"+Convert::ToString(c.returncomplex()[1])+"i";
if(c.returncomplex()[1]<0) num3->Text=Convert::ToString(c.returncomplex()[0])+" "+Convert::ToString(c.returncomplex()[1])+"i";
if(c.returncomplex()[1]==0) num3->Text=Convert::ToString(c.returncomplex()[0]);
if(c.returncomplex()[0]==0) num3->Text=Convert::ToString(c.returncomplex()[1])+"i"; 
		 }
private: System::Void toolStripMenuItem9_Click(System::Object^  sender, System::EventArgs^  e) {
double cr=conv(num1->Text)[0];
double ci=conv(num1->Text)[1];
complex c1(cr,ci);
cr=conv(num2->Text)[0];
ci=conv(num2->Text)[1];
complex c2(cr,ci);
complex c;c=c1+c2;
if(c.returncomplex()[1]>0) num3->Text=Convert::ToString(c.returncomplex()[0])+"+"+Convert::ToString(c.returncomplex()[1])+"i";
if(c.returncomplex()[1]<0) num3->Text=Convert::ToString(c.returncomplex()[0])+" "+Convert::ToString(c.returncomplex()[1])+"i";
if(c.returncomplex()[1]==0) num3->Text=Convert::ToString(c.returncomplex()[0]);
if(c.returncomplex()[0]==0) num3->Text=Convert::ToString(c.returncomplex()[1])+"i";
		 }
private: System::Void toolStripMenuItem12_Click(System::Object^  sender, System::EventArgs^  e) {
double cr=conv(num1->Text)[0];
double ci=conv(num1->Text)[1];
complex c1(cr,ci);
cr=conv(num2->Text)[0];
ci=conv(num2->Text)[1];
complex c2(cr,ci);
complex c;c=c1-c2;
if(c.returncomplex()[1]>0) num3->Text=Convert::ToString(c.returncomplex()[0])+"+"+Convert::ToString(c.returncomplex()[1])+"i";
if(c.returncomplex()[1]<0) num3->Text=Convert::ToString(c.returncomplex()[0])+" "+Convert::ToString(c.returncomplex()[1])+"i";
if(c.returncomplex()[1]==0) num3->Text=Convert::ToString(c.returncomplex()[0]);
if(c.returncomplex()[0]==0) num3->Text=Convert::ToString(c.returncomplex()[1])+"i";
		 }
private: System::Void toolStripMenuItem13_Click(System::Object^  sender, System::EventArgs^  e) {
double cr=conv(num1->Text)[0];
double ci=conv(num1->Text)[1];
complex c1(cr,ci);
cr=conv(num2->Text)[0];
ci=conv(num2->Text)[1];
complex c2(cr,ci);
complex c;c=c1*c2;
if(c.returncomplex()[1]>0) num3->Text=Convert::ToString(c.returncomplex()[0])+"+"+Convert::ToString(c.returncomplex()[1])+"i";
if(c.returncomplex()[1]<0) num3->Text=Convert::ToString(c.returncomplex()[0])+" "+Convert::ToString(c.returncomplex()[1])+"i";
if(c.returncomplex()[1]==0) num3->Text=Convert::ToString(c.returncomplex()[0]);
if(c.returncomplex()[0]==0) num3->Text=Convert::ToString(c.returncomplex()[1])+"i";
		 }
private: System::Void toolStripMenuItem14_Click(System::Object^  sender, System::EventArgs^  e) {
double cr=conv(num1->Text)[0];
double ci=conv(num1->Text)[1];
complex c1(cr,ci);
cr=conv(num2->Text)[0];
ci=conv(num2->Text)[1];
complex c2(cr,ci);
complex c;c=c1/c2;
if(c.returncomplex()[1]>0) num3->Text=Convert::ToString(c.returncomplex()[0])+"+"+Convert::ToString(c.returncomplex()[1])+"i";
if(c.returncomplex()[1]<0) num3->Text=Convert::ToString(c.returncomplex()[0])+" "+Convert::ToString(c.returncomplex()[1])+"i";
if(c.returncomplex()[1]==0) num3->Text=Convert::ToString(c.returncomplex()[0]);
if(c.returncomplex()[0]==0) num3->Text=Convert::ToString(c.returncomplex()[1])+"i";
		 }
private: System::Void toolStripMenuItem15_Click(System::Object^  sender, System::EventArgs^  e) {
double cr=conv(num1->Text)[0];
			 double ci=conv(num1->Text)[1];
			 complex c1(cr,ci);
			 cr=conv(num2->Text)[0];
			 ci=conv(num2->Text)[1];
			 complex a(cr,ci);
			 complex c=c1.powc(a);
			if(c.returncomplex()[1]>0) num3->Text=Convert::ToString(c.returncomplex()[0])+"+"+Convert::ToString(c.returncomplex()[1])+"i";
			if(c.returncomplex()[1]<0) num3->Text=Convert::ToString(c.returncomplex()[0])+" "+Convert::ToString(c.returncomplex()[1])+"i";
			if(c.returncomplex()[1]==0) num3->Text=Convert::ToString(c.returncomplex()[0]);
			if(c.returncomplex()[0]==0) num3->Text=Convert::ToString(c.returncomplex()[1])+"i";
		 }
private: System::Void toolStripMenuItem16_Click(System::Object^  sender, System::EventArgs^  e) {
double cr=conv(num1->Text)[0];
double ci=conv(num1->Text)[1];
complex c1(cr,ci);
num3->Text=Convert::ToString(c1.module());
		 }
private: System::Void sinToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
double cr=conv(num1->Text)[0];
double ci=conv(num1->Text)[1];
complex c1(cr,ci);
complex c; c=c1.sinc();
if(c.returncomplex()[1]>0) num3->Text=Convert::ToString(c.returncomplex()[0])+"+"+Convert::ToString(c.returncomplex()[1])+"i";
if(c.returncomplex()[1]<0) num3->Text=Convert::ToString(c.returncomplex()[0])+" "+Convert::ToString(c.returncomplex()[1])+"i";
if(c.returncomplex()[1]==0) num3->Text=Convert::ToString(c.returncomplex()[0]);
if(c.returncomplex()[0]==0) num3->Text=Convert::ToString(c.returncomplex()[1])+"i";
		 }
private: System::Void cosToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
double cr=conv(num1->Text)[0];
double ci=conv(num1->Text)[1];
complex c1(cr,ci);
complex c; c=c1.cosc();
if(c.returncomplex()[1]>0) num3->Text=Convert::ToString(c.returncomplex()[0])+"+"+Convert::ToString(c.returncomplex()[1])+"i";
if(c.returncomplex()[1]<0) num3->Text=Convert::ToString(c.returncomplex()[0])+" "+Convert::ToString(c.returncomplex()[1])+"i";
if(c.returncomplex()[1]==0) num3->Text=Convert::ToString(c.returncomplex()[0]);
if(c.returncomplex()[0]==0) num3->Text=Convert::ToString(c.returncomplex()[1])+"i";
		 }
private: System::Void tgToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
double cr=conv(num1->Text)[0];
double ci=conv(num1->Text)[1];
complex c1(cr,ci);
complex c; c=c1.tanc();
if(c.returncomplex()[1]>0) num3->Text=Convert::ToString(c.returncomplex()[0])+"+"+Convert::ToString(c.returncomplex()[1])+"i";
if(c.returncomplex()[1]<0) num3->Text=Convert::ToString(c.returncomplex()[0])+" "+Convert::ToString(c.returncomplex()[1])+"i";
if(c.returncomplex()[1]==0) num3->Text=Convert::ToString(c.returncomplex()[0]);
if(c.returncomplex()[0]==0) num3->Text=Convert::ToString(c.returncomplex()[1])+"i";
		 }
private: System::Void ctgToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
double cr=conv(num1->Text)[0];
double ci=conv(num1->Text)[1];
complex c1(cr,ci);
complex c; c=c1.ctanc();
if(c.returncomplex()[1]>0) num3->Text=Convert::ToString(c.returncomplex()[0])+"+"+Convert::ToString(c.returncomplex()[1])+"i";
if(c.returncomplex()[1]<0) num3->Text=Convert::ToString(c.returncomplex()[0])+" "+Convert::ToString(c.returncomplex()[1])+"i";
if(c.returncomplex()[1]==0) num3->Text=Convert::ToString(c.returncomplex()[0]);
if(c.returncomplex()[0]==0) num3->Text=Convert::ToString(c.returncomplex()[1])+"i";
		 }
private: System::Void shToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
double cr=conv(num1->Text)[0];
double ci=conv(num1->Text)[1];
complex c1(cr,ci);
complex c; c=c1.shc();
if(c.returncomplex()[1]>0) num3->Text=Convert::ToString(c.returncomplex()[0])+"+"+Convert::ToString(c.returncomplex()[1])+"i";
if(c.returncomplex()[1]<0) num3->Text=Convert::ToString(c.returncomplex()[0])+" "+Convert::ToString(c.returncomplex()[1])+"i";
if(c.returncomplex()[1]==0) num3->Text=Convert::ToString(c.returncomplex()[0]);
if(c.returncomplex()[0]==0) num3->Text=Convert::ToString(c.returncomplex()[1])+"i";
		 }
private: System::Void chToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
double cr=conv(num1->Text)[0];
double ci=conv(num1->Text)[1];
complex c1(cr,ci);
complex c; c=c1.chc();
if(c.returncomplex()[1]>0) num3->Text=Convert::ToString(c.returncomplex()[0])+"+"+Convert::ToString(c.returncomplex()[1])+"i";
if(c.returncomplex()[1]<0) num3->Text=Convert::ToString(c.returncomplex()[0])+" "+Convert::ToString(c.returncomplex()[1])+"i";
if(c.returncomplex()[1]==0) num3->Text=Convert::ToString(c.returncomplex()[0]);
if(c.returncomplex()[0]==0) num3->Text=Convert::ToString(c.returncomplex()[1])+"i";
		 }
private: System::Void thToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
double cr=conv(num1->Text)[0];
double ci=conv(num1->Text)[1];
complex c1(cr,ci);
complex c; c=c1.thc();
if(c.returncomplex()[1]>0) num3->Text=Convert::ToString(c.returncomplex()[0])+"+"+Convert::ToString(c.returncomplex()[1])+"i";
if(c.returncomplex()[1]<0) num3->Text=Convert::ToString(c.returncomplex()[0])+" "+Convert::ToString(c.returncomplex()[1])+"i";
if(c.returncomplex()[1]==0) num3->Text=Convert::ToString(c.returncomplex()[0]);
if(c.returncomplex()[0]==0) num3->Text=Convert::ToString(c.returncomplex()[1])+"i"; 
		 }
private: System::Void cothToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
double cr=conv(num1->Text)[0];
double ci=conv(num1->Text)[1];
complex c1(cr,ci);
complex c; c=c1.cothc();
if(c.returncomplex()[1]>0) num3->Text=Convert::ToString(c.returncomplex()[0])+"+"+Convert::ToString(c.returncomplex()[1])+"i";
if(c.returncomplex()[1]<0) num3->Text=Convert::ToString(c.returncomplex()[0])+" "+Convert::ToString(c.returncomplex()[1])+"i";
if(c.returncomplex()[1]==0) num3->Text=Convert::ToString(c.returncomplex()[0]);
if(c.returncomplex()[0]==0) num3->Text=Convert::ToString(c.returncomplex()[1])+"i"; 
		 }
private: System::Void logToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
double cr=conv(num1->Text)[0];
double ci=conv(num1->Text)[1];
complex c1(cr,ci);
complex c; c=c1.logc();
if(c.returncomplex()[1]>0) num3->Text=Convert::ToString(c.returncomplex()[0])+"+"+Convert::ToString(c.returncomplex()[1])+"i";
if(c.returncomplex()[1]<0) num3->Text=Convert::ToString(c.returncomplex()[0])+" "+Convert::ToString(c.returncomplex()[1])+"i";
if(c.returncomplex()[1]==0) num3->Text=Convert::ToString(c.returncomplex()[0]);
if(c.returncomplex()[0]==0) num3->Text=Convert::ToString(c.returncomplex()[1])+"i"; 
		 }
private: System::Void expToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
double cr=conv(num1->Text)[0];
double ci=conv(num1->Text)[1];
complex c1(cr,ci);
complex c; c=c1.expc();
if(c.returncomplex()[1]>0) num3->Text=Convert::ToString(c.returncomplex()[0])+"+"+Convert::ToString(c.returncomplex()[1])+"i";
if(c.returncomplex()[1]<0) num3->Text=Convert::ToString(c.returncomplex()[0])+" "+Convert::ToString(c.returncomplex()[1])+"i";
if(c.returncomplex()[1]==0) num3->Text=Convert::ToString(c.returncomplex()[0]);
if(c.returncomplex()[0]==0) num3->Text=Convert::ToString(c.returncomplex()[1])+"i"; 
		 }
};
}

