#pragma once
#include "Data.h"
namespace practicaltask {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Calc
	/// </summary>
	public ref class Calc : public System::Windows::Forms::Form
	{
	private: Data* data;
	public:
		Calc(void)
		{
			data = new Data();
			InitializeComponent();
		}

	public: Calc(Data* ref) {
		data = ref;
		InitializeComponent();
	};

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Calc()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ MaxElement;
	private: System::Windows::Forms::Label^ lMaxElement;
	private: System::Windows::Forms::Panel^ MaxElementID;
	private: System::Windows::Forms::Label^ lMaxElementID;
	private: System::Windows::Forms::Panel^ Summa;
	private: System::Windows::Forms::TextBox^ tbSumma;
	protected:

	protected:





	private: System::Windows::Forms::Label^ lSumma;
	private: System::Windows::Forms::Panel^ Arr;

	private: System::Windows::Forms::TextBox^ tbArr;



	private: System::Windows::Forms::Label^ lArr;

	private: System::Windows::Forms::TextBox^ tmMaxElemnt;
	private: System::Windows::Forms::TextBox^ tbMaxElementID;



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
			data->CalcData();
			this->MaxElement = (gcnew System::Windows::Forms::Panel());
			this->tmMaxElemnt = (gcnew System::Windows::Forms::TextBox());
			this->lMaxElement = (gcnew System::Windows::Forms::Label());
			this->MaxElementID = (gcnew System::Windows::Forms::Panel());
			this->tbMaxElementID = (gcnew System::Windows::Forms::TextBox());
			this->lMaxElementID = (gcnew System::Windows::Forms::Label());
			this->Summa = (gcnew System::Windows::Forms::Panel());
			this->tbSumma = (gcnew System::Windows::Forms::TextBox());
			this->lSumma = (gcnew System::Windows::Forms::Label());
			this->Arr = (gcnew System::Windows::Forms::Panel());
			this->tbArr = (gcnew System::Windows::Forms::TextBox());
			this->lArr = (gcnew System::Windows::Forms::Label());
			this->MaxElement->SuspendLayout();
			this->MaxElementID->SuspendLayout();
			this->Summa->SuspendLayout();
			this->Arr->SuspendLayout();
			this->SuspendLayout();
			// 
			// MaxElement
			// 
			this->MaxElement->BackColor = System::Drawing::SystemColors::ControlDark;
			this->MaxElement->Controls->Add(this->tmMaxElemnt);
			this->MaxElement->Controls->Add(this->lMaxElement);
			this->MaxElement->Dock = System::Windows::Forms::DockStyle::Top;
			this->MaxElement->Location = System::Drawing::Point(0, 0);
			this->MaxElement->Margin = System::Windows::Forms::Padding(0);
			this->MaxElement->Name = L"MaxElement";
			this->MaxElement->Padding = System::Windows::Forms::Padding(5);
			this->MaxElement->Size = System::Drawing::Size(595, 30);
			this->MaxElement->TabIndex = 0;
			// 
			// tmMaxElemnt
			// 
			this->tmMaxElemnt->BackColor = System::Drawing::SystemColors::ControlDark;
			this->tmMaxElemnt->Cursor = System::Windows::Forms::Cursors::No;
			this->tmMaxElemnt->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tmMaxElemnt->Enabled = false;
			this->tmMaxElemnt->Location = System::Drawing::Point(203, 5);
			this->tmMaxElemnt->Name = L"tmMaxElemnt";
			this->tmMaxElemnt->Size = System::Drawing::Size(387, 20);
			this->tmMaxElemnt->TabIndex = 1;
			this->tmMaxElemnt->Text = data->vector[data->MaxID].ToString();
			// 
			// lMaxElement
			// 
			this->lMaxElement->AutoSize = true;
			this->lMaxElement->Dock = System::Windows::Forms::DockStyle::Left;
			this->lMaxElement->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lMaxElement->Location = System::Drawing::Point(5, 5);
			this->lMaxElement->Name = L"lMaxElement";
			this->lMaxElement->Size = System::Drawing::Size(198, 20);
			this->lMaxElement->TabIndex = 0;
			this->lMaxElement->Text = L"Максимальный элемент:";
			// 
			// MaxElementID
			// 
			this->MaxElementID->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->MaxElementID->Controls->Add(this->tbMaxElementID);
			this->MaxElementID->Controls->Add(this->lMaxElementID);
			this->MaxElementID->Dock = System::Windows::Forms::DockStyle::Top;
			this->MaxElementID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->MaxElementID->Location = System::Drawing::Point(0, 30);
			this->MaxElementID->Margin = System::Windows::Forms::Padding(0);
			this->MaxElementID->Name = L"MaxElementID";
			this->MaxElementID->Padding = System::Windows::Forms::Padding(5);
			this->MaxElementID->Size = System::Drawing::Size(595, 30);
			this->MaxElementID->TabIndex = 1;
			// 
			// tbMaxElementID
			// 
			this->tbMaxElementID->BackColor = System::Drawing::SystemColors::ControlDark;
			this->tbMaxElementID->Cursor = System::Windows::Forms::Cursors::No;
			this->tbMaxElementID->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tbMaxElementID->Enabled = false;
			this->tbMaxElementID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbMaxElementID->Location = System::Drawing::Point(240, 5);
			this->tbMaxElementID->Name = L"tbMaxElementID";
			this->tbMaxElementID->Size = System::Drawing::Size(350, 20);
			this->tbMaxElementID->TabIndex = 1;
			this->tbMaxElementID->Text = data->MaxID.ToString();
			// 
			// lMaxElementID
			// 
			this->lMaxElementID->AutoSize = true;
			this->lMaxElementID->Dock = System::Windows::Forms::DockStyle::Left;
			this->lMaxElementID->Location = System::Drawing::Point(5, 5);
			this->lMaxElementID->Name = L"lMaxElementID";
			this->lMaxElementID->Size = System::Drawing::Size(235, 20);
			this->lMaxElementID->TabIndex = 0;
			this->lMaxElementID->Text = L"ID максимального элемента: ";
			// 
			// Summa
			// 
			this->Summa->BackColor = System::Drawing::SystemColors::ControlDark;
			this->Summa->Controls->Add(this->tbSumma);
			this->Summa->Controls->Add(this->lSumma);
			this->Summa->Dock = System::Windows::Forms::DockStyle::Top;
			this->Summa->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Summa->Location = System::Drawing::Point(0, 60);
			this->Summa->Margin = System::Windows::Forms::Padding(0);
			this->Summa->Name = L"Summa";
			this->Summa->Padding = System::Windows::Forms::Padding(5);
			this->Summa->Size = System::Drawing::Size(595, 30);
			this->Summa->TabIndex = 2;
			// 
			// tbSumma
			// 
			this->tbSumma->BackColor = System::Drawing::SystemColors::ControlDark;
			this->tbSumma->Cursor = System::Windows::Forms::Cursors::No;
			this->tbSumma->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tbSumma->Enabled = false;
			this->tbSumma->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbSumma->Location = System::Drawing::Point(155, 5);
			this->tbSumma->Margin = System::Windows::Forms::Padding(0);
			this->tbSumma->Name = L"tbSumma";
			this->tbSumma->Size = System::Drawing::Size(435, 20);
			this->tbSumma->TabIndex = 1;
			this->tbSumma->Text = data->summ.ToString();
			// 
			// lSumma
			// 
			this->lSumma->AutoSize = true;
			this->lSumma->Dock = System::Windows::Forms::DockStyle::Left;
			this->lSumma->Location = System::Drawing::Point(5, 5);
			this->lSumma->Name = L"lSumma";
			this->lSumma->Size = System::Drawing::Size(150, 20);
			this->lSumma->TabIndex = 0;
			this->lSumma->Text = L"Сумма элементов:";
			// 
			// Arr
			// 
			this->Arr->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Arr->Controls->Add(this->tbArr);
			this->Arr->Controls->Add(this->lArr);
			this->Arr->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Arr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Arr->Location = System::Drawing::Point(0, 90);
			this->Arr->Margin = System::Windows::Forms::Padding(0);
			this->Arr->Name = L"Arr";
			this->Arr->Padding = System::Windows::Forms::Padding(5);
			this->Arr->Size = System::Drawing::Size(595, 204);
			this->Arr->TabIndex = 3;
			// 
			// tbArr
			// 
			this->tbArr->BackColor = System::Drawing::SystemColors::ControlDark;
			this->tbArr->Cursor = System::Windows::Forms::Cursors::No;
			this->tbArr->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tbArr->Enabled = false;
			this->tbArr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbArr->Location = System::Drawing::Point(5, 25);
			this->tbArr->Multiline = true;
			this->tbArr->Name = L"tbArr";
			this->tbArr->Size = System::Drawing::Size(585, 174);
			this->tbArr->TabIndex = 1;
			for (int i = 0; i < data->Count; i++) {
				this->tbArr->Text += data->vector[i].ToString();
				if (i + 1 < data->Count) {
					this->tbArr->Text += L", ";
				}
			}
			// 
			// lArr
			// 
			this->lArr->AutoSize = true;
			this->lArr->Dock = System::Windows::Forms::DockStyle::Top;
			this->lArr->Location = System::Drawing::Point(5, 5);
			this->lArr->Name = L"lArr";
			this->lArr->Size = System::Drawing::Size(157, 20);
			this->lArr->TabIndex = 0;
			this->lArr->Text = L"Массив элементов:";
			// 
			// Calc
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(595, 294);
			this->Controls->Add(this->Arr);
			this->Controls->Add(this->Summa);
			if(data->showMaxId)
				this->Controls->Add(this->MaxElementID);
			if(data->showMax)
				this->Controls->Add(this->MaxElement);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Calc";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Мирошниченко Владимир Васильевич 153-0б Вариант 10";
			this->MaxElement->ResumeLayout(false);
			this->MaxElement->PerformLayout();
			this->MaxElementID->ResumeLayout(false);
			this->MaxElementID->PerformLayout();
			this->Summa->ResumeLayout(false);
			this->Summa->PerformLayout();
			this->Arr->ResumeLayout(false);
			this->Arr->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
