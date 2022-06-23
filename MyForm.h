#pragma once
#include	"input.h"
namespace practicaltask {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ bInput;
	private: System::Windows::Forms::Button^ bCalc;
	private: System::Windows::Forms::Button^ bExit;
	protected:

	protected:



	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->bInput = (gcnew System::Windows::Forms::Button());
			this->bCalc = (gcnew System::Windows::Forms::Button());
			this->bExit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// bInput
			// 
			this->bInput->Dock = System::Windows::Forms::DockStyle::Top;
			this->bInput->Location = System::Drawing::Point(0, 0);
			this->bInput->Name = L"bInput";
			this->bInput->Size = System::Drawing::Size(450, 50);
			this->bInput->TabIndex = 0;
			this->bInput->Text = L"Input";
			this->bInput->UseVisualStyleBackColor = true;
			this->bInput->Click += gcnew System::EventHandler(this, &MyForm::bInput_Click);
			// 
			// bCalc
			// 
			this->bCalc->Dock = System::Windows::Forms::DockStyle::Top;
			this->bCalc->Location = System::Drawing::Point(0, 50);
			this->bCalc->Name = L"bCalc";
			this->bCalc->Size = System::Drawing::Size(450, 50);
			this->bCalc->TabIndex = 1;
			this->bCalc->Text = L"Calc";
			this->bCalc->UseVisualStyleBackColor = true;
			// 
			// bExit
			// 
			this->bExit->Dock = System::Windows::Forms::DockStyle::Top;
			this->bExit->Location = System::Drawing::Point(0, 100);
			this->bExit->Name = L"bExit";
			this->bExit->Size = System::Drawing::Size(450, 50);
			this->bExit->TabIndex = 2;
			this->bExit->Text = L"Exit";
			this->bExit->UseVisualStyleBackColor = true;
			this->bExit->Click += gcnew System::EventHandler(this, &MyForm::bExit_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(450, 150);
			this->Controls->Add(this->bExit);
			this->Controls->Add(this->bCalc);
			this->Controls->Add(this->bInput);
			this->Name = L"MyForm";
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"������������ �������� ���������� 153-0� ������� 10";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void bExit_Click(System::Object^ sender, System::EventArgs^ e) {
			this->Close();
		}
	private: System::Void bInput_Click(System::Object^ sender, System::EventArgs^ e) {

		input form;
		form.ShowDialog();
	}
};
}
