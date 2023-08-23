#pragma once
#include "MyUserControl.h"
#include "MyUserControl1.h"
namespace Evfolyammunka10 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	bool menuNyitva;
	bool nezet2Aktiv;
	bool nezet1Aktiv;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		
		}
		Evfolyammunka10::MyUserControl^ vez1 = gcnew Evfolyammunka10::MyUserControl;
		Evfolyammunka10::MyUserControl1^ vez2 = gcnew Evfolyammunka10::MyUserControl1;
		Color menupontHatter = SystemColors::ControlText;
		Color aktivMenupontHatter = Color::Firebrick;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	protected:
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::ComponentModel::IContainer^ components;

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
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				40)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(4);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(1084, 561);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Location = System::Drawing::Point(-213, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(260, 586);
			this->panel1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 21.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(4, 75);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(98, 36);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Menü";
			// 
			// panel3
			// 
			this->panel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel3->Controls->Add(this->button3);
			this->panel3->Controls->Add(this->button2);
			this->panel3->Location = System::Drawing::Point(0, 123);
			this->panel3->Margin = System::Windows::Forms::Padding(4);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(259, 150);
			this->panel3->TabIndex = 1;
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button3->Location = System::Drawing::Point(4, 59);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Padding = System::Windows::Forms::Padding(13, 0, 0, 0);
			this->button3->Size = System::Drawing::Size(248, 59);
			this->button3->TabIndex = 1;
			this->button3->Text = L"Mátrixaritmetika";
			this->button3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button2->Location = System::Drawing::Point(4, 4);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Padding = System::Windows::Forms::Padding(13, 0, 0, 0);
			this->button2->Size = System::Drawing::Size(248, 59);
			this->button2->TabIndex = 0;
			this->button2->Text = L"Mátrixmûveletek";
			this->button2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->button1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Margin = System::Windows::Forms::Padding(4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(260, 43);
			this->panel2->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button1->Dock = System::Windows::Forms::DockStyle::Right;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(213, 0);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(47, 43);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"Actions-media-seek-forward-icon másolata.png");
			this->imageList1->Images->SetKeyName(1, L"Actions-media-seek-forward-icon.png");
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1084, 561);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximumSize = System::Drawing::Size(1400, 800);
			this->MinimumSize = System::Drawing::Size(800, 450);
			this->Name = L"MyForm";
			this->Text = L"Mátrixszámológép";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->SizeChanged += gcnew System::EventHandler(this, &MyForm::MyForm_SizeChanged);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		void menuMegnyitasa() {
			System::Drawing::Point p(0, 0);
			panel3->Visible = true;
			for (int i = -213; i <= 0; i++) {
				p.X = i;
				panel1->Location = p;
			}
			menuNyitva = !menuNyitva;
			button1->BackgroundImage = imageList1->Images[1];
		}
		void menuBezarasa() {
			System::Drawing::Point p(-213, 0);
			panel1->Location = p;
			panel3->Visible = false;
			menuNyitva = !menuNyitva;
			button1->BackgroundImage = imageList1->Images[0];
		}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!menuNyitva) {
			menuMegnyitasa();
		}
		else {
			menuBezarasa();
		}
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		vez1->Dock = DockStyle::Fill;
		tableLayoutPanel1->Controls->Add(vez1, 1, 0);
		vez2->Dock = DockStyle::Fill;
		tableLayoutPanel1->Controls->Add(vez2, 1, 0);
		vez1->Visible = true;
		vez1->BringToFront();
		vez2->Visible = false;
		menuNyitva = false;
		button2->BackColor = aktivMenupontHatter;
		panel3->Visible = false;
		nezet2Aktiv = true;
		nezet2();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		vez1->Visible = true;
		vez2->Visible = false;
		for (int i = 0; i < panel3->Controls->Count; i++) {
			panel3->Controls[i]->BackColor = menupontHatter;
		}
		button2->BackColor = aktivMenupontHatter;
		if (!nezet2Aktiv) {
			menuBezarasa();
		}
	}


	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		vez1->Visible = false;
		vez2->Visible = true;
		for (int i = 0; i < panel3->Controls->Count; i++) {
			panel3->Controls[i]->BackColor = menupontHatter;
		}
		button3->BackColor = aktivMenupontHatter;
		if (!nezet2Aktiv) {
			menuBezarasa();
		}
	}
		   void nezet2() {
			   nezet2Aktiv = true;
			   tableLayoutPanel1->ColumnStyles[0]->SizeType = System::Windows::Forms::SizeType::Percent;
			   tableLayoutPanel1->ColumnStyles[0]->Width = 25;
			   tableLayoutPanel1->ColumnStyles[1]->Width = 75;
			   tableLayoutPanel1->Controls->Add(panel1, 0, 0);
			   panel1->Dock = DockStyle::Fill;
			   button1->Visible = false;
			   panel3->Visible = true;
			   panel1->BringToFront();
		   }
		   void nezet1() {
			   menuNyitva = false;
			   button1->BackgroundImage = imageList1->Images[0];
			   nezet1Aktiv = false;
			   tableLayoutPanel1->ColumnStyles[0]->SizeType = System::Windows::Forms::SizeType::Absolute;
			   tableLayoutPanel1->ColumnStyles[0]->Width = 35;
			   tableLayoutPanel1->ColumnStyles[1]->Width = 100;
			   tableLayoutPanel1->Controls->Remove(panel1);
			   this->Controls->Add(panel1);
			   panel1->Dock = DockStyle::None;
			   panel1->Height = this->Height;
			   panel1->Anchor = (AnchorStyles::Left | AnchorStyles::Top | AnchorStyles::Bottom);
			   button1->Visible = true;
			   panel3->Visible = false;
			   panel1->Location = Point(-213, 0);
			   panel1->BringToFront();
		   }
	private: System::Void MyForm_SizeChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->Width > 900) {
			if (!nezet2Aktiv) {
				nezet2();
				nezet2Aktiv = true;
			}
		}
		else {
			if (nezet2Aktiv) {
				nezet1();
				nezet2Aktiv = false;
			}
		}
	}
	};
	String^ TabToSpase(String^ s) {
		String^ seged = "";
		for (int i = 0; i < s->Length; i++) {

			if (s[i] == '\t') {
				seged += Convert::ToChar(' ');
			}
			else {
				seged += s[i];
			}
		}
		return seged;
	}
	String^ DeleteUnnacessarySpace(String^ s) {
		String^ seged = "";
		for (int i = 0; i < s->Length; i++) {
			if (s[i] == ' ') {
				while (i + 1 < s->Length && (s[i + 1] == ' ' || s[i + 1] == '\r')) {
					i++;
				}
			}
			seged += s[i];
		}
		return seged;
	}
	String^ DeleteUnnacessaryEnter(String^ s) {
		String^ seged = "";
		for (int i = 0; i < s->Length; i++) {
			seged += s[i];
			if (s[i] == '\r') {
				i++;
				if (i < s->Length) {
					seged += s[i];
				}
				while (i + 1 < s->Length && (s[i + 1] == '\r' || s[i + 1] == '\n' || s[i + 1] == ' ')) {
					i++;
				}
			}
		}
		return seged;
	}
	bool isWhiteSpace(wchar_t c) {
		if (c == ' ' || c == '\t' || c == '\n' || c == '\r')
			return true;
		else
			return false;
	}
	String^ SajatTrim(String^ s) {
		int e = 0; //e-eleje
		while (e < s->Length && isWhiteSpace(s[e])) {
			e++;
		}
		int v = s->Length - 1; // v-vege
		while (v > -1 && isWhiteSpace(s[v])) {
			v--;
		}
		String^ seged = "";
		for (int i = e; i <= v; i++) {
			seged += s[i];
		}
		return seged;
	}
	bool HelyesFelepitesuMatrix(String^ s1, int& n1, int& m1) // & miatt valtozik referencia
	{
		array<String^>^ s = s1->Split('\n');
		bool joMatrix = true;
		int szokozokSzama = 0;
		s[0] = s[0]->Trim();
		for (int j = 0; j < s[0]->Length; j++) {
			if (s[0][j] == ' ') {
				szokozokSzama++;
			}
		}
		for (int i = 1; i < s->Length; i++) {
			s[i] = s[i]->Trim();
			int szkSz = 0;
			for (int j = 0; j < s[i]->Length; j++) {
				if (s[i][j] == ' ') {
					szkSz++;
				}
			}
			if (szokozokSzama != szkSz) {
				joMatrix = false;
				break;
			}
		}
		n1 = s->Length;
		m1 = szokozokSzama + 1;
		return joMatrix;
	}
	bool HelyesKarakterek(String^ s) {
		bool helyes = true;
		for (int i = 0; i < s->Length; i++) {
			if ((s[i] > 57 || s[i] < 48) && (s[i]!=' ') && (s[i]!='\n') && (s[i]!='\r')) {
				if (s[i] != '-')
					helyes = false;
				else if ((s[i + 1] > 57 || s[i + 1] < 48))
					helyes = false;
			}
		}
		
		return helyes;
	}
	array<float, 2>^ StringToMatrix(String^ s, int n, int m) {
		array<float, 2>^ matrix = gcnew array < float, 2>(n, m);
		array <String^>^ s2 = s->Split('\n');
		array<String^>^ s1;
		for (int i = 0; i < s2->Length; i++) {
			s2[i]->Trim();
			s1 = s2[i]->Split(' ');
			for (int j = 0; j < s1->Length; j++) {
				matrix[i, j] = Convert::ToDouble(s1[j]);
			}
		}
		return matrix;
	}
	
}

