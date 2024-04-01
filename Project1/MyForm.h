#pragma once
#include <cstdlib>
#include <time.h> 


namespace Project1 {



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


	private: System::Windows::Forms::PictureBox^ collectibleObj;
	private: System::Windows::Forms::Label^ label_Title;
	private: System::Windows::Forms::Button^ btn_StartGame;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Label^ label_Timer;

	private: System::ComponentModel::IContainer^ components;

	private: int timer_amount;
	private: System::Windows::Forms::Label^ label_EndGame;
	private: System::Windows::Forms::Label^ label_Score;
	private: System::Windows::Forms::ProgressBar^ progressBar;

	private: size_t score = 0;
	private: System::Windows::Forms::Timer^ checker;
	private: System::Windows::Forms::CheckBox^ check_HardMode;
	private: System::Windows::Forms::Label^ label_Nickname;
	private: System::Windows::Forms::TextBox^ textBox_Input;
	private: int win_amount = 10;
	private: System::Windows::Forms::Timer^ timer_Delay;
	private: System::Windows::Forms::Label^ label_Info;
	private: String^ nickname;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->collectibleObj = (gcnew System::Windows::Forms::PictureBox());
			this->label_Title = (gcnew System::Windows::Forms::Label());
			this->btn_StartGame = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label_Timer = (gcnew System::Windows::Forms::Label());
			this->label_EndGame = (gcnew System::Windows::Forms::Label());
			this->label_Score = (gcnew System::Windows::Forms::Label());
			this->progressBar = (gcnew System::Windows::Forms::ProgressBar());
			this->checker = (gcnew System::Windows::Forms::Timer(this->components));
			this->check_HardMode = (gcnew System::Windows::Forms::CheckBox());
			this->label_Nickname = (gcnew System::Windows::Forms::Label());
			this->textBox_Input = (gcnew System::Windows::Forms::TextBox());
			this->timer_Delay = (gcnew System::Windows::Forms::Timer(this->components));
			this->label_Info = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->collectibleObj))->BeginInit();
			this->SuspendLayout();
			// 
			// collectibleObj
			// 
			this->collectibleObj->BackColor = System::Drawing::Color::Transparent;
			this->collectibleObj->Cursor = System::Windows::Forms::Cursors::Hand;
			this->collectibleObj->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"collectibleObj.Image")));
			this->collectibleObj->Location = System::Drawing::Point(276, 241);
			this->collectibleObj->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->collectibleObj->Name = L"collectibleObj";
			this->collectibleObj->Size = System::Drawing::Size(60, 52);
			this->collectibleObj->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->collectibleObj->TabIndex = 2;
			this->collectibleObj->TabStop = false;
			this->collectibleObj->Visible = false;
			this->collectibleObj->Click += gcnew System::EventHandler(this, &MyForm::collectibleObj_Click);
			// 
			// label_Title
			// 
			this->label_Title->BackColor = System::Drawing::Color::Transparent;
			this->label_Title->Dock = System::Windows::Forms::DockStyle::Top;
			this->label_Title->Font = (gcnew System::Drawing::Font(L"Verdana", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_Title->ForeColor = System::Drawing::Color::DarkSeaGreen;
			this->label_Title->Location = System::Drawing::Point(0, 0);
			this->label_Title->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label_Title->Name = L"label_Title";
			this->label_Title->Size = System::Drawing::Size(624, 100);
			this->label_Title->TabIndex = 3;
			this->label_Title->Text = L"Собери алмазы!";
			this->label_Title->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// btn_StartGame
			// 
			this->btn_StartGame->Location = System::Drawing::Point(212, 241);
			this->btn_StartGame->Name = L"btn_StartGame";
			this->btn_StartGame->Size = System::Drawing::Size(200, 80);
			this->btn_StartGame->TabIndex = 4;
			this->btn_StartGame->Text = L"Начать игру!";
			this->btn_StartGame->UseVisualStyleBackColor = true;
			this->btn_StartGame->Click += gcnew System::EventHandler(this, &MyForm::btn_StartGame_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// label_Timer
			// 
			this->label_Timer->AutoSize = true;
			this->label_Timer->BackColor = System::Drawing::Color::Transparent;
			this->label_Timer->Font = (gcnew System::Drawing::Font(L"Verdana", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_Timer->ForeColor = System::Drawing::Color::White;
			this->label_Timer->Location = System::Drawing::Point(282, 9);
			this->label_Timer->Name = L"label_Timer";
			this->label_Timer->Size = System::Drawing::Size(57, 35);
			this->label_Timer->TabIndex = 5;
			this->label_Timer->Text = L"15";
			this->label_Timer->Visible = false;
			// 
			// label_EndGame
			// 
			this->label_EndGame->BackColor = System::Drawing::Color::Transparent;
			this->label_EndGame->Font = (gcnew System::Drawing::Font(L"Verdana", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_EndGame->ForeColor = System::Drawing::Color::DarkSeaGreen;
			this->label_EndGame->Location = System::Drawing::Point(0, 0);
			this->label_EndGame->Name = L"label_EndGame";
			this->label_EndGame->Size = System::Drawing::Size(624, 443);
			this->label_EndGame->TabIndex = 6;
			this->label_EndGame->Text = L"Вы выиграли!";
			this->label_EndGame->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label_EndGame->Visible = false;
			// 
			// label_Score
			// 
			this->label_Score->AutoSize = true;
			this->label_Score->BackColor = System::Drawing::Color::Transparent;
			this->label_Score->Font = (gcnew System::Drawing::Font(L"Verdana", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_Score->ForeColor = System::Drawing::Color::White;
			this->label_Score->Location = System::Drawing::Point(12, 397);
			this->label_Score->Name = L"label_Score";
			this->label_Score->Size = System::Drawing::Size(36, 35);
			this->label_Score->TabIndex = 7;
			this->label_Score->Text = L"0";
			this->label_Score->Visible = false;
			// 
			// progressBar
			// 
			this->progressBar->Location = System::Drawing::Point(72, 405);
			this->progressBar->Name = L"progressBar";
			this->progressBar->Size = System::Drawing::Size(540, 17);
			this->progressBar->TabIndex = 8;
			this->progressBar->Visible = false;
			// 
			// checker
			// 
			this->checker->Enabled = true;
			this->checker->Interval = 10;
			this->checker->Tick += gcnew System::EventHandler(this, &MyForm::checker_Tick);
			// 
			// check_HardMode
			// 
			this->check_HardMode->AutoSize = true;
			this->check_HardMode->BackColor = System::Drawing::Color::Transparent;
			this->check_HardMode->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->check_HardMode->ForeColor = System::Drawing::Color::White;
			this->check_HardMode->Location = System::Drawing::Point(212, 217);
			this->check_HardMode->Name = L"check_HardMode";
			this->check_HardMode->Size = System::Drawing::Size(147, 20);
			this->check_HardMode->TabIndex = 9;
			this->check_HardMode->Text = L"Сложный режим";
			this->check_HardMode->UseVisualStyleBackColor = false;
			// 
			// label_Nickname
			// 
			this->label_Nickname->AutoSize = true;
			this->label_Nickname->BackColor = System::Drawing::Color::Transparent;
			this->label_Nickname->Cursor = System::Windows::Forms::Cursors::Default;
			this->label_Nickname->Font = (gcnew System::Drawing::Font(L"Verdana", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_Nickname->ForeColor = System::Drawing::Color::DarkSeaGreen;
			this->label_Nickname->Location = System::Drawing::Point(50, 124);
			this->label_Nickname->Name = L"label_Nickname";
			this->label_Nickname->Size = System::Drawing::Size(325, 35);
			this->label_Nickname->TabIndex = 10;
			this->label_Nickname->Text = L"Введите свое имя:";
			// 
			// textBox_Input
			// 
			this->textBox_Input->Location = System::Drawing::Point(375, 128);
			this->textBox_Input->Name = L"textBox_Input";
			this->textBox_Input->Size = System::Drawing::Size(222, 31);
			this->textBox_Input->TabIndex = 11;
			// 
			// timer_Delay
			// 
			this->timer_Delay->Tick += gcnew System::EventHandler(this, &MyForm::timer_Delay_Tick);
			// 
			// label_Info
			// 
			this->label_Info->AutoSize = true;
			this->label_Info->BackColor = System::Drawing::Color::Transparent;
			this->label_Info->ForeColor = System::Drawing::Color::DarkSeaGreen;
			this->label_Info->Location = System::Drawing::Point(3, 363);
			this->label_Info->Name = L"label_Info";
			this->label_Info->Size = System::Drawing::Size(489, 69);
			this->label_Info->TabIndex = 12;
			this->label_Info->Text = L"Правила:\r\nОбычный режим: 25 алмазов за 20 секунд\r\nСложный режим: 20 алмазов за 15"
				L" секунд\r\n";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 23);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(624, 441);
			this->Controls->Add(this->label_Info);
			this->Controls->Add(this->textBox_Input);
			this->Controls->Add(this->label_Nickname);
			this->Controls->Add(this->check_HardMode);
			this->Controls->Add(this->progressBar);
			this->Controls->Add(this->label_Score);
			this->Controls->Add(this->label_Timer);
			this->Controls->Add(this->collectibleObj);
			this->Controls->Add(this->label_Title);
			this->Controls->Add(this->btn_StartGame);
			this->Controls->Add(this->label_EndGame);
			this->Font = (gcnew System::Drawing::Font(L"Verdana", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->collectibleObj))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void collectibleObj_Click(System::Object^ sender, System::EventArgs^ e) {
		this->collectibleObj->Location = System::Drawing::Point(rand() % 565, rand() % 390);
		this->timer_Delay->Enabled = false;
		this->timer_Delay->Enabled = true;
		this->score += 1;
		this->progressBar->Value += (100 / win_amount);
		this->label_Score->Text = System::Convert::ToString(System::Convert::ToInt32(this->label_Score->Text) + 1);
	}
	private: System::Void btn_StartGame_Click(System::Object^ sender, System::EventArgs^ e) {
		this->label_Info->Visible = false;
		this->progressBar->Visible = true;
		this->label_Nickname->Visible = false;
		this->nickname = this->textBox_Input->Text;
		this->textBox_Input->Visible = false;
		this->label_Title->Visible = false;
		this->label_Score->Visible = true;
		this->label_EndGame->Visible = false;
		this->btn_StartGame->Visible = false;
		this->collectibleObj->Location = System::Drawing::Point(rand() % 565, rand() % 390);
		this->collectibleObj->Visible = true;
		this->label_Timer->Visible = true;
		this->check_HardMode->Visible = false;
		this->timer1->Enabled = true;
		if (this->check_HardMode->Checked == true) {
			this->timer_Delay->Interval = 750;
			this->win_amount = 20;
			this->label_Timer->Text = "15";
		}
		else {
			this->timer_Delay->Interval = 1500;
			this->win_amount = 25;
			this->label_Timer->Text = "20";
		}
		this->timer_Delay->Enabled = true;
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		this->timer_amount = System::Convert::ToInt32(this->label_Timer->Text);
		if (this->score >= win_amount) {
			this->timer1->Enabled = false;
			this->collectibleObj->Visible = false;
			this->label_EndGame->Visible = true;
			this->label_Score->Visible = false;
		}
		if (this->timer_amount == 0)
		{
			this->timer1->Enabled = false;
			this->collectibleObj->Visible = false;
			this->label_EndGame->Text = "Вы проиграли, " + this->nickname + "!";
			this->label_EndGame->Visible = true;
			this->label_Score->Visible = false;
			this->progressBar->Visible = false;
		}
		else {
			this->timer_amount--;
			this->label_Timer->Text = System::Convert::ToString(timer_amount);
		}


	}
	private: System::Void checker_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (this->score >= win_amount) {
			this->collectibleObj->Visible = false;
			this->timer1->Enabled = false;
			this->label_EndGame->Visible = true;
			this->label_Score->Visible = false;
			this->progressBar->Visible = false;
			this->label_EndGame->Text = "Вы выиграли, " + this->nickname + "!";

		}
	}
	private: System::Void timer_Delay_Tick(System::Object^ sender, System::EventArgs^ e) {
		this->collectibleObj->Location = System::Drawing::Point(rand() % 565, rand() % 350);
	}
};
}
