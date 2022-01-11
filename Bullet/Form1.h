#pragma once


namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung fьr Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufьgen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::ListBox^ listBox3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::ListBox^ listBox4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ button6;





	private: System::ComponentModel::IContainer^ components;
	protected:

	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode fьr die Designerunterstьtzung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geдndert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->listBox4 = (gcnew System::Windows::Forms::ListBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(309, 6);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 0;
			this->button2->Text = L"start";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(63, 6);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 1;
			this->textBox3->Text = L"30";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(203, 6);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 2;
			this->textBox4->Text = L"60";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(3, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(54, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"cкорость";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(168, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(29, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"угол";
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(812, 112);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(81, 719);
			this->listBox2->TabIndex = 5;
			this->listBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::listBox2_SelectedIndexChanged);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(666, 8);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 6;
			// 
			// panel2
			// 
			this->panel2->AutoScroll = true;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Location = System::Drawing::Point(6, 36);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(800, 796);
			this->panel2->TabIndex = 7;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::panel2_Paint);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(390, 6);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 8;
			this->button3->Text = L"stop";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(554, 6);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 9;
			this->button4->Text = L"reset";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// listBox3
			// 
			this->listBox3->FormattingEnabled = true;
			this->listBox3->Location = System::Drawing::Point(899, 112);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(83, 719);
			this->listBox3->TabIndex = 10;
			this->listBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::listBox3_SelectedIndexChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(812, 96);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(12, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"x";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(899, 96);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(12, 13);
			this->label6->TabIndex = 12;
			this->label6->Text = L"y";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->DecimalPlaces = 2;
			this->numericUpDown1->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->numericUpDown1->Location = System::Drawing::Point(772, 8);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 20);
			this->numericUpDown1->TabIndex = 13;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown1_ValueChanged);
			// 
			// listBox4
			// 
			this->listBox4->FormattingEnabled = true;
			this->listBox4->Location = System::Drawing::Point(988, 112);
			this->listBox4->Name = L"listBox4";
			this->listBox4->Size = System::Drawing::Size(84, 719);
			this->listBox4->TabIndex = 14;
			this->listBox4->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::listBox4_SelectedIndexChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(985, 96);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(26, 13);
			this->label7->TabIndex = 15;
			this->label7->Text = L"time";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(913, 6);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 16;
			this->button5->Text = L"clearall";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(809, 36);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(78, 13);
			this->label8->TabIndex = 17;
			this->label8->Text = L"полное время";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(812, 73);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(29, 13);
			this->label9->TabIndex = 18;
			this->label9->Text = L"путь";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(893, 33);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(77, 20);
			this->textBox6->TabIndex = 19;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(847, 69);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(77, 20);
			this->textBox7->TabIndex = 20;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(988, 69);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(84, 20);
			this->textBox8->TabIndex = 24;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(937, 73);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(45, 13);
			this->label10->TabIndex = 22;
			this->label10->Text = L"Высота";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(473, 6);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 25;
			this->button6->Text = L"resume";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// Form1
			// 
			this->ClientSize = System::Drawing::Size(1085, 840);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->listBox4);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->listBox3);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button2);
			this->Name = L"Form1";
			this->Text = L"ПАМАГИТЕ";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}


	#pragma endregion
	

	double x;
	double y;
	double x1;
	double y1;
	double x2;
	double y2;
	double t = 0;
	double m;

	public: System::Void poi(double t) {
		double speedBull = Convert::ToDouble(textBox3->Text);
		double degress = Convert::ToDouble(textBox4->Text);
		polTime = (speedBull * Math::Sin((Math::PI / 180) * degress) / 9.81);
		fullTime = 2 * polTime;
		m = speedBull * Math::Cos((Math::PI / 180) * degress) * fullTime;
		h = speedBull * Math::Sin((Math::PI / 180) * degress) * polTime - (9.81 * Math::Pow(polTime, 2)) / 2;
		x2 = x1;
		y2 = y1;
		x1 = x;
		y1 = y;
		y = speedBull * Math::Sin((Math::PI / 180) * degress) * t - (9.81 * Math::Pow(t, 2)) / 2;
		x = speedBull * Math::Cos((Math::PI / 180) * degress) * t;
		if (mash) {
			m = m / 10;
			h = h / 10;
			y = y / 10;
			x = x / 10;
		}
	}

	double offset = 0.01;
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		// Вывоз перерисовке
		panel2->Invalidate();
		t = t + offset;

		poi(t);
		
		// Использование листбоксов
		listBox2->Items->Add(x);
		listBox3->Items->Add(y);
		listBox4->Items->Add(t);
		listBox2->SelectedIndex++;
		textBox5->Text = Convert::ToString(t);
		panel2->Invalidate();
		
	}
		   
	bool mash = false;
	double polTime ;
	double fullTime;	 
	double h;	   
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		mash = false;
		listBox2->Items->Clear();
		listBox3->Items->Clear();
		listBox4->Items->Clear();
		t = 0;
		x = 0;
		y = 0;
		double speedBull = Convert::ToDouble(textBox3->Text);

		double degress = Convert::ToDouble(textBox4->Text);
		polTime = (speedBull * Math::Sin((Math::PI / 180) * degress)) / 9.81;
		fullTime = 2 * polTime;
		
		h = speedBull * Math::Sin((Math::PI / 180) * degress) * polTime - (9.81 * Math::Pow(polTime, 2)) / 2;
		m = speedBull * Math::Cos((Math::PI / 180) * degress) * fullTime;
		if (h>panel2->Height || m>panel2->Width) {
			
			mash = true;
		}
		point = gcnew array<PointF>((int)(fullTime/0.01));

		int n = Convert::ToInt64(fullTime);
		textBox6->Text = Convert::ToString(fullTime);
		textBox7->Text = Convert::ToString(m);
		textBox8->Text = Convert::ToString(h);
		timer1->Start();
		vuvp();
		tr = true;
		panel2->Invalidate();
	}
	array<PointF>^ point;



	// Внимание здесь!!! При создании переменных у них есть ^, а при создании экземпляра gcnew
	SolidBrush^ brush;
	Pen^ brush1;
	Pen^ brush2;
	Pen^ brush3;
	Pen^ brush4;
	private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		brush = gcnew SolidBrush(Color::Red);
		brush1 = gcnew Pen(Color::Black);
		brush2 = gcnew Pen(Color::Blue);
		brush3 = gcnew Pen(Color::Fuchsia);
		brush4 = gcnew Pen(Color::DarkBlue);
		if (t < fullTime) {
			
			
			//g = new Graphics();
			e->Graphics->DrawLine(brush2, 0, 790 - Convert::ToInt64(h), 800, 790 - Convert::ToInt64(h));
			e->Graphics->DrawLine(brush2, Convert::ToInt64(m)+10, 0,10+Convert::ToInt64(m), 800);
			e->Graphics->DrawLine(brush3, Convert::ToInt64(m/2) + 10, 0, 10 + Convert::ToInt64(m/2), 800);
			e->Graphics->DrawLine(brush3, Convert::ToInt64(m / 2) + 10, 0, 10 + Convert::ToInt64(m / 2), 800);
			e->Graphics->DrawLine(brush1, 10, 0, 10, 800);//вертикал
			e->Graphics->DrawLine(brush1, 0, 790, 800, 790);// горизонтал
			
			e->Graphics->FillEllipse(brush,x+10,790+-y, 5, 5);
		}
		else {
			
			timer1->Stop();
			e->Graphics->DrawLine(brush3, Convert::ToInt64(m / 2) + 10, 0, 10 + Convert::ToInt64(m / 2), 800);
			e->Graphics->DrawLine(brush2, 0, 790 - Convert::ToInt64(h), 800, 790 - Convert::ToInt64(h));
			

			e->Graphics->DrawLine(brush2, Convert::ToInt64(m) + 10, 0, 10 + Convert::ToInt64(m), 800);
			

			e->Graphics->DrawLine(brush1, 10, 0, 10, 800);//вертикал
			e->Graphics->DrawLine(brush1, 0, 790, 800, 790);// горизонтал
			e->Graphics->FillEllipse(brush, x + 10, 790 + -y, 5, 5);
			stop();
			
		}
		if (tr) {
			e->Graphics->DrawCurve(brush4, point);
			//tr = false;
		}
	}

		   bool tr = false;
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		timer1->Stop();
	}


	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		stop();
	}	
	
	private: System::Void vuvp() {
		double off = 0.1;
		double k = 0;
		int n = fullTime / off;
		point = gcnew array<PointF>(n);
		for (int i = 0;i < n;i++) {
			poi(k+=off);
			point[i].X = 10+x; point[i].Y = 790+-y;
		}
	}

	private: System::Void stop() {
		t = 0;
		x = 0;
		y = 0;
	}

					  




	private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		offset = (double)numericUpDown1->Value;
	}


	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		listBox2->Items->Clear();
		listBox3->Items->Clear();
		listBox4->Items->Clear();
		t = 0;
		x = 0;
		y = 0;
		timer1->Stop();
		panel2->Invalidate();
	}
	private: System::Void listBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		listBox3->SelectedIndex = listBox2->SelectedIndex;
		listBox4->SelectedIndex = listBox3->SelectedIndex;
	}

	private: System::Void listBox3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		listBox2->SelectedIndex = listBox3->SelectedIndex;
		listBox4->SelectedIndex = listBox3->SelectedIndex;
	}
	private: System::Void listBox4_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		listBox3->SelectedIndex = listBox4->SelectedIndex;
		listBox4->SelectedIndex = listBox3->SelectedIndex;
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		timer1->Start();
	}
};
}
