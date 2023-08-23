#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Evfolyammunka10 {

	String^ TabToSpase(String^ s);
	String^ DeleteUnnacessarySpace(String^ s);
	String^ DeleteUnnacessaryEnter(String^ s);
	bool isWhiteSpace(wchar_t c);
	String^ SajatTrim(String^ s);
	bool HelyesFelepitesuMatrix(String^ s1, int& n1, int& m1);
	array<float, 2>^ StringToMatrix(String^ s, int n, int m);
	bool HelyesKarakterek(String^ s);

	/// <summary>
	/// Summary for MyUserControl
	/// </summary>
	public ref class MyUserControl : public System::Windows::Forms::UserControl
	{
	public:
		MyUserControl(void)
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
		~MyUserControl()
		{
			if (components)
			{
				delete components;
			}
		}
		bool inv;
		bool determ;
		bool transzp;
		bool detl;
		String^ sDeterminans;
		String^ sInverz;
		String^ sTranszponalt;
		bool nincsinverz;
		bool helyeskarakter;
		bool helyes_matrix;
		bool negyzetes;
		bool levezetes;

	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ Szamitas;

	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::RadioButton^ Inverz;
	private: System::Windows::Forms::RadioButton^ Transzponalt;


	private: System::Windows::Forms::RadioButton^ Determinans;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ Matrix;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ Eredmeny1;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::Label^ Eredmeny;





	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Szamitas = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Inverz = (gcnew System::Windows::Forms::RadioButton());
			this->Transzponalt = (gcnew System::Windows::Forms::RadioButton());
			this->Determinans = (gcnew System::Windows::Forms::RadioButton());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Matrix = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Eredmeny1 = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->Eredmeny = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel1->Controls->Add(this->Szamitas, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel2, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->panel1, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->panel2, 0, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 4;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 62.96329F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 39)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 11)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(700, 319);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// Szamitas
			// 
			this->Szamitas->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->Szamitas->BackColor = System::Drawing::Color::DarkRed;
			this->Szamitas->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->Szamitas->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Szamitas->FlatAppearance->BorderColor = System::Drawing::Color::DarkRed;
			this->Szamitas->FlatAppearance->BorderSize = 0;
			this->Szamitas->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkRed;
			this->Szamitas->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Szamitas->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Szamitas->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Szamitas->Location = System::Drawing::Point(298, 272);
			this->Szamitas->Name = L"Szamitas";
			this->Szamitas->Size = System::Drawing::Size(103, 33);
			this->Szamitas->TabIndex = 0;
			this->Szamitas->Text = L"Számítás";
			this->Szamitas->UseVisualStyleBackColor = false;
			this->Szamitas->Click += gcnew System::EventHandler(this, &MyUserControl::Szamitas_Click);
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel2->ColumnCount = 5;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				120)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				120)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				120)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->Controls->Add(this->Inverz, 1, 0);
			this->tableLayoutPanel2->Controls->Add(this->Transzponalt, 3, 0);
			this->tableLayoutPanel2->Controls->Add(this->Determinans, 2, 0);
			this->tableLayoutPanel2->Location = System::Drawing::Point(3, 242);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(694, 24);
			this->tableLayoutPanel2->TabIndex = 1;
			// 
			// Inverz
			// 
			this->Inverz->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->Inverz->AutoSize = true;
			this->Inverz->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Inverz->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Inverz->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Inverz->Location = System::Drawing::Point(195, 3);
			this->Inverz->Name = L"Inverz";
			this->Inverz->Size = System::Drawing::Size(63, 18);
			this->Inverz->TabIndex = 0;
			this->Inverz->Text = L"Inverz";
			this->Inverz->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Inverz->UseVisualStyleBackColor = true;
			this->Inverz->CheckedChanged += gcnew System::EventHandler(this, &MyUserControl::Inverz_CheckedChanged);
			// 
			// Transzponalt
			// 
			this->Transzponalt->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->Transzponalt->AutoSize = true;
			this->Transzponalt->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Transzponalt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Transzponalt->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Transzponalt->Location = System::Drawing::Point(414, 3);
			this->Transzponalt->Name = L"Transzponalt";
			this->Transzponalt->Size = System::Drawing::Size(106, 18);
			this->Transzponalt->TabIndex = 2;
			this->Transzponalt->Text = L"Transzponált";
			this->Transzponalt->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Transzponalt->UseVisualStyleBackColor = true;
			this->Transzponalt->CheckedChanged += gcnew System::EventHandler(this, &MyUserControl::Transzponalt_CheckedChanged);
			// 
			// Determinans
			// 
			this->Determinans->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->Determinans->AutoSize = true;
			this->Determinans->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Determinans->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Determinans->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Determinans->Location = System::Drawing::Point(293, 3);
			this->Determinans->Name = L"Determinans";
			this->Determinans->Size = System::Drawing::Size(107, 18);
			this->Determinans->TabIndex = 1;
			this->Determinans->Text = L"Determináns";
			this->Determinans->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Determinans->UseVisualStyleBackColor = true;
			this->Determinans->CheckedChanged += gcnew System::EventHandler(this, &MyUserControl::Determinans_CheckedChanged);
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel1->Location = System::Drawing::Point(30, 311);
			this->panel1->Margin = System::Windows::Forms::Padding(30, 3, 30, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(640, 2);
			this->panel1->TabIndex = 2;
			// 
			// panel2
			// 
			this->panel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel2->AutoScroll = true;
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->Matrix);
			this->panel2->Location = System::Drawing::Point(3, 3);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(694, 233);
			this->panel2->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(166, 46);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(60, 19);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Mátrix:";
			// 
			// Matrix
			// 
			this->Matrix->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->Matrix->Font = (gcnew System::Drawing::Font(L"Courier New", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Matrix->Location = System::Drawing::Point(166, 68);
			this->Matrix->MinimumSize = System::Drawing::Size(354, 162);
			this->Matrix->Multiline = true;
			this->Matrix->Name = L"Matrix";
			this->Matrix->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Matrix->Size = System::Drawing::Size(365, 162);
			this->Matrix->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(26, 331);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(96, 19);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Eredmény: ";
			// 
			// Eredmeny1
			// 
			this->Eredmeny1->AutoSize = true;
			this->Eredmeny1->Font = (gcnew System::Drawing::Font(L"Courier New", 13));
			this->Eredmeny1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Eredmeny1->Location = System::Drawing::Point(100, 331);
			this->Eredmeny1->Name = L"Eredmeny1";
			this->Eredmeny1->Size = System::Drawing::Size(0, 20);
			this->Eredmeny1->TabIndex = 4;
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->linkLabel1->LinkColor = System::Drawing::Color::Maroon;
			this->linkLabel1->Location = System::Drawing::Point(26, 354);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(83, 20);
			this->linkLabel1->TabIndex = 5;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Levezetés";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyUserControl::linkLabel1_LinkClicked);
			// 
			// Eredmeny
			// 
			this->Eredmeny->AutoSize = true;
			this->Eredmeny->Font = (gcnew System::Drawing::Font(L"Courier New", 10));
			this->Eredmeny->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Eredmeny->Location = System::Drawing::Point(100, 354);
			this->Eredmeny->Name = L"Eredmeny";
			this->Eredmeny->Size = System::Drawing::Size(0, 17);
			this->Eredmeny->TabIndex = 6;
			// 
			// MyUserControl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Controls->Add(this->Eredmeny);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->Eredmeny1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Name = L"MyUserControl";
			this->Size = System::Drawing::Size(700, 540);
			this->Load += gcnew System::EventHandler(this, &MyUserControl::MyUserControl_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void Inverz_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		inv = true;
		determ = false;
		transzp = false;
	}
		   void inverz_szamitas() {
			   String^ s1 = Matrix->Text;
			   s1 = TabToSpase(s1);
			   s1 = DeleteUnnacessarySpace(s1);
			   s1 = DeleteUnnacessaryEnter(s1);
			   s1 = SajatTrim(s1);
			   Matrix->Text = s1;
			   if (s1->Length == 0) {
				   MessageBox::Show("Adja meg a mátrixot!", "Hiba!", MessageBoxButtons::OK);
				   return;
			   }
			   helyeskarakter = true;
			   helyes_matrix = true;
			   negyzetes = true;
			   nincsinverz = false;
			   helyeskarakter = HelyesKarakterek(s1);
			   if (helyeskarakter && helyes_matrix) {
				   int n1, m1; // a matrix meretei
				   helyes_matrix = HelyesFelepitesuMatrix(s1, n1, m1);
				   array<float, 2>^ mm1 = gcnew array < float, 2>(n1, 2 * m1);
				   mm1 = StringToMatrix(s1, n1, 2 * m1);
				   /*---------------------------------------Inverz--------------------------------------*/
				   float det = 1;
				   torol();
				   Eredmeny->Visible = false;
				   Eredmeny1->Visible = true;
				   linkLabel1->Visible = false;
				   if (n1 == m1) {
					   for (int i = 0; i < n1; i++)
					   {
						   mm1[i, m1 + i] = 1;
					   }
					   for (int i = 0; i < n1; ++i)
					   {
						   bool flag = false;
						   if (mm1[i, i] > -0.00000000001 && mm1[i, i] < 0.00000000001)
						   {
							   flag = true;
							   for (int j = i + 1; j < m1; ++j)
							   {
								   if (!(mm1[j, i] > -0.00000000001 && mm1[j, i] < 0.00000000001)) {
									   det *= -1; 
									   for (int k = 0; k < 2 * m1; ++k) {
										   double t = mm1[i, k]; 
										   mm1[i, k] = mm1[j, k];
										   mm1[j, k] = t;
									   }
									   flag = false;
									   break;
								   }
							   }
						   }

						   if (flag == true) {
							   det = 0; 
							   break;
						   }
						   else {
							   for (int j = i + 1; j < n1; j++)
							   {
								   double c = mm1[j, i] / mm1[i, i];
								   for (int k = 0; k < 2 * m1; k++) {
									   mm1[j, k] -= (mm1[i, k] * c); 

								   }
							   }
							   det *= mm1[i, i];
						   }
					   }
				   }
				   else {
					   negyzetes = false;
				   }
				   if (!(det > -0.00000000001 && det < 0.00000000001)) {
					   sInverz = "";
					   int d;
					   for (int i = n1 - 1; i > 0; i--) {
						   for (int j = i - 1; j >= 0; j--) {
							   double c = mm1[j, i] / mm1[i, i];
							   for (int k = 0; k < 2 * m1; k++) {
								   mm1[j, k] -= (mm1[i, k] * c);
							   }

						   }
					   }
					   for (int i = 0; i < n1; i++) {
						   if (mm1[i, i] != 1) {
							   double c = 1 / mm1[i, i];
							   for (int j = 0; j < 2 * m1; j++) {
								   mm1[i, j] *= c;
							   }
						   }
					   }
					   int kul = 0;
					   int hossz = 0;
					   for (int i = 0; i < n1; i++) {
						   int maxhossz = 0;
						   sInverz += "| ";
						   for (int j = m1; j < 2 * m1; j++) {
							   for (int p = 0; p < n1; p++) {
								   if (mm1[p, j].ToString("F2")->Length > maxhossz) {
									   maxhossz = mm1[p, j].ToString("F2")->Length;
								   }
							   }
							   hossz = mm1[i, j].ToString("F2")->Length;
							   kul = maxhossz - hossz;
							   for (int l = 0; l < kul; l++) {
								   sInverz += " ";
							   }
							   sInverz += mm1[i, j].ToString("f2") + " ";
						   }
						   sInverz += " |";
						   sInverz += "\r\n";
					   }
				   }
				   else {
					   nincsinverz = true;
				   }
			   }

		   }
		   void inverz_levezetes() {
			   String^ s1 = Matrix->Text;
			   s1 = TabToSpase(s1);
			   s1 = DeleteUnnacessarySpace(s1);
			   s1 = DeleteUnnacessaryEnter(s1);
			   s1 = SajatTrim(s1);
			   Matrix->Text = s1;
			   if (s1->Length == 0) {
				   MessageBox::Show("Adja meg a mátrixot!", "Hiba!", MessageBoxButtons::OK);
				   return;
			   }
			   helyeskarakter = true;
			   helyes_matrix = true;
			   negyzetes = true;
			   nincsinverz = false;
			   helyeskarakter = HelyesKarakterek(s1);
			   if (helyeskarakter && helyes_matrix) {
				   int n1, m1; // a matrix meretei
				   helyes_matrix = HelyesFelepitesuMatrix(s1, n1, m1);
				   array<float, 2>^ mm1 = gcnew array < float, 2>(n1, 2 * m1);
				   mm1 = StringToMatrix(s1, n1, 2 * m1);
				   /*---------------------------------------Inverz--------------------------------------*/
				   float det = 1;
				   if (n1 == m1) {
					   for (int i = 0; i < n1; i++)
					   {
						   mm1[i, m1 + i] = 1;
					   }
					   invlevezetes(mm1, n1, m1);
					   Eredmeny->Text += "\r\n";
					   for (int i = 0; i < n1; ++i)
					   {
						   bool flag = false;
						   if (mm1[i, i] > -0.00000000001 && mm1[i, i] < 0.00000000001)
						   {
							   flag = true;
							   for (int j = i + 1; j < m1; ++j)
							   {
								   if (!(mm1[j, i] > -0.00000000001 && mm1[j, i] < 0.00000000001)) {
									   Eredmeny->Text += "Csere: s" + (i + 1).ToString() + " <=> s" + (j + 1).ToString();
									   Eredmeny->Text += "\r\n";
									   Eredmeny->Text += "\r\n";
									   det *= -1; // sorcserekor elojelet valt a determinans
									   for (int k = 0; k < 2 * m1; ++k) {
										   double t = mm1[i, k]; // sorcsere
										   mm1[i, k] = mm1[j, k];
										   mm1[j, k] = t;
									   }
									   flag = false;
									   break;
								   }
							   }
						   }

						   if (flag == true) {
							   det = 0; // ha az egész oszlop 0, akkor a determinans is
							   break;
						   }
						   else {
							   for (int j = i + 1; j < n1; j++)
							   {
								   double c = mm1[j, i] / mm1[i, i];
								   if (!(c > -0.00000000001 && c < 0.00000000001)) {
									   Eredmeny->Text += "Mûvelet: " + (-c).ToString("F2") + "*s" + (i + 1).ToString() + "+s" + (j + 1).ToString();
									   Eredmeny->Text += "\r\n";
									   Eredmeny->Text += "\r\n";
								   }
								   for (int k = 0; k < 2 * m1; k++) {
									   mm1[j, k] -= (mm1[i, k] * c); // Gauss eliminacio

								   }
								   invlevezetes(mm1, n1, m1);
								   Eredmeny->Text += "\r\n";
							   }
							   det *= mm1[i, i];
						   }
					   }
				   }
				   else {
					   negyzetes = false;
				   }
				   if (!(det > -0.00000000001 && det < 0.00000000001)) {
					   sInverz = "";
					   int d;
					   for (int i = n1 - 1; i > 0; i--) {
						   for (int j = i - 1; j >= 0; j--) {
							   double c = mm1[j, i] / mm1[i, i];
							   Eredmeny->Text += "Mûvelet: " + (-c).ToString("F2") + "*s" + (i + 1).ToString() + "+s" + (j + 1).ToString();
							   Eredmeny->Text += "\r\n";
							   Eredmeny->Text += "\r\n";
							   for (int k = 0; k < 2 * m1; k++) {
								   mm1[j, k] -= (mm1[i, k] * c);
							   }
							   invlevezetes(mm1, n1, m1);
							   Eredmeny->Text += "\r\n";

						   }
					   }
					   for (int i = 0; i < n1; i++) {
						   if (mm1[i, i] != 1) {
							   double c = 1 / mm1[i, i];
							   Eredmeny->Text += "Mûvelet: " + c.ToString("F2") + "*s" + (i + 1).ToString();
							   Eredmeny->Text += "\r\n";
							   Eredmeny->Text += "\r\n";
							   for (int j = 0; j < 2 * m1; j++) {
								   mm1[i, j] *= c;
							   }
							   invlevezetes(mm1, n1, m1);
							   Eredmeny->Text += "\r\n";
						   }
					   }
					   int kul = 0;
					   int hossz = 0;
					   for (int i = 0; i < n1; i++) {
						   int maxhossz = 0;
						   sInverz += "| ";
						   for (int j = m1; j < 2 * m1; j++) {
							   for (int p = 0; p < n1; p++) {
								   if (mm1[p, j].ToString("F2")->Length > maxhossz) {
									   maxhossz = mm1[p, j].ToString("F2")->Length;
								   }
							   }
							   hossz = mm1[i, j].ToString("F2")->Length;
							   kul = maxhossz - hossz;
							   for (int l = 0; l < kul; l++) {
								   sInverz += " ";
							   }
							   sInverz += mm1[i, j].ToString("f2") + " ";
						   }
						   sInverz += " |";
						   sInverz += "\r\n";
					   }
					   Eredmeny->Text += sInverz;
					   Eredmeny->Text += "\r\n";
					   Eredmeny->Text += "\r\n";
				   }
				   else {
					   nincsinverz = true;
				   }
			   }
		   }

	private: System::Void Determinans_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		inv = false;
		determ = true;
		transzp = false;
	}
		   void determinans_szamitas() {
			   String^ s1 = Matrix->Text;
			   s1 = TabToSpase(s1);
			   s1 = DeleteUnnacessarySpace(s1);
			   s1 = DeleteUnnacessaryEnter(s1);
			   s1 = SajatTrim(s1);
			   Matrix->Text = s1;
			   if (s1->Length == 0) {
				   MessageBox::Show("Adja meg a mátrixot!", "Hiba!", MessageBoxButtons::OK);
				   return;
			   }
			   helyeskarakter = true;
			   helyes_matrix = true;
			   negyzetes = true;
			   helyeskarakter = HelyesKarakterek(s1);
			   if (helyeskarakter && helyes_matrix) {
				   int n1, m1; // a matrix meretei
				   helyes_matrix = HelyesFelepitesuMatrix(s1, n1, m1);
				   array<float, 2>^ mm1 = gcnew array < float, 2>(n1, m1);
				   mm1 = StringToMatrix(s1, n1, m1);
				   /*------------------------Determinans-----------------------------------*/
				   float det = 1;
				   if (n1 == m1) {
					   sDeterminans = "";
					   torol();
					   Eredmeny->Visible = false;
					   Eredmeny1->Visible = true;
					   linkLabel1->Visible = false;
					   for (int i = 0; i < n1; ++i)
					   {
						   bool flag = false;
						   if (mm1[i, i] > -0.00000000001 && mm1[i, i] < 0.00000000001)
						   {
							   flag = true;
							   for (int j = i; j < n1; ++j)
							   {
								   if (!(mm1[j, i] > -0.00000000001 && mm1[j, i] < 0.00000000001)) {
									   det *= -1; 
									   for (int k = 0; k < n1; ++k) {
										   double t = mm1[i, k]; 
										   mm1[i, k] = mm1[j, k];
										   mm1[j, k] = t;
										   flag = false;
									   }
									   break;
								   }
							   }
						   }

						   if (flag == true) {
							   det = 0; // 
							   break;
						   }
						   else {
							   for (int j = i + 1; j < n1; j++)
							   {
								   double c = mm1[j, i] / mm1[i, i];
								   if(!(c > -0.00000000001 && c < 0.00000000001)){
									   for (int k = i; k < m1; k++) {
										   mm1[j, k] -= mm1[i, k] * c;
									   }
									}
							   }
							 
						   }
					   }
					   for (int i = 0; i < n1; i++) {
						   det *= mm1[i, i];
					   }
					   sDeterminans += Convert::ToString(det);
					   Eredmeny->Text += "\r\n";
				   }
				   else {
					   negyzetes = false;
				   }
			   }
		   }
		   void determinans_levezetes() {
			   String^ s1 = Matrix->Text;
			   s1 = TabToSpase(s1);
			   s1 = DeleteUnnacessarySpace(s1);
			   s1 = DeleteUnnacessaryEnter(s1);
			   s1 = SajatTrim(s1);
			   Matrix->Text = s1;
			   if (s1->Length == 0) {
				   MessageBox::Show("Adja meg a mátrixot!", "Hiba!", MessageBoxButtons::OK);
				   return;
			   }
			   helyeskarakter = true;
			   helyes_matrix = true;
			   negyzetes = true;
			   helyeskarakter = HelyesKarakterek(s1);
			   if (helyeskarakter && helyes_matrix) {
				   int n1, m1; // a matrix meretei
				   helyes_matrix = HelyesFelepitesuMatrix(s1, n1, m1);
				   array<float, 2>^ mm1 = gcnew array < float, 2>(n1, m1);
				   mm1 = StringToMatrix(s1, n1, m1);
				   /*------------------------Determinans-----------------------------------*/
				   float det = 1;
				   if (n1 == m1) {
					   sDeterminans = "";
					   detlevezetes(mm1, n1, m1);
					   Eredmeny->Text += "\r\n";
					   for (int i = 0; i < n1; ++i)
					   {
						   bool flag = false;
						   if (mm1[i, i] > -0.00000000001 && mm1[i, i] < 0.00000000001)
						   {
							   flag = true;
							   for (int j = i; j < n1; ++j)
							   {
								   if (!(mm1[j, i] > -0.00000000001 && mm1[j, i] < 0.00000000001)) {
									   Eredmeny->Text += "Csere: s" + (i + 1).ToString() + " <=> s" + (j + 1).ToString();
									   Eredmeny->Text += "\r\n";
									   Eredmeny->Text += "\r\n";
									   det *= -1; 
									   for (int k = 0; k < n1; ++k) {
										   double t = mm1[i, k]; 
										   mm1[i, k] = mm1[j, k];
										   mm1[j, k] = t;
										   flag = false;
									   }
									   detlevezetes(mm1, n1, m1);
									   break;
								   }
							   }
						   }

						   if (flag == true) {
							   det = 0; // ha az egész oszlop 0, akkor a determinans is
							   break;
						   }
						   else {
							   for (int j = i + 1; j < n1; j++)
							   {
								   double c = mm1[j, i] / mm1[i, i];
								   if (!(c > -0.00000000001 && c < 0.00000000001)) {
									   Eredmeny->Text += "Mûvelet: " + (-c).ToString("F2") + "*s" + (i + 1).ToString() + "+s" + (j + 1).ToString();
									   Eredmeny->Text += "\r\n";
									   Eredmeny->Text += "\r\n";
									   for (int k = i; k < m1; k++) {
										   mm1[j, k] -= mm1[i, k] * c; // Gauss eliminacio

									   }
									   detlevezetes(mm1, n1, m1);
									   Eredmeny->Text += "\r\n";
								   }
							   }
							   
						   }
					   }
					   for (int i = 0; i < n1; i++) {
						   det *= mm1[i, i];
					   }
					   Eredmeny->Text += (det).ToString("F2") + " = ";
					   for (int i = 0; i < n1; i++) {
						   Eredmeny->Text += (mm1[i, i]).ToString("F2");
						   if (i < n1 - 1) {
							   Eredmeny->Text += " * ";
						   }
					   }
					   Eredmeny->Text += "\r\n";
					   Eredmeny->Text += "\r\n";
				   }
				   else {
					   negyzetes = false;
				   }
			   }
		   }

	private: System::Void Transzponalt_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	inv = false;
	determ = false;
	transzp = true;
	}
	   void transzponalt_szamitas() {
		   String^ s1 = Matrix->Text;
		   s1 = TabToSpase(s1);
		   s1 = DeleteUnnacessarySpace(s1);
		   s1 = DeleteUnnacessaryEnter(s1);
		   s1 = SajatTrim(s1);
		   Matrix->Text = s1;
		   helyeskarakter = true;
		   helyes_matrix = true;
		   if (s1->Length == 0) {
			   MessageBox::Show("Adja meg a mátrixot!", "Hiba!", MessageBoxButtons::OK);
			   return;
		   }
		   helyeskarakter = HelyesKarakterek(s1);
		   int n1, m1; // a matrix meretei
		   helyes_matrix = HelyesFelepitesuMatrix(s1, n1, m1);
		   if (helyeskarakter && helyes_matrix) {
			   array<float, 2>^ mm1 = gcnew array < float, 2>(n1, m1);
			   mm1 = StringToMatrix(s1, n1, m1);

			   /*---------------------------Transzponált----------------------------------*/
			   sTranszponalt = "";
			   Eredmeny->Visible = false;
			   Eredmeny1->Visible = true;
			   torol();
			   for (int i = 0; i < n1; i++) {
				   int csere;
				   for (int j = i + 1; j < m1; j++) {
					   csere = mm1[i, j];
					   mm1[i, j] = mm1[j, i];
					   mm1[j, i] = csere;
				   }

			   }
			   int maxhossz = 0, kul = 0, hossz = 0;
			   for (int i = 0; i < n1; i++) {
				   maxhossz = 0;
				   sTranszponalt += "| ";
				   for (int j = 0; j < m1; j++) {
					   for (int p = 0; p < n1; p++) {
						   if (mm1[p, j].ToString("F2")->Length > maxhossz) {
							   maxhossz = mm1[p, j].ToString("F2")->Length;
						   }
					   }
					   hossz = mm1[i, j].ToString("F2")->Length;
					   kul = maxhossz - hossz;
					   for (int l = 0; l < kul; l++) {
						   sTranszponalt += " ";
					   }
					   sTranszponalt += (mm1[i, j]).ToString("F2") + " ";
				   }
				   sTranszponalt += "|";
				   sTranszponalt += "\r\n";
			   }
		   }
}
	private: System::Void Szamitas_Click(System::Object^ sender, System::EventArgs^ e) {
		Eredmeny1->Text = "";
		if (inv) {
			inverz_szamitas();
			if (!nincsinverz && helyeskarakter && helyes_matrix && negyzetes) {
				Eredmeny1->Text += sInverz;
				linkLabel1->Visible = true;
				
			}
			if (nincsinverz) {
				MessageBox::Show("A mátrixnak nincs inverze", "Hiba!", MessageBoxButtons::OK);
				return;
			}
			if (!helyeskarakter) {
				MessageBox::Show("Nem helyesek a mátrix karakterei!", "Hiba!", MessageBoxButtons::OK);
				return;
			}
			if (!helyes_matrix) {
				MessageBox::Show("Nem megfelelõ felépítésû a matrix!", "Hiba!", MessageBoxButtons::OK);
				return;
			}
			if (!negyzetes) {
				MessageBox::Show("Nem megfelelõ a mátrix mérete", "Hiba!", MessageBoxButtons::OK);
				return;
			}
			
		}
		if (determ) {
			determinans_szamitas();
			if (helyeskarakter && helyes_matrix && negyzetes) {
				Eredmeny1->Text = sDeterminans;
				linkLabel1->Visible = true;
			}
			if (!helyeskarakter) {
				MessageBox::Show("Nem helyesek a mátrix karakterei!", "Hiba!", MessageBoxButtons::OK);
				return;
			}
			if (!helyes_matrix) {
				MessageBox::Show("Nem megfelelõ felépítésû a matrix!", "Hiba!", MessageBoxButtons::OK);
				return;
			}
			if (!negyzetes) {
				MessageBox::Show("Nem megfelelõ a mátrix mérete", "Hiba!", MessageBoxButtons::OK);
				return;
			}
			
		}
		if (transzp) {
			transzponalt_szamitas();
			if (helyeskarakter && helyes_matrix){
				Eredmeny1->Text = sTranszponalt;
				linkLabel1->Visible = false;
			}
			if (!helyeskarakter) {
				MessageBox::Show("Nem helyesek a mátrix karakterei!", "Hiba!", MessageBoxButtons::OK);
				return;
			}
			if (!helyes_matrix) {
				MessageBox::Show("Nem megfelelõ felépítésû a matrix!", "Hiba!", MessageBoxButtons::OK);
				return;
			}
		
		}
}
private: System::Void MyUserControl_Load(System::Object^ sender, System::EventArgs^ e) {
	sDeterminans = "";
	sInverz = "";
	sTranszponalt = "";
	inv = false;
	determ = false;
	transzp = false;
	detl = false;
	Eredmeny->Visible = false;
	linkLabel1->Visible = false;
	nincsinverz = false;
	helyeskarakter = true;
	helyes_matrix = true;
	negyzetes = true;
	levezetes = false;
}
	   void detlevezetes(array<float, 2>^ matrix, int n, int m) {
		   int kul = 0;
		   int hossz = 0;
		   for (int i = 0; i < n; i++) {
			   int maxhossz = 0;
			   Eredmeny->Text += "s" + (i + 1).ToString() + "  " + "| ";
			   for (int j = 0; j < m; j++) {  
				   for (int p = 0; p < m; p++) {
					   if (matrix[p, j].ToString("F2")->Length > maxhossz) {
						   maxhossz = matrix[p, j].ToString("F2")->Length;
					   }
				   }
				   hossz = matrix[i, j].ToString("F2")->Length;
				   kul = maxhossz - hossz;
				   for (int l = 0; l < kul; l++) {
					   Eredmeny->Text += " ";
				   }
				   Eredmeny->Text += matrix[i, j].ToString("F2") + " ";
			   }
			   Eredmeny->Text += "|";
			   Eredmeny->Text += "\r\n";
		   }
	   }
	   void invlevezetes(array<float, 2>^ matrix, int n, int m) {
		   int kul = 0;
		   int hossz = 0;
		   for (int i = 0; i < n; i++) {
			   int maxhossz = 0;
			   Eredmeny->Text += "s" + (i + 1).ToString() + "  " + "| ";
			   for (int j = 0; j < 2*m; j++) {
				   for (int p = 0; p < n; p++) {
					   if (matrix[p, j].ToString("F2")->Length > maxhossz) {
						   maxhossz = matrix[p, j].ToString("F2")->Length;
					   }
				   }
				   hossz = matrix[i, j].ToString("F2")->Length;
				   kul = maxhossz - hossz;
				   for (int l = 0; l < kul; l++) {
					   Eredmeny->Text += " ";
				   }
				   Eredmeny->Text += matrix[i, j].ToString("F2") + " ";
			   }
			   Eredmeny->Text += "|";
			   Eredmeny->Text += "\r\n";
		   }
	   }
	   void torol() {
		   Eredmeny->Text = "";
		   Eredmeny1->Text = "";
	   }
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	Eredmeny->Visible = true;
	if (inv) {
		Eredmeny1->Visible = false;
		inverz_levezetes();
	}
	if (determ) {
		determinans_levezetes();
	}
	if (transzp) {

	}
}
};
}
