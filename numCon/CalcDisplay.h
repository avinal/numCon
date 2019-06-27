#pragma once
#include "converter.h"
namespace numCon {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CalcDisplay
	/// </summary>
	public ref class CalcDisplay : public System::Windows::Forms::Form
	{
	public:
		CalcDisplay(void)
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
		~CalcDisplay()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  input_num;
	protected:

	private: System::Windows::Forms::Button^  butt_convert;
	private: System::Windows::Forms::GroupBox^  from_group;
	private: System::Windows::Forms::RadioButton^  decimal_radio;
	private: System::Windows::Forms::RadioButton^  octal_radio;
	private: System::Windows::Forms::RadioButton^  binary_radio;
	private: System::Windows::Forms::GroupBox^  to_group;
	private: System::Windows::Forms::RadioButton^  decimal_2radio;
	private: System::Windows::Forms::RadioButton^  octal_2radio;
	private: System::Windows::Forms::RadioButton^  binary_2radio;
	private: System::Windows::Forms::Label^  result_label;

	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->input_num = (gcnew System::Windows::Forms::TextBox());
			this->butt_convert = (gcnew System::Windows::Forms::Button());
			this->from_group = (gcnew System::Windows::Forms::GroupBox());
			this->decimal_radio = (gcnew System::Windows::Forms::RadioButton());
			this->octal_radio = (gcnew System::Windows::Forms::RadioButton());
			this->binary_radio = (gcnew System::Windows::Forms::RadioButton());
			this->to_group = (gcnew System::Windows::Forms::GroupBox());
			this->decimal_2radio = (gcnew System::Windows::Forms::RadioButton());
			this->octal_2radio = (gcnew System::Windows::Forms::RadioButton());
			this->binary_2radio = (gcnew System::Windows::Forms::RadioButton());
			this->result_label = (gcnew System::Windows::Forms::Label());
			this->from_group->SuspendLayout();
			this->to_group->SuspendLayout();
			this->SuspendLayout();
			// 
			// input_num
			// 
			this->input_num->Location = System::Drawing::Point(115, 36);
			this->input_num->Name = L"input_num";
			this->input_num->Size = System::Drawing::Size(204, 26);
			this->input_num->TabIndex = 0;
			this->input_num->Text = L"Enter a Number";
			this->input_num->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// butt_convert
			// 
			this->butt_convert->Location = System::Drawing::Point(155, 68);
			this->butt_convert->Name = L"butt_convert";
			this->butt_convert->Size = System::Drawing::Size(123, 40);
			this->butt_convert->TabIndex = 2;
			this->butt_convert->Text = L"Convert";
			this->butt_convert->UseVisualStyleBackColor = true;
			this->butt_convert->Click += gcnew System::EventHandler(this, &CalcDisplay::butt_convert_Click);
			// 
			// from_group
			// 
			this->from_group->Controls->Add(this->decimal_radio);
			this->from_group->Controls->Add(this->octal_radio);
			this->from_group->Controls->Add(this->binary_radio);
			this->from_group->Location = System::Drawing::Point(32, 120);
			this->from_group->Name = L"from_group";
			this->from_group->Size = System::Drawing::Size(118, 132);
			this->from_group->TabIndex = 3;
			this->from_group->TabStop = false;
			this->from_group->Text = L"From";
			// 
			// decimal_radio
			// 
			this->decimal_radio->AutoSize = true;
			this->decimal_radio->Location = System::Drawing::Point(9, 86);
			this->decimal_radio->Name = L"decimal_radio";
			this->decimal_radio->Size = System::Drawing::Size(91, 24);
			this->decimal_radio->TabIndex = 2;
			this->decimal_radio->TabStop = true;
			this->decimal_radio->Text = L"Decimal";
			this->decimal_radio->UseVisualStyleBackColor = true;
			// 
			// octal_radio
			// 
			this->octal_radio->AutoSize = true;
			this->octal_radio->Location = System::Drawing::Point(9, 56);
			this->octal_radio->Name = L"octal_radio";
			this->octal_radio->Size = System::Drawing::Size(71, 24);
			this->octal_radio->TabIndex = 1;
			this->octal_radio->TabStop = true;
			this->octal_radio->Text = L"Octal";
			this->octal_radio->UseVisualStyleBackColor = true;
			// 
			// binary_radio
			// 
			this->binary_radio->AutoSize = true;
			this->binary_radio->Location = System::Drawing::Point(9, 23);
			this->binary_radio->Name = L"binary_radio";
			this->binary_radio->Size = System::Drawing::Size(78, 24);
			this->binary_radio->TabIndex = 0;
			this->binary_radio->TabStop = true;
			this->binary_radio->Text = L"Binary";
			this->binary_radio->UseVisualStyleBackColor = true;
			// 
			// to_group
			// 
			this->to_group->Controls->Add(this->decimal_2radio);
			this->to_group->Controls->Add(this->octal_2radio);
			this->to_group->Controls->Add(this->binary_2radio);
			this->to_group->Location = System::Drawing::Point(277, 120);
			this->to_group->Name = L"to_group";
			this->to_group->Size = System::Drawing::Size(124, 132);
			this->to_group->TabIndex = 4;
			this->to_group->TabStop = false;
			this->to_group->Text = L"To";
			// 
			// decimal_2radio
			// 
			this->decimal_2radio->AutoSize = true;
			this->decimal_2radio->Location = System::Drawing::Point(9, 84);
			this->decimal_2radio->Name = L"decimal_2radio";
			this->decimal_2radio->Size = System::Drawing::Size(91, 24);
			this->decimal_2radio->TabIndex = 2;
			this->decimal_2radio->TabStop = true;
			this->decimal_2radio->Text = L"Decimal";
			this->decimal_2radio->UseVisualStyleBackColor = true;
			// 
			// octal_2radio
			// 
			this->octal_2radio->AutoSize = true;
			this->octal_2radio->Location = System::Drawing::Point(9, 54);
			this->octal_2radio->Name = L"octal_2radio";
			this->octal_2radio->Size = System::Drawing::Size(71, 24);
			this->octal_2radio->TabIndex = 1;
			this->octal_2radio->TabStop = true;
			this->octal_2radio->Text = L"Octal";
			this->octal_2radio->UseVisualStyleBackColor = true;
			// 
			// binary_2radio
			// 
			this->binary_2radio->AutoSize = true;
			this->binary_2radio->Location = System::Drawing::Point(9, 24);
			this->binary_2radio->Name = L"binary_2radio";
			this->binary_2radio->Size = System::Drawing::Size(78, 24);
			this->binary_2radio->TabIndex = 0;
			this->binary_2radio->TabStop = true;
			this->binary_2radio->Text = L"Binary";
			this->binary_2radio->UseVisualStyleBackColor = true;
			// 
			// result_label
			// 
			this->result_label->AutoSize = true;
			this->result_label->Location = System::Drawing::Point(185, 259);
			this->result_label->Name = L"result_label";
			this->result_label->Size = System::Drawing::Size(62, 20);
			this->result_label->TabIndex = 5;
			this->result_label->Text = L"Answer";
			this->result_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// CalcDisplay
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(442, 341);
			this->Controls->Add(this->result_label);
			this->Controls->Add(this->to_group);
			this->Controls->Add(this->from_group);
			this->Controls->Add(this->butt_convert);
			this->Controls->Add(this->input_num);
			this->Name = L"CalcDisplay";
			this->Text = L"Number System Converter";
			this->Load += gcnew System::EventHandler(this, &CalcDisplay::CalcDisplay_Load);
			this->from_group->ResumeLayout(false);
			this->from_group->PerformLayout();
			this->to_group->ResumeLayout(false);
			this->to_group->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//Eventlistener on button-click
	private: System::Void butt_convert_Click(System::Object^ sender, System::EventArgs^ e)
	{
		String ^ in = input_num->Text;

		int result, num = System::Convert::ToInt32(in);

		ostringstream number_string;
		number_string << num;
		string number = number_string.str();

		numConvert problem;

		//Radio button check match
		if (binary_radio->Checked && decimal_2radio->Checked)
		{
			result = problem.binary2decimal(number);
		}
		else if (binary_radio->Checked && octal_2radio->Checked)
		{
			result = problem.binary2octal(number);
		}
		else if (decimal_radio->Checked && binary_2radio->Checked)
		{
			result = problem.decimal2binary(number);
		}
		else if (decimal_radio->Checked && octal_2radio->Checked)
		{
			result = problem.decimal2octal(number);
		}
		else if (octal_radio->Checked && binary_2radio->Checked)
		{
			result = problem.octal2binary(number);
		}
		else if (octal_radio->Checked && decimal_2radio->Checked)
		{
			result = problem.octal2decimal(number);
		}

		result_label->Text = System::Convert::ToString(result);
	}

		//Loads the form
	private: System::Void CalcDisplay_Load(System::Object^ sender, System::EventArgs^ e)
	{
	}
};
}
