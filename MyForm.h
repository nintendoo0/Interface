#pragma once
#include "Calculator.h"
#include "HelpForm.h"

namespace Interface {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:bool mouseDown;
	private: System::Windows::Forms::TextBox^ textBox1;
	public:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::Button^ button22;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::ToolTip^ toolTip1;
	private: System::Windows::Forms::ToolTip^ toolTip2;
	private: System::Windows::Forms::ToolTip^ toolTip3;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::ToolTip^ toolTip4;

	public: Point lastLocation;
		   MyForm(void)
		   {
			   InitializeComponent();
			   //
			   //TODO: добавьте код конструктора
			   //
		   }

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button_close;
	private: System::Windows::Forms::Label^ result_label;






















	private: System::Windows::Forms::Button^ Minimum;
	private: System::ComponentModel::IContainer^ components;

	protected:

	protected:




	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series7 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series8 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series9 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->button_close = (gcnew System::Windows::Forms::Button());
			this->result_label = (gcnew System::Windows::Forms::Label());
			this->Minimum = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip2 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip3 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->toolTip4 = (gcnew System::Windows::Forms::ToolTip(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// button_close
			// 
			this->button_close->BackColor = System::Drawing::Color::Red;
			this->button_close->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_close->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_close->ForeColor = System::Drawing::Color::White;
			this->button_close->Location = System::Drawing::Point(922, 12);
			this->button_close->Name = L"button_close";
			this->button_close->Size = System::Drawing::Size(25, 25);
			this->button_close->TabIndex = 0;
			this->button_close->Text = L"X";
			this->toolTip1->SetToolTip(this->button_close, L"Выход");
			this->button_close->UseVisualStyleBackColor = true;
			this->button_close->Click += gcnew System::EventHandler(this, &MyForm::button_close_Click);
			// 
			// result_label
			// 
			this->result_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->result_label->ForeColor = System::Drawing::Color::White;
			this->result_label->Location = System::Drawing::Point(86, 280);
			this->result_label->Name = L"result_label";
			this->result_label->Size = System::Drawing::Size(206, 55);
			this->result_label->TabIndex = 1;
			this->result_label->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// Minimum
			// 
			this->Minimum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Minimum->Location = System::Drawing::Point(891, 12);
			this->Minimum->Name = L"Minimum";
			this->Minimum->Size = System::Drawing::Size(25, 25);
			this->Minimum->TabIndex = 22;
			this->Minimum->Text = L"__";
			this->toolTip2->SetToolTip(this->Minimum, L"Свернуть");
			this->Minimum->UseVisualStyleBackColor = true;
			this->Minimum->Click += gcnew System::EventHandler(this, &MyForm::Minimum_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(21, 197);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 23;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(21, 161);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 24;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox2_KeyPress);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(21, 125);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 25;
			this->toolTip4->SetToolTip(this->textBox3, L"Введите коэффициент А");
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox3_KeyPress);
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(127, 125);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(34, 20);
			this->label2->TabIndex = 27;
			this->label2->Text = L"A";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(127, 161);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(34, 20);
			this->label1->TabIndex = 28;
			this->label1->Text = L"B";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(127, 197);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(34, 20);
			this->label3->TabIndex = 29;
			this->label3->Text = L"C";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button21
			// 
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button21->Location = System::Drawing::Point(21, 235);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(107, 42);
			this->button21->TabIndex = 30;
			this->button21->Text = L"Решить";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(90, 355);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(202, 55);
			this->label4->TabIndex = 31;
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// chart1
			// 
			chartArea3->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->chart1->Legends->Add(legend3);
			this->chart1->Location = System::Drawing::Point(298, 96);
			this->chart1->Name = L"chart1";
			series7->ChartArea = L"ChartArea1";
			series7->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series7->Legend = L"Legend1";
			series7->Name = L"Series1";
			series8->ChartArea = L"ChartArea1";
			series8->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series8->Legend = L"Legend1";
			series8->Name = L"Series2";
			series9->ChartArea = L"ChartArea1";
			series9->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series9->Legend = L"Legend1";
			series9->Name = L"Series3";
			this->chart1->Series->Add(series7);
			this->chart1->Series->Add(series8);
			this->chart1->Series->Add(series9);
			this->chart1->Size = System::Drawing::Size(618, 395);
			this->chart1->TabIndex = 32;
			this->chart1->Text = L"chart1";
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::SteelBlue;
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button22->Location = System::Drawing::Point(860, 12);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(25, 25);
			this->button22->TabIndex = 33;
			this->button22->Text = L"\?";
			this->toolTip3->SetToolTip(this->button22, L"Справка");
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(22, 280);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 55);
			this->label5->TabIndex = 35;
			this->label5->Text = L"X₁:";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(22, 355);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 55);
			this->label6->TabIndex = 36;
			this->label6->Text = L"X₂:";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label7->Location = System::Drawing::Point(16, 64);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(276, 29);
			this->label7->TabIndex = 37;
			this->label7->Text = L"Введите коэффициенты";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label8->Location = System::Drawing::Point(545, 64);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(99, 29);
			this->label8->TabIndex = 38;
			this->label8->Text = L"График";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->ForeColor = System::Drawing::Color::Orange;
			this->label9->Location = System::Drawing::Point(13, 12);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(550, 29);
			this->label9->TabIndex = 39;
			this->label9->Text = L"Решатель квадратного уравнения с графиком";
			// 
			// MyForm
			// 
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->ClientSize = System::Drawing::Size(959, 523);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->Minimum);
			this->Controls->Add(this->result_label);
			this->Controls->Add(this->button_close);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseUp);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void button_close_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void buttonNum_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ button = safe_cast <Button^>(sender);
		if (this->result_label->Text == "0" || this->result_label->Text == "00")
			this->result_label->Text = button->Text;
		else
			this->result_label->Text = this->result_label->Text + button->Text;
	}
	private: System::Void Minimum_Click(System::Object^ sender, System::EventArgs^ e) {
		this->WindowState = FormWindowState::Minimized;

	}

	private: void MyForm_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		mouseDown = true;
		lastLocation = e->Location;
	}

	private: void MyForm_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		if (mouseDown)
		{
			this->Location = System::Drawing::Point(
				(this->Location.X - lastLocation.X) + e->X, (this->Location.Y - lastLocation.Y) + e->Y);

			this->Update();
		}
	}

	private: void MyForm_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		mouseDown = false;
	}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}


		   private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
			   bool isMinusHandled = false;
			   if (textBox1->TextLength == 0) {
				   if (e->KeyChar >= '0' && e->KeyChar <= '9') { return; }
				   if (e->KeyChar == '-') { return; }
			   }
			   if (textBox1->TextLength > 0 && !textBox1->Text->Contains(",")) {
				   if (textBox1->TextLength == 1 && textBox1->Text->Contains("-")) {
					   if (e->KeyChar >= '0' && e->KeyChar <= '9') { return; }
					   if (e->KeyChar == 8) { return; }
				   }
				   else {
					   if (e->KeyChar == ',') { return; }
					   if (e->KeyChar >= '0' && e->KeyChar <= '9') { return; }
					   if (e->KeyChar == 8) { return; }
				   }
			   }

			   if (textBox1->Text->Contains(",") && textBox1->TextLength < 5) {
				   if (e->KeyChar == 8) { return; }
			   }

			   if (!textBox1->Text->Contains("-") && textBox1->TextLength > 0) {
				   if (!textBox1->Text->Contains(",")) { if (e->KeyChar == ',') { return; } }
				   if (e->KeyChar >= '0' && e->KeyChar <= '9') { return; }
				   if (e->KeyChar == 8) { return; }
				   if (e->KeyChar == '-')
				   {
					   if (!isMinusHandled)
					   {
						   String^ c = textBox3->Text;
						   textBox1->Text = "-" + c->Replace("-", "");
						   isMinusHandled = true;
					   }
					   e->Handled = true;
				   }
				   else
				   {
					   isMinusHandled = false;
				   }
			   }

			   else {
				   if (e->KeyChar >= '0' && e->KeyChar <= '9') { return; }
				   if (e->KeyChar == 8) { return; }
			   }

			   e->Handled = true;
		   }

	private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		bool isMinusHandled = false;
		if (textBox2->TextLength == 0) {
			if (e->KeyChar >= '0' && e->KeyChar <= '9') { return; }
			if (e->KeyChar == '-') { return; }
		}
		if (textBox2->TextLength > 0 && !textBox2->Text->Contains(",")) {
			if (textBox2->TextLength == 1 && textBox2->Text->Contains("-")) {
				if (e->KeyChar >= '0' && e->KeyChar <= '9') { return; }
				if (e->KeyChar == 8) { return; }
			}
			else {
				if (e->KeyChar == ',') { return; }
				if (e->KeyChar >= '0' && e->KeyChar <= '9') { return; }
				if (e->KeyChar == 8) { return; }
			}
		}

		if (!textBox2->Text->Contains("-") && textBox2->TextLength > 0) {
			if (!textBox2->Text->Contains(",")) { if (e->KeyChar == ',') { return; } }
			if (e->KeyChar >= '0' && e->KeyChar <= '9') { return; }
			if (e->KeyChar == 8) { return; }
			if (e->KeyChar == '-')
			{
				if (!isMinusHandled)
				{
					String^ c = textBox2->Text;
					textBox2->Text = "-" + c->Replace("-", "");
					isMinusHandled = true;
				}
				e->Handled = true;
			}
			else
			{
				isMinusHandled = false;
			}
		}

		else {
			if (e->KeyChar >= '0' && e->KeyChar <= '9') { return; }
			if (e->KeyChar == 8) { return; }
		}

		e->Handled = true;
	}

	private: System::Void textBox3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		bool isMinusHandled = false;
		if (textBox3->TextLength == 0) {
			if (e->KeyChar >= '0' && e->KeyChar <= '9') { return; }
			if (e->KeyChar == '-') { return; }
		}
		if (textBox3->TextLength > 0 && !textBox3->Text->Contains(",")) {
			if (textBox3->TextLength == 1 && textBox3->Text->Contains("-")) {
				if (e->KeyChar >= '0' && e->KeyChar <= '9') { return; }
				if (e->KeyChar == 8) { return; }
			}
			else {
				if (e->KeyChar == ',') { return; }
				if (e->KeyChar >= '0' && e->KeyChar <= '9') { return; }
				if (e->KeyChar == 8) { return; }
			}
		}


		if (!textBox3->Text->Contains("-") && textBox3->TextLength > 0) {
			if (!textBox3->Text->Contains(",")) { if (e->KeyChar == ',') { return; } }
			if (e->KeyChar >= '0' && e->KeyChar <= '9') { return; }
			if (e->KeyChar == 8) { return; }
			if (e->KeyChar == '-')
			{
				if (!isMinusHandled)
				{
					String^ c = textBox3->Text;
					textBox3->Text = "-" + c->Replace("-", "");
					isMinusHandled = true;
				}
				e->Handled = true;
			}
			else
			{
				isMinusHandled = false;
			}
		}

		else {
			if (e->KeyChar >= '0' && e->KeyChar <= '9') { return; }
			if (e->KeyChar == 8) { return; }
		}

		e->Handled = true;
	}

private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
	double a, b, c;

	if (textBox3->Text == "") {
		a = 1;
		textBox3->Text = "1";
	}
	else
	{
		try
		{
			a = Convert::ToDouble(textBox3->Text);
		}
		catch (...)
		{
			MessageBox::Show(L"В следующий раз введите число", L"", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			a = 1;
			textBox3->Text = "1";

		}

	}
	if (textBox2->Text == "") {
		b = 1;
		textBox2->Text = "1";
	}
	else
	{
		try
		{
			b = Convert::ToDouble(textBox2->Text);
		}
		catch (...)
		{
			
			MessageBox::Show(L"В следующий раз введите число", L"", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			b = 1;
			textBox2->Text = "1";
		}

	}
	if (textBox1->Text == "") {
		c = 1;
		textBox1->Text = "1";
	}
	else
	{
		try
		{
			c = Convert::ToDouble(textBox1->Text);
		}
		catch (...)
		{
			
			MessageBox::Show(L"В следующий раз введите число", L"", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			c = 1;
			textBox1->Text = "1";

		}

	}

	Calculator^ calc = gcnew Calculator(a,b,c); 
	array<String^>^ roots = gcnew array<String^>(4);
	roots = calc->Solve(); 

	result_label->Text = roots[0];
	label4->Text = roots[1];

	double LeftBorder = -100;
	double RightBorder = 100;
	double Peak = 0;
	if (a != 0) {
		Peak = calc->GetPeak();
	}
	chart1->Series[0]->Points->Clear();
	chart1->Series[1]->Points->Clear();
	chart1->Series[2]->Points->Clear();

	chart1->Series[1]->Points->AddXY(0, calc->Function(Peak + LeftBorder));
	chart1->Series[1]->Points->AddXY(0, 0);
	chart1->Series[1]->Points->AddXY(0, calc->Function(Peak) + (2 * a / -a));
	chart1->Series[2]->Points->AddXY(LeftBorder, 0);
	chart1->Series[2]->Points->AddXY(RightBorder, 0);
	chart1->Series[2]->Points->AddXY(0, 0);

	for (double i = (Peak + LeftBorder); i <= (Peak + RightBorder); i++) {
		chart1->Series[0]->Points->AddXY(i, calc->Function(i));
	}

	delete roots, calc;

}
private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
	HelpForm^ helpForm = gcnew HelpForm();
	helpForm->ShowDialog();
}
};
};