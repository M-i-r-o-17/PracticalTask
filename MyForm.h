#pragma once

namespace practicaltask {

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
	public:
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
	private: System::Windows::Forms::Button^ bInput;
	private: System::Windows::Forms::Button^ bCalc;
	private: System::Windows::Forms::Button^ bExit;
	protected:

	protected:



	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
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
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Мирошниченко Владимир Васильевич 153-0б Вариант 10";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void bExit_Click(System::Object^ sender, System::EventArgs^ e) {
			this->Close();
		}
	};
}
