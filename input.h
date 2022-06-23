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
	/// Сводка для input
	/// </summary>
	public ref class input : public System::Windows::Forms::Form
	{
	private: Data* data;
	public: input(void) {
			InitializeComponent();
			data = new Data();
	};
	public: input(Data * ref) {
		data = ref;
		InitializeComponent();
		InitializeComponentData();
	};

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~input()
		{
			if (components)
			{
				delete components;
			}

			
		}
	private: System::Windows::Forms::Panel^ FirstNumber;
	protected:

	private: System::Windows::Forms::TextBox^ tbFirstNumber;
	protected:

	private: System::Windows::Forms::Label^ lFirstNumber;
	private: System::Windows::Forms::Panel^ Random;

	private: System::Windows::Forms::Button^ bRandom;

	private: System::Windows::Forms::TextBox^ tbRandom;

	private: System::Windows::Forms::CheckBox^ cbRandom;
	private: System::Windows::Forms::Panel^ A;
	private: System::Windows::Forms::TextBox^ tbA;
	private: System::Windows::Forms::Label^ lA;
	private: System::Windows::Forms::Panel^ B;
	private: System::Windows::Forms::TextBox^ tbB;
	private: System::Windows::Forms::Label^ lB;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::Button^ button1;



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
		void InitializeComponent(void) {
			this->FirstNumber = (gcnew System::Windows::Forms::Panel());
			this->tbFirstNumber = (gcnew System::Windows::Forms::TextBox());
			this->lFirstNumber = (gcnew System::Windows::Forms::Label());
			this->Random = (gcnew System::Windows::Forms::Panel());
			this->bRandom = (gcnew System::Windows::Forms::Button());
			this->tbRandom = (gcnew System::Windows::Forms::TextBox());
			this->cbRandom = (gcnew System::Windows::Forms::CheckBox());
			this->A = (gcnew System::Windows::Forms::Panel());
			this->tbA = (gcnew System::Windows::Forms::TextBox());
			this->lA = (gcnew System::Windows::Forms::Label());
			this->B = (gcnew System::Windows::Forms::Panel());
			this->tbB = (gcnew System::Windows::Forms::TextBox());
			this->lB = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->FirstNumber->SuspendLayout();
			this->Random->SuspendLayout();
			this->A->SuspendLayout();
			this->B->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// FirstNumber
			// 
			this->FirstNumber->BackColor = System::Drawing::SystemColors::ControlDark;
			this->FirstNumber->Controls->Add(this->tbFirstNumber);
			this->FirstNumber->Controls->Add(this->lFirstNumber);
			this->FirstNumber->Dock = System::Windows::Forms::DockStyle::Top;
			this->FirstNumber->Location = System::Drawing::Point(0, 0);
			this->FirstNumber->Margin = System::Windows::Forms::Padding(0);
			this->FirstNumber->Name = L"FirstNumber";
			this->FirstNumber->Padding = System::Windows::Forms::Padding(5);
			this->FirstNumber->Size = System::Drawing::Size(684, 30);
			this->FirstNumber->TabIndex = 0;
			// 
			// tbFirstNumber
			// 
			this->tbFirstNumber->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tbFirstNumber->Location = System::Drawing::Point(120, 5);
			this->tbFirstNumber->Name = L"tbFirstNumber";
			this->tbFirstNumber->Size = System::Drawing::Size(559, 20);
			this->tbFirstNumber->TabIndex = 1;
			this->tbFirstNumber->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &input::tbFirstNumber_KeyPress);
			// 
			// lFirstNumber
			// 
			this->lFirstNumber->AutoSize = true;
			this->lFirstNumber->Dock = System::Windows::Forms::DockStyle::Left;
			this->lFirstNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lFirstNumber->Location = System::Drawing::Point(5, 5);
			this->lFirstNumber->Name = L"lFirstNumber";
			this->lFirstNumber->Size = System::Drawing::Size(115, 20);
			this->lFirstNumber->TabIndex = 0;
			this->lFirstNumber->Text = L"Первое число";
			// 
			// Random
			// 
			this->Random->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Random->Controls->Add(this->bRandom);
			this->Random->Controls->Add(this->tbRandom);
			this->Random->Controls->Add(this->cbRandom);
			this->Random->Dock = System::Windows::Forms::DockStyle::Top;
			this->Random->Location = System::Drawing::Point(0, 30);
			this->Random->Margin = System::Windows::Forms::Padding(0);
			this->Random->Name = L"Random";
			this->Random->Padding = System::Windows::Forms::Padding(5);
			this->Random->Size = System::Drawing::Size(684, 30);
			this->Random->TabIndex = 1;
			// 
			// bRandom
			// 
			this->bRandom->Dock = System::Windows::Forms::DockStyle::Fill;
			this->bRandom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bRandom->Location = System::Drawing::Point(578, 5);
			this->bRandom->Margin = System::Windows::Forms::Padding(0);
			this->bRandom->Name = L"bRandom";
			this->bRandom->Size = System::Drawing::Size(101, 20);
			this->bRandom->TabIndex = 2;
			this->bRandom->Text = L"Случайно";
			this->bRandom->UseVisualStyleBackColor = true;
			// 
			// tbRandom
			// 
			this->tbRandom->Dock = System::Windows::Forms::DockStyle::Left;
			this->tbRandom->Location = System::Drawing::Point(198, 5);
			this->tbRandom->Margin = System::Windows::Forms::Padding(5);
			this->tbRandom->Name = L"tbRandom";
			this->tbRandom->Size = System::Drawing::Size(380, 20);
			this->tbRandom->TabIndex = 1;
			// 
			// cbRandom
			// 
			this->cbRandom->AutoSize = true;
			this->cbRandom->Dock = System::Windows::Forms::DockStyle::Left;
			this->cbRandom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->cbRandom->Location = System::Drawing::Point(5, 5);
			this->cbRandom->Name = L"cbRandom";
			this->cbRandom->Size = System::Drawing::Size(193, 20);
			this->cbRandom->TabIndex = 0;
			this->cbRandom->Text = L"Случайная генерация";
			this->cbRandom->UseVisualStyleBackColor = true;
			this->cbRandom->CheckedChanged += gcnew System::EventHandler(this, &input::cbRandom_CheckedChanged);
			// 
			// A
			// 
			this->A->BackColor = System::Drawing::SystemColors::ControlDark;
			this->A->Controls->Add(this->tbA);
			this->A->Controls->Add(this->lA);
			this->A->Dock = System::Windows::Forms::DockStyle::Top;
			this->A->Location = System::Drawing::Point(0, 60);
			this->A->Margin = System::Windows::Forms::Padding(0);
			this->A->Name = L"A";
			this->A->Padding = System::Windows::Forms::Padding(5);
			this->A->Size = System::Drawing::Size(684, 30);
			this->A->TabIndex = 2;
			// 
			// tbA
			// 
			this->tbA->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tbA->Location = System::Drawing::Point(75, 5);
			this->tbA->Name = L"tbA";
			this->tbA->Size = System::Drawing::Size(604, 20);
			this->tbA->TabIndex = 1;
			// 
			// lA
			// 
			this->lA->AutoSize = true;
			this->lA->Dock = System::Windows::Forms::DockStyle::Left;
			this->lA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lA->Location = System::Drawing::Point(5, 5);
			this->lA->Name = L"lA";
			this->lA->Size = System::Drawing::Size(70, 20);
			this->lA->TabIndex = 0;
			this->lA->Text = L"Число a";
			// 
			// B
			// 
			this->B->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->B->Controls->Add(this->tbB);
			this->B->Controls->Add(this->lB);
			this->B->Dock = System::Windows::Forms::DockStyle::Top;
			this->B->Location = System::Drawing::Point(0, 90);
			this->B->Margin = System::Windows::Forms::Padding(0);
			this->B->Name = L"B";
			this->B->Padding = System::Windows::Forms::Padding(5);
			this->B->Size = System::Drawing::Size(684, 30);
			this->B->TabIndex = 3;
			// 
			// tbB
			// 
			this->tbB->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tbB->Location = System::Drawing::Point(75, 5);
			this->tbB->Name = L"tbB";
			this->tbB->Size = System::Drawing::Size(604, 20);
			this->tbB->TabIndex = 1;
			// 
			// lB
			// 
			this->lB->AutoSize = true;
			this->lB->Dock = System::Windows::Forms::DockStyle::Left;
			this->lB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lB->Location = System::Drawing::Point(5, 5);
			this->lB->Name = L"lB";
			this->lB->Size = System::Drawing::Size(70, 20);
			this->lB->TabIndex = 0;
			this->lB->Text = L"Число b";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ControlDark;
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->checkBox2);
			this->panel1->Controls->Add(this->checkBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 120);
			this->panel1->Margin = System::Windows::Forms::Padding(0);
			this->panel1->Name = L"panel1";
			this->panel1->Padding = System::Windows::Forms::Padding(5);
			this->panel1->Size = System::Drawing::Size(684, 91);
			this->panel1->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->button1->Location = System::Drawing::Point(5, 63);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(674, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Применить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &input::button1_Click);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Dock = System::Windows::Forms::DockStyle::Top;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox2->Location = System::Drawing::Point(5, 29);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(674, 24);
			this->checkBox2->TabIndex = 1;
			this->checkBox2->Text = L"Вывести id максимального числа";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Dock = System::Windows::Forms::DockStyle::Top;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox1->Location = System::Drawing::Point(5, 5);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(674, 24);
			this->checkBox1->TabIndex = 0;
			this->checkBox1->Text = L"Вывести максимальное число";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// input
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(684, 211);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->B);
			this->Controls->Add(this->A);
			this->Controls->Add(this->Random);
			this->Controls->Add(this->FirstNumber);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(700, 250);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(16, 250);
			this->Name = L"input";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Мирошниченко Владимир Васильевич 153-0б Вариант 10";
			this->FirstNumber->ResumeLayout(false);
			this->FirstNumber->PerformLayout();
			this->Random->ResumeLayout(false);
			this->Random->PerformLayout();
			this->A->ResumeLayout(false);
			this->A->PerformLayout();
			this->B->ResumeLayout(false);
			this->B->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
		void InitializeComponentData() {

			this->tbFirstNumber->Text = data->StartNum.ToString();

			this->cbRandom->Checked = data->autoSeed;
			this->tbRandom->Text = data->Seed.ToString();
			if (true == data->autoSeed) {
				this->tbRandom->Enabled = false;
				this->bRandom->Enabled = false;
			}

			this->tbA->Text = data->a.ToString();
			this->tbB->Text = data->b.ToString();

			this->checkBox1->Checked = data->showMax;
			this->checkBox2->Checked = data->showMaxId;
			
		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		data->StartNum = Int32::Parse(this->tbFirstNumber->Text);
		data->autoSeed = this->cbRandom->Checked;
		data->Seed = Int32::Parse(this->tbRandom->Text);
		data->a = Int32::Parse(this->tbA->Text);
		data->b = Int32::Parse(this->tbB->Text);
		data->showMax = this->checkBox1->Checked;
		data->showMaxId = this->checkBox2->Checked;
		this->Close();
	}
	private: System::Void cbRandom_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->cbRandom->Checked) {
			this->tbRandom->Enabled = false;
			this->bRandom->Enabled = false;
		} else {
			this->tbRandom->Enabled = true;
			this->bRandom->Enabled = true;
		}
		data->autoSeed = this->cbRandom->Checked;
	}
	private: System::Void tbFirstNumber_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		/*Реализовать ограничитель*/
	}
	};
}
