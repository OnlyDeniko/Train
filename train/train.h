#pragma once
#include"all_library.h"
#include"TRAINN.h"
TRAINN *qwe;
namespace train {

	/// <summary>
	/// Сводка для train
	/// </summary>
	public ref class train : public System::Windows::Forms::Form
	{
	public:
		
		train(void)
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
		~train()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pict;

	private: System::Windows::Forms::Button^  but_show_body;



	private: System::Windows::Forms::TextBox^  cord_X;
	private: System::Windows::Forms::TextBox^  cord_Y;
	private: System::Windows::Forms::TextBox^  scale;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  but_go;
	private: System::Windows::Forms::Button^  but_exit;
	private: System::Windows::Forms::TextBox^  cnt_vagon;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  text_speed;
	private: System::Windows::Forms::Label^  label5;
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
			this->pict = (gcnew System::Windows::Forms::PictureBox());
			this->but_show_body = (gcnew System::Windows::Forms::Button());
			this->cord_X = (gcnew System::Windows::Forms::TextBox());
			this->cord_Y = (gcnew System::Windows::Forms::TextBox());
			this->scale = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->but_go = (gcnew System::Windows::Forms::Button());
			this->but_exit = (gcnew System::Windows::Forms::Button());
			this->cnt_vagon = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->text_speed = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pict))->BeginInit();
			this->SuspendLayout();
			// 
			// pict
			// 
			this->pict->BackColor = System::Drawing::Color::White;
			this->pict->Location = System::Drawing::Point(12, 12);
			this->pict->Name = L"pict";
			this->pict->Size = System::Drawing::Size(986, 576);
			this->pict->TabIndex = 0;
			this->pict->TabStop = false;
			this->pict->Click += gcnew System::EventHandler(this, &train::pict_Click);
			// 
			// but_show_body
			// 
			this->but_show_body->Location = System::Drawing::Point(1071, 261);
			this->but_show_body->Name = L"but_show_body";
			this->but_show_body->Size = System::Drawing::Size(92, 53);
			this->but_show_body->TabIndex = 5;
			this->but_show_body->Text = L"Нарисуй поезд";
			this->but_show_body->UseVisualStyleBackColor = true;
			this->but_show_body->Click += gcnew System::EventHandler(this, &train::but_show_body_Click);
			// 
			// cord_X
			// 
			this->cord_X->Location = System::Drawing::Point(1044, 23);
			this->cord_X->Name = L"cord_X";
			this->cord_X->Size = System::Drawing::Size(146, 20);
			this->cord_X->TabIndex = 0;
			this->cord_X->TextChanged += gcnew System::EventHandler(this, &train::cord_X_TextChanged);
			// 
			// cord_Y
			// 
			this->cord_Y->Location = System::Drawing::Point(1044, 65);
			this->cord_Y->Name = L"cord_Y";
			this->cord_Y->Size = System::Drawing::Size(146, 20);
			this->cord_Y->TabIndex = 1;
			this->cord_Y->TextChanged += gcnew System::EventHandler(this, &train::cord_Y_TextChanged);
			// 
			// scale
			// 
			this->scale->Location = System::Drawing::Point(1044, 102);
			this->scale->Name = L"scale";
			this->scale->Size = System::Drawing::Size(146, 20);
			this->scale->TabIndex = 2;
			this->scale->TextChanged += gcnew System::EventHandler(this, &train::scale_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(1015, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(23, 13);
			this->label1->TabIndex = 9;
			this->label1->Text = L"X : ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(1015, 68);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(23, 13);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Y : ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(1004, 105);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(34, 13);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Scale";
			// 
			// but_go
			// 
			this->but_go->Location = System::Drawing::Point(1071, 320);
			this->but_go->Name = L"but_go";
			this->but_go->Size = System::Drawing::Size(92, 53);
			this->but_go->TabIndex = 6;
			this->but_go->Text = L"Поехали";
			this->but_go->UseVisualStyleBackColor = true;
			this->but_go->Click += gcnew System::EventHandler(this, &train::but_go_Click);
			// 
			// but_exit
			// 
			this->but_exit->Location = System::Drawing::Point(1081, 536);
			this->but_exit->Name = L"but_exit";
			this->but_exit->Size = System::Drawing::Size(108, 51);
			this->but_exit->TabIndex = 7;
			this->but_exit->Text = L"Выход";
			this->but_exit->UseVisualStyleBackColor = true;
			this->but_exit->Click += gcnew System::EventHandler(this, &train::but_exit_Click);
			// 
			// cnt_vagon
			// 
			this->cnt_vagon->Location = System::Drawing::Point(1044, 163);
			this->cnt_vagon->Name = L"cnt_vagon";
			this->cnt_vagon->Size = System::Drawing::Size(146, 20);
			this->cnt_vagon->TabIndex = 3;
			this->cnt_vagon->TextChanged += gcnew System::EventHandler(this, &train::cnt_vagon_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label4->Location = System::Drawing::Point(1078, 147);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(85, 13);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Кол-во вагонов";
			// 
			// text_speed
			// 
			this->text_speed->Location = System::Drawing::Point(1044, 216);
			this->text_speed->Name = L"text_speed";
			this->text_speed->Size = System::Drawing::Size(146, 20);
			this->text_speed->TabIndex = 4;
			this->text_speed->TextChanged += gcnew System::EventHandler(this, &train::text_speed_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(1092, 200);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(55, 13);
			this->label5->TabIndex = 17;
			this->label5->Text = L"Скорость";
			// 
			// train
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Silver;
			this->ClientSize = System::Drawing::Size(1200, 600);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->text_speed);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->cnt_vagon);
			this->Controls->Add(this->but_exit);
			this->Controls->Add(this->but_go);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->scale);
			this->Controls->Add(this->cord_Y);
			this->Controls->Add(this->cord_X);
			this->Controls->Add(this->but_show_body);
			this->Controls->Add(this->pict);
			this->Name = L"train";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"train";
			this->Load += gcnew System::EventHandler(this, &train::train_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pict))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: 
		Graphics^ g;
		Bitmap^ Img;
		int startX, startY, s_scale, cnt;
		System::Void train_Load(System::Object^ sender, System::EventArgs^ e) {
			Img = gcnew Bitmap(pict->Width, pict->Height);
			g = Graphics::FromImage(Img);
			pict->Image = Img;
		}
		System::Void but_show_body_Click(System::Object^  sender, System::EventArgs^  e) {
			startX = System::Convert::ToInt32(cord_X->Text);
			startY = System::Convert::ToInt32(cord_Y->Text);
			s_scale = System::Convert::ToInt32(scale->Text);
			cnt = System::Convert::ToInt32(cnt_vagon->Text);
			qwe = new TRAINN(startX, startY, s_scale, cnt);
			qwe->show(g);
			pict->Invalidate();
		}
		System::Void but_go_Click(System::Object^  sender, System::EventArgs^  e) {
			startX = System::Convert::ToInt32(cord_X->Text);
			startY = System::Convert::ToInt32(cord_Y->Text);
			s_scale = System::Convert::ToInt32(scale->Text);
			cnt = System::Convert::ToInt32(cnt_vagon->Text);
			int dx = System::Convert::ToInt32(text_speed->Text);
			int iter = 1200 - startX + 16 * cnt * s_scale + 14 * s_scale;
			iter /= dx;
			
			for (int i = 0; i < iter; i++) {
				pict->Refresh();
				Img = gcnew Bitmap(pict->Width, pict->Height);
				g = Graphics::FromImage(Img);
				pict->Image = Img;
				pict->Invalidate();
				qwe->show(g);
				qwe->move(dx);
			}
		}
		System::Void pict_Click(System::Object^  sender, System::EventArgs^  e) {
		}
		System::Void scale_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		}
		System::Void cord_Y_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		}
		System::Void cord_X_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		}
		System::Void but_exit_Click(System::Object^  sender, System::EventArgs^  e) {
			Close();
		}
		System::Void cnt_vagon_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		}
		System::Void text_speed_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		}
};
}
