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
	bool HelyesKarakterek(String^ s);	
	array<float, 2>^ StringToMatrix(String^ s, int n, int m);

	/// <summary>
	/// Summary for MyUserControl1
	/// </summary>
	public ref class MyUserControl1 : public System::Windows::Forms::UserControl
	{
	public:
		MyUserControl1(void)
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
		~MyUserControl1()
		{
			if (components)
			{
				delete components;
			}
		}
		bool szorzat;
		bool kivonas;
		bool osszeadas; 
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ Matrix1;

	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
	private: System::Windows::Forms::Button^ Kivonas;

	private: System::Windows::Forms::Button^ Osszeadas;
	private: System::Windows::Forms::Button^ Szorzas;


	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ Matrix2;

	private: System::Windows::Forms::Label^ label2;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridView^ eredmeny;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel4;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::DataGridView^ bMatrix;
	private: System::Windows::Forms::DataGridView^ aMatrix;
	private: System::Windows::Forms::Label^ eredmeny_label;
	private: System::Windows::Forms::Label^ label4;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyUserControl1::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Matrix1 = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Matrix2 = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Kivonas = (gcnew System::Windows::Forms::Button());
			this->Osszeadas = (gcnew System::Windows::Forms::Button());
			this->Szorzas = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->eredmeny = (gcnew System::Windows::Forms::DataGridView());
			this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->bMatrix = (gcnew System::Windows::Forms::DataGridView());
			this->aMatrix = (gcnew System::Windows::Forms::DataGridView());
			this->eredmeny_label = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->eredmeny))->BeginInit();
			this->tableLayoutPanel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bMatrix))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->aMatrix))->BeginInit();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel1->Controls->Add(this->panel1, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel2, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel3, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->button4, 0, 1);
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 3);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 4;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 45)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 10)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(700, 310);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel1->Location = System::Drawing::Point(30, 305);
			this->panel1->Margin = System::Windows::Forms::Padding(30, 3, 30, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(640, 2);
			this->panel1->TabIndex = 0;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel2->ColumnCount = 2;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->Controls->Add(this->panel2, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->panel3, 1, 0);
			this->tableLayoutPanel2->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(694, 219);
			this->tableLayoutPanel2->TabIndex = 1;
			// 
			// panel2
			// 
			this->panel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->Matrix1);
			this->panel2->Location = System::Drawing::Point(3, 3);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(341, 213);
			this->panel2->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(91, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(74, 19);
			this->label1->TabIndex = 1;
			this->label1->Text = L"A mátrix";
			// 
			// Matrix1
			// 
			this->Matrix1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->Matrix1->Font = (gcnew System::Drawing::Font(L"Courier New", 11));
			this->Matrix1->Location = System::Drawing::Point(94, 65);
			this->Matrix1->MinimumSize = System::Drawing::Size(246, 133);
			this->Matrix1->Multiline = true;
			this->Matrix1->Name = L"Matrix1";
			this->Matrix1->Size = System::Drawing::Size(247, 145);
			this->Matrix1->TabIndex = 0;
			// 
			// panel3
			// 
			this->panel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel3->Controls->Add(this->label2);
			this->panel3->Controls->Add(this->Matrix2);
			this->panel3->Location = System::Drawing::Point(350, 3);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(341, 213);
			this->panel3->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(-4, 43);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 19);
			this->label2->TabIndex = 2;
			this->label2->Text = L"B mátrix";
			// 
			// Matrix2
			// 
			this->Matrix2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->Matrix2->Font = (gcnew System::Drawing::Font(L"Courier New", 11));
			this->Matrix2->Location = System::Drawing::Point(0, 65);
			this->Matrix2->MinimumSize = System::Drawing::Size(246, 133);
			this->Matrix2->Multiline = true;
			this->Matrix2->Name = L"Matrix2";
			this->Matrix2->Size = System::Drawing::Size(246, 145);
			this->Matrix2->TabIndex = 1;
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->ColumnCount = 5;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				110)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				110)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				110)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel3->Controls->Add(this->Kivonas, 2, 0);
			this->tableLayoutPanel3->Controls->Add(this->Osszeadas, 1, 0);
			this->tableLayoutPanel3->Controls->Add(this->Szorzas, 3, 0);
			this->tableLayoutPanel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel3->Location = System::Drawing::Point(3, 258);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 1;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(694, 39);
			this->tableLayoutPanel3->TabIndex = 2;
			// 
			// Kivonas
			// 
			this->Kivonas->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->Kivonas->BackColor = System::Drawing::Color::DarkRed;
			this->Kivonas->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Kivonas->FlatAppearance->BorderSize = 0;
			this->Kivonas->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Kivonas->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Kivonas->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Kivonas->Location = System::Drawing::Point(300, 3);
			this->Kivonas->Name = L"Kivonas";
			this->Kivonas->Size = System::Drawing::Size(94, 33);
			this->Kivonas->TabIndex = 2;
			this->Kivonas->Text = L"A-B";
			this->Kivonas->UseVisualStyleBackColor = false;
			this->Kivonas->Click += gcnew System::EventHandler(this, &MyUserControl1::Kivonas_Click);
			// 
			// Osszeadas
			// 
			this->Osszeadas->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->Osszeadas->BackColor = System::Drawing::Color::DarkRed;
			this->Osszeadas->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Osszeadas->FlatAppearance->BorderSize = 0;
			this->Osszeadas->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Osszeadas->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Osszeadas->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Osszeadas->Location = System::Drawing::Point(190, 3);
			this->Osszeadas->Name = L"Osszeadas";
			this->Osszeadas->Size = System::Drawing::Size(94, 33);
			this->Osszeadas->TabIndex = 0;
			this->Osszeadas->Text = L"A+B";
			this->Osszeadas->UseVisualStyleBackColor = false;
			this->Osszeadas->Click += gcnew System::EventHandler(this, &MyUserControl1::Osszeadas_Click);
			// 
			// Szorzas
			// 
			this->Szorzas->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->Szorzas->BackColor = System::Drawing::Color::DarkRed;
			this->Szorzas->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Szorzas->FlatAppearance->BorderSize = 0;
			this->Szorzas->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Szorzas->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Szorzas->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Szorzas->Location = System::Drawing::Point(410, 3);
			this->Szorzas->Name = L"Szorzas";
			this->Szorzas->Size = System::Drawing::Size(94, 33);
			this->Szorzas->TabIndex = 1;
			this->Szorzas->Text = L"AxB";
			this->Szorzas->UseVisualStyleBackColor = false;
			this->Szorzas->Click += gcnew System::EventHandler(this, &MyUserControl1::Szorzas_Click);
			// 
			// button4
			// 
			this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->button4->BackColor = System::Drawing::SystemColors::Info;
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->Location = System::Drawing::Point(312, 228);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 24);
			this->button4->TabIndex = 3;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyUserControl1::button4_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label3->Location = System::Drawing::Point(26, 326);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(92, 19);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Eredmény:";
			// 
			// eredmeny
			// 
			this->eredmeny->AllowUserToAddRows = false;
			this->eredmeny->AllowUserToDeleteRows = false;
			this->eredmeny->AllowUserToResizeColumns = false;
			this->eredmeny->AllowUserToResizeRows = false;
			this->eredmeny->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->eredmeny->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->eredmeny->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->eredmeny->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->eredmeny->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			this->eredmeny->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->eredmeny->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->eredmeny->ColumnHeadersVisible = false;
			this->eredmeny->Cursor = System::Windows::Forms::Cursors::Hand;
			this->eredmeny->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->eredmeny->Location = System::Drawing::Point(252, 3);
			this->eredmeny->MultiSelect = false;
			this->eredmeny->Name = L"eredmeny";
			this->eredmeny->ReadOnly = true;
			this->eredmeny->RowHeadersVisible = false;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Courier New", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->eredmeny->RowsDefaultCellStyle = dataGridViewCellStyle2;
			this->eredmeny->RowTemplate->DefaultCellStyle->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->eredmeny->RowTemplate->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Courier New", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->eredmeny->RowTemplate->DefaultCellStyle->SelectionBackColor = System::Drawing::Color::White;
			this->eredmeny->RowTemplate->DefaultCellStyle->SelectionForeColor = System::Drawing::Color::Black;
			this->eredmeny->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->eredmeny->Size = System::Drawing::Size(94, 73);
			this->eredmeny->TabIndex = 1;
			this->eredmeny->CellMouseEnter += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyUserControl1::eredmeny_CellMouseEnter);
			this->eredmeny->CellMouseLeave += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyUserControl1::eredmeny_CellMouseLeave);
			// 
			// tableLayoutPanel4
			// 
			this->tableLayoutPanel4->AutoSize = true;
			this->tableLayoutPanel4->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->tableLayoutPanel4->ColumnCount = 5;
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel4->Controls->Add(this->label5, 3, 0);
			this->tableLayoutPanel4->Controls->Add(this->label4, 1, 0);
			this->tableLayoutPanel4->Controls->Add(this->bMatrix, 2, 0);
			this->tableLayoutPanel4->Controls->Add(this->eredmeny, 4, 0);
			this->tableLayoutPanel4->Controls->Add(this->aMatrix, 0, 0);
			this->tableLayoutPanel4->Location = System::Drawing::Point(37, 358);
			this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
			this->tableLayoutPanel4->RowCount = 1;
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 79)));
			this->tableLayoutPanel4->Size = System::Drawing::Size(349, 79);
			this->tableLayoutPanel4->TabIndex = 2;
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(218, 24);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(28, 30);
			this->label5->TabIndex = 4;
			this->label5->Text = L"=";
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(89, 28);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(23, 23);
			this->label4->TabIndex = 3;
			this->label4->Text = L"X";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// bMatrix
			// 
			this->bMatrix->AllowUserToAddRows = false;
			this->bMatrix->AllowUserToDeleteRows = false;
			this->bMatrix->AllowUserToResizeColumns = false;
			this->bMatrix->AllowUserToResizeRows = false;
			this->bMatrix->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->bMatrix->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->bMatrix->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->bMatrix->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->bMatrix->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			this->bMatrix->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->bMatrix->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->bMatrix->ColumnHeadersVisible = false;
			this->bMatrix->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->bMatrix->Location = System::Drawing::Point(118, 3);
			this->bMatrix->MultiSelect = false;
			this->bMatrix->Name = L"bMatrix";
			this->bMatrix->ReadOnly = true;
			this->bMatrix->RowHeadersVisible = false;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Courier New", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->bMatrix->RowsDefaultCellStyle = dataGridViewCellStyle4;
			this->bMatrix->RowTemplate->DefaultCellStyle->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->bMatrix->RowTemplate->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Courier New", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bMatrix->RowTemplate->DefaultCellStyle->SelectionBackColor = System::Drawing::Color::White;
			this->bMatrix->RowTemplate->DefaultCellStyle->SelectionForeColor = System::Drawing::Color::Black;
			this->bMatrix->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->bMatrix->Size = System::Drawing::Size(94, 73);
			this->bMatrix->TabIndex = 3;
			// 
			// aMatrix
			// 
			this->aMatrix->AllowUserToAddRows = false;
			this->aMatrix->AllowUserToDeleteRows = false;
			this->aMatrix->AllowUserToResizeColumns = false;
			this->aMatrix->AllowUserToResizeRows = false;
			this->aMatrix->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->aMatrix->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->aMatrix->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->aMatrix->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->aMatrix->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle5->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			this->aMatrix->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle5;
			this->aMatrix->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->aMatrix->ColumnHeadersVisible = false;
			this->aMatrix->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->aMatrix->Location = System::Drawing::Point(3, 3);
			this->aMatrix->MultiSelect = false;
			this->aMatrix->Name = L"aMatrix";
			this->aMatrix->ReadOnly = true;
			this->aMatrix->RowHeadersVisible = false;
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Courier New", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->aMatrix->RowsDefaultCellStyle = dataGridViewCellStyle6;
			this->aMatrix->RowTemplate->DefaultCellStyle->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->aMatrix->RowTemplate->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Courier New", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->aMatrix->RowTemplate->DefaultCellStyle->SelectionBackColor = System::Drawing::Color::White;
			this->aMatrix->RowTemplate->DefaultCellStyle->SelectionForeColor = System::Drawing::Color::Black;
			this->aMatrix->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->aMatrix->Size = System::Drawing::Size(80, 73);
			this->aMatrix->TabIndex = 4;
			// 
			// eredmeny_label
			// 
			this->eredmeny_label->Font = (gcnew System::Drawing::Font(L"Courier New", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->eredmeny_label->Location = System::Drawing::Point(25, 504);
			this->eredmeny_label->Name = L"eredmeny_label";
			this->eredmeny_label->Size = System::Drawing::Size(400, 30);
			this->eredmeny_label->TabIndex = 3;
			// 
			// MyUserControl1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Controls->Add(this->eredmeny_label);
			this->Controls->Add(this->tableLayoutPanel4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Name = L"MyUserControl1";
			this->Size = System::Drawing::Size(700, 540);
			this->Load += gcnew System::EventHandler(this, &MyUserControl1::MyUserControl1_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->tableLayoutPanel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->eredmeny))->EndInit();
			this->tableLayoutPanel4->ResumeLayout(false);
			this->tableLayoutPanel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bMatrix))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->aMatrix))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion



	private: System::Void Osszeadas_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ s1 = Matrix1->Text;
		s1 = TabToSpase(s1);
		s1 = DeleteUnnacessarySpace(s1);
		s1 = DeleteUnnacessaryEnter(s1);
		s1 = SajatTrim(s1);
		Matrix1->Text = s1;
		if (s1->Length == 0) {
			MessageBox::Show("Adja meg az elsõ matrixot!", "Hiba!", MessageBoxButtons::OK);
			return;
		}
		bool joMatrix3= HelyesKarakterek(s1);
		if (!joMatrix3) {
			MessageBox::Show("Nem helyesek a mátrix karakterei!", "Hiba!", MessageBoxButtons::OK);
			return;
		}
		int n1, m1; // a matrix meretei
		bool joMatrix1 = HelyesFelepitesuMatrix(s1, n1, m1);
		if (!joMatrix1) {
			MessageBox::Show("Nem megfelelõ az elso mátrix felépítése!", "Hiba!", MessageBoxButtons::OK);
			return;
		}
		array<float, 2>^ mm1 = gcnew array < float, 2>(n1, m1);
		mm1 = StringToMatrix(s1, n1, m1);

		/*------------------------2.Matrix-------------------------------*/
		String^ s2 = Matrix2->Text;
		s2 = TabToSpase(s2);
		s2 = DeleteUnnacessarySpace(s2);
		s2 = DeleteUnnacessaryEnter(s2);
		s2 = SajatTrim(s2);
		Matrix2->Text = s2;
		if (s2->Length == 0) {
			MessageBox::Show("Adja meg a második mátrixot!", "Hiba!", MessageBoxButtons::OK);
			return;
		}
		bool joMatrix4= HelyesKarakterek(s2);
		if (!joMatrix4) {
			MessageBox::Show("Nem helyesek a mátrix karakterei!", "Hiba!", MessageBoxButtons::OK);
			return;
		}
		int n2, m2; // a matrix meretei
		bool joMatrix2 = HelyesFelepitesuMatrix(s2, n2, m2);
		if (!joMatrix2) {
			MessageBox::Show("Nem megfelelõ a második mátrix felépítése!", "Hiba!", MessageBoxButtons::OK);
			return;
		}
		array<float, 2>^ mm2 = gcnew array < float, 2>(n2, m2);
		mm2 = StringToMatrix(s2, n2, m2);

		/*-----------------------Osszeadas-------------------------------*/

		if (n1 == n2 && m1 == m2) {
			tableLayoutPanel4->Visible = true;
			label4->Visible = true;
			szorzat = false;
			kivonas = false;
			osszeadas = true;
			label4->Visible = true;
			sorokTorlese(aMatrix);
			sorokTorlese(bMatrix);
			sorokTorlese(eredmeny);
			array<double, 2>^ osszeg = gcnew array < double, 2>(n2, m2);
			String^ sOsszeg = "";
			for (int i = 0; i < n1; i++) {
				for (int j = 0; j < m1; j++) {
					osszeg[i, j] = mm1[i, j] + mm2[i, j];
					sOsszeg += Convert::ToString(osszeg[i, j]) + " ";
				}
				sOsszeg += "\r\n";
			}
			eredmeny->ColumnCount = m2;
			aMatrix->ColumnCount = m1;
			bMatrix->ColumnCount = m2;

			array<String^>^ eSor = gcnew array<String^>(m2);
			array<String^>^ aSor = gcnew array<String^>(m1);
			array<String^>^ bSor = gcnew array<String^>(m2);

			for (int i = 0; i < n1; i++) {
				for (int j = 0; j < m1; j++) {
					aSor[j] = mm1[i, j].ToString();
				}
				aMatrix->Rows->Add(aSor);
			}
			tablaRugalmasMeret(aMatrix);

			for (int i = 0; i < n2; i++) {
				for (int j = 0; j < m2; j++) {
					bSor[j] = mm2[i, j].ToString();
				}
				bMatrix->Rows->Add(bSor);
			}
			tablaRugalmasMeret(bMatrix);

			for (int i = 0; i < n1; i++) {
				for (int j = 0; j < m2; j++) {
					eSor[j] = osszeg[i, j].ToString();
				}
				eredmeny->Rows->Add(eSor);
			}
			tablaRugalmasMeret(eredmeny);
			label4->Text = "+";
			int y = tableLayoutPanel4->Location.Y + tableLayoutPanel4->Height + 15;
			eredmeny_label->Location = Point(eredmeny_label->Location.X, y);
		}
		else {
			MessageBox::Show("Nem tudom osszeadni, a mátrixok nem alkalmasak!", "Hiba!", MessageBoxButtons::OK);
			return;
		}
	}
	private: System::Void Kivonas_Click(System::Object^ sender, System::EventArgs^ e) {
		/*---------------------1.Matrix---------------------------*/
		String^ s1 = Matrix1->Text;
		s1 = TabToSpase(s1);
		s1 = DeleteUnnacessarySpace(s1);
		s1 = DeleteUnnacessaryEnter(s1);
		s1 = SajatTrim(s1);
		Matrix1->Text = s1;
		if (s1->Length == 0) {
			MessageBox::Show("Adja meg az elsõ mátrixot!", "Hiba!", MessageBoxButtons::OK);
			return;
		}
		bool joMatrix3= HelyesKarakterek(s1);
		if (!joMatrix3) {
			MessageBox::Show("Nem helyesek a mátrix karakterei!", "Hiba!", MessageBoxButtons::OK);
			return;
		}
		int n1, m1; // a matrix meretei
		bool joMatrix1 = HelyesFelepitesuMatrix(s1, n1, m1);
		if (!joMatrix1) {
			MessageBox::Show("Nem megfelelõ az elsõ mátrix felépítése!", "Hiba!", MessageBoxButtons::OK);
			return;
		}
		array<float, 2>^ mm1 = gcnew array < float, 2>(n1, m1);
		mm1 = StringToMatrix(s1, n1, m1);

		/*------------------------2.Matrix-------------------------------*/
		String^ s2 = Matrix2->Text;
		s2 = TabToSpase(s2);
		s2 = DeleteUnnacessarySpace(s2);
		s2 = DeleteUnnacessaryEnter(s2);
		s2 = SajatTrim(s2);
		Matrix2->Text = s2;
		if (s2->Length == 0) {
			MessageBox::Show("Adja meg a második mátrixot!", "Hiba!", MessageBoxButtons::OK);
			return;
		}
		bool joMatrix4 = HelyesKarakterek(s2);
		if (!joMatrix4) {
			MessageBox::Show("Nem helyesek a mátrix karakterei!", "Hiba!", MessageBoxButtons::OK);
			return;
		}
		int n2, m2; // a matrix meretei
		bool joMatrix2 = HelyesFelepitesuMatrix(s2, n2, m2);
		if (!joMatrix2) {
			MessageBox::Show("Nem megfelelõ az elsõ mátrix felépítése!", "Hiba!", MessageBoxButtons::OK);
			return;
		}
		array<float, 2>^ mm2 = gcnew array < float, 2>(n2, m2);
		mm2 = StringToMatrix(s2, n2, m2);

		/*------------------------Kivonás------------------------------*/

		if (n1 == n2 && m1 == m2) {
			tableLayoutPanel4->Visible = true;
			szorzat = false;
			kivonas = true;
			osszeadas = false;
			label4->Visible = true;
			sorokTorlese(aMatrix);
			sorokTorlese(bMatrix);
			sorokTorlese(eredmeny);
			array<double, 2>^ kulonbseg = gcnew array < double, 2>(n2, m2);
			String^ sKulonbseg = "";
			for (int i = 0; i < n1; i++) {
				for (int j = 0; j < m1; j++) {
					kulonbseg[i, j] = mm1[i, j] - mm2[i, j];
					sKulonbseg += Convert::ToString(kulonbseg[i, j]) + " ";

				}
				sKulonbseg += "\r\n";
			}
			eredmeny->ColumnCount = m2;
			aMatrix->ColumnCount = m1;
			bMatrix->ColumnCount = m2;

			array<String^>^ eSor = gcnew array<String^>(m2);
			array<String^>^ aSor = gcnew array<String^>(m1);
			array<String^>^ bSor = gcnew array<String^>(m2);

			for (int i = 0; i < n1; i++) {
				for (int j = 0; j < m1; j++) {
					aSor[j] = mm1[i, j].ToString();
				}
				aMatrix->Rows->Add(aSor);
			}
			tablaRugalmasMeret(aMatrix);

			for (int i = 0; i < n2; i++) {
				for (int j = 0; j < m2; j++) {
					bSor[j] = mm2[i, j].ToString();
				}
				bMatrix->Rows->Add(bSor);
			}
			tablaRugalmasMeret(bMatrix);

			for (int i = 0; i < n1; i++) {
				for (int j = 0; j < m2; j++) {
					eSor[j] = kulonbseg[i, j].ToString();
				}
				eredmeny->Rows->Add(eSor);
			}
			tablaRugalmasMeret(eredmeny);
			label4->Text = "-";
			int y = tableLayoutPanel4->Location.Y + tableLayoutPanel4->Height + 15;
			eredmeny_label->Location = Point(eredmeny_label->Location.X, y);
		}
		else {
			MessageBox::Show("Nem tudom kivonni! A mátrixok nem megfelelõek.", "Hiba!", MessageBoxButtons::OK);
			return;
		}
	}

	private: System::Void Szorzas_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ s1 = Matrix1->Text;
		s1 = TabToSpase(s1);
		s1 = DeleteUnnacessarySpace(s1);
		s1 = DeleteUnnacessaryEnter(s1);
		s1 = SajatTrim(s1);
		Matrix1->Text = s1;
		if (s1->Length == 0) {
			MessageBox::Show("Adja meg az elsõ mátrixot!", "Hiba!", MessageBoxButtons::OK);
			return;
		}
		bool joMatrix3 = HelyesKarakterek(s1);
		if (!joMatrix3) {
			MessageBox::Show("Nem helyesek a mátrix karakterei!", "Hiba!", MessageBoxButtons::OK);
			return;
		}
		int n1, m1; // a matrix meretei
		bool joMatrix1 = HelyesFelepitesuMatrix(s1, n1, m1);
		if (!joMatrix1) {
			MessageBox::Show("Nem megfelelõ az elsõ mátrix felépítése!", "Hiba!", MessageBoxButtons::OK);
			return;
		}
		array<float, 2>^ mm1 = gcnew array < float, 2>(n1, m1);
		mm1 = StringToMatrix(s1, n1, m1);

		/*------------------------2.Matrix-------------------------------*/
		String^ s2 = Matrix2->Text;
		s2 = TabToSpase(s2);
		s2 = DeleteUnnacessarySpace(s2);
		s2 = DeleteUnnacessaryEnter(s2);
		s2 = SajatTrim(s2);
		Matrix2->Text = s2;
		if (s2->Length == 0) {
			MessageBox::Show("Adja meg a második mátrixot!", "Hiba!", MessageBoxButtons::OK);
			return;
		}
		bool joMatrix4 = HelyesKarakterek(s2);
		if (!joMatrix4) {
			MessageBox::Show("Nem helyesek a mátrix karakterei!", "Hiba!", MessageBoxButtons::OK);
			return;
		}
		int n2, m2; // a matrix meretei
		bool joMatrix2 = HelyesFelepitesuMatrix(s2, n2, m2);
		if (!joMatrix2) {
			MessageBox::Show("Nem megfelelõ az elsõ mátrix felépítése!", "Hiba!", MessageBoxButtons::OK);
			return;
		}
		array<float, 2>^ mm2 = gcnew array < float, 2>(n2, m2);
		mm2 = StringToMatrix(s2, n2, m2);

		/*-----------------------Szorzas-------------------------------*/

		if (m1 == n2) {
			tableLayoutPanel4->Visible = true;
			szorzat = true;
			kivonas = false;
			osszeadas = false;
			label4->Visible = true;
			sorokTorlese(aMatrix);
			sorokTorlese(bMatrix);
			sorokTorlese(eredmeny);
			array<double, 2>^ szorzat = gcnew array < double, 2>(n1, m2);
			for (int i = 0; i < n1; i++) {
				for (int j = 0; j < m2; j++) {
					szorzat[i, j] = 0;
					for (int k = 0; k < m2; k++) {
						szorzat[i, j] += mm1[i, k] * mm2[k, j];
					}
				}
			}
			eredmeny->ColumnCount = m2;
			aMatrix->ColumnCount = m1;
			bMatrix->ColumnCount = m2;

			array<String^>^ eSor = gcnew array<String^>(m2);
			array<String^>^ aSor = gcnew array<String^>(m1);
			array<String^>^ bSor = gcnew array<String^>(m2);

			for (int i = 0; i < n1; i++) {
				for (int j = 0; j < m1; j++) {
					aSor[j] = mm1[i, j].ToString();
				}
				aMatrix->Rows->Add(aSor);
			}
			tablaRugalmasMeret(aMatrix);

			for (int i = 0; i < n2; i++) {
				for (int j = 0; j < m2; j++) {
					bSor[j] = mm2[i, j].ToString();
				}
				bMatrix->Rows->Add(bSor);
			}
			tablaRugalmasMeret(bMatrix);

			for (int i = 0; i < n1; i++) {
				for (int j = 0; j < m2; j++) {
					eSor[j] = szorzat[i, j].ToString();
				}
				eredmeny->Rows->Add(eSor);
			}
			tablaRugalmasMeret(eredmeny);
			label4->Text = "x";
			int y = tableLayoutPanel4->Location.Y + tableLayoutPanel4->Height + 15;
			eredmeny_label->Location = Point(eredmeny_label->Location.X, y);
		}
		else {
			MessageBox::Show("Nem tudom szorozni! A mátrixok méretei nem megfelelõek.", "Hiba!", MessageBoxButtons::OK);
			return;
		}

	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ tarolo1 = Matrix1->Text;
		String^ tarolo2 = Matrix2->Text;
		Matrix1->Text = tarolo2;
		Matrix2->Text = tarolo1;
	}

		   void tablaRugalmasMeret(System::Windows::Forms::DataGridView^ tabla) {
			   int width = 0, height = 0;
			   for (int i = 0; i < tabla->ColumnCount; i++) {
				   width += tabla->Columns[i]->Width;
			   }
			   for (int i = 0; i < tabla->RowCount; i++) {
				   height += tabla->Rows[i]->Height;
			   }
			   tabla->ClientSize = System::Drawing::Size(width, height);
			   tabla->CurrentCell->Selected = false;
		   }
	private: System::Void eredmeny_CellMouseEnter(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		System::Windows::Forms::DataGridViewCellStyle^ style1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		style1->ForeColor = System::Drawing::Color::Maroon;
		style1->Font = gcnew System::Drawing::Font(L"Century Gothic", 10, System::Drawing::FontStyle::Bold);
		System::Windows::Forms::DataGridViewCellStyle^ style2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		style2->ForeColor = System::Drawing::Color::DarkGreen;
		style2->Font = gcnew System::Drawing::Font(L"Century Gothic", 10, System::Drawing::FontStyle::Bold);
		System::Windows::Forms::DataGridViewCellStyle^ style3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		style3->ForeColor = System::Drawing::Color::DarkBlue;
		style3->Font = gcnew System::Drawing::Font(L"Century Gothic", 10, System::Drawing::FontStyle::Bold);
		eredmeny->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Style = style1;
		if (szorzat) {
			for (int i = 0; i < aMatrix->ColumnCount; i++) {
				aMatrix->Rows[e->RowIndex]->Cells[i]->Style = style2;
			}
			for (int i = 0; i < bMatrix->RowCount; i++) {
				bMatrix->Rows[i]->Cells[e->ColumnIndex]->Style = style3;
			}
		}
		else {
			aMatrix->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Style = style2;
			bMatrix->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Style = style3;
		}
		eredmeny_label_Paint(e->RowIndex, e->ColumnIndex);
	}
	private: System::Void eredmeny_CellMouseLeave(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		System::Windows::Forms::DataGridViewCellStyle^ style1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		style1->ForeColor = System::Drawing::Color::Black;
		style1->Font = gcnew System::Drawing::Font(L"Courier New", 10, System::Drawing::FontStyle::Regular);
		eredmeny->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Style = style1;
		if (szorzat) {
			for (int i = 0; i < aMatrix->ColumnCount; i++) {
				aMatrix->Rows[e->RowIndex]->Cells[i]->Style = style1;
			}
			for (int i = 0; i < bMatrix->RowCount; i++) {
				bMatrix->Rows[i]->Cells[e->ColumnIndex]->Style = style1;
			}
		}
		else {
			aMatrix->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Style = style1;
			bMatrix->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Style = style1;
		}
		Graphics^ g = eredmeny_label->CreateGraphics();
		g->Clear(eredmeny_label->BackColor);
	}
		   void eredmeny_label_Paint(int row, int column) {
			   Graphics^ g = eredmeny_label->CreateGraphics();
			   g->Clear(eredmeny_label->BackColor);
			   System::Drawing::Font^ F = gcnew Drawing::Font(L"Courier New", 11, FontStyle::Bold);
				Brush^ black =   gcnew SolidBrush(Color::Black);
				Brush^ darkblue =  gcnew SolidBrush(Color::DarkBlue);
				Brush^ darkgreen =  gcnew SolidBrush(Color::DarkGreen);
				Brush^ maroon =  gcnew SolidBrush(Color::Maroon);
				if (szorzat) {
					int pixel = 9, hossz = 0;
					String^ s = Convert::ToString(eredmeny->Rows[row]->Cells[column]->Value);
					g->DrawString(s, F, maroon, hossz * pixel, 0);
					hossz += s->Length;

					s = " = ";
					g->DrawString(s, F, black, hossz * pixel, 0);
					hossz += s->Length;


					for (int i = 0; i < aMatrix->ColumnCount; i++) {
						s = Convert::ToString(aMatrix->Rows[row]->Cells[i]->Value);
						g->DrawString(s, F, darkgreen, hossz * pixel, 0);
						hossz += s->Length;

						s = "*";
						g->DrawString(s, F, black, hossz * pixel, 0);
						hossz += s->Length;

						s = Convert::ToString(bMatrix->Rows[i]->Cells[column]->Value);
						g->DrawString(s, F, darkblue, hossz * pixel, 0);
						hossz += s->Length;
						if (i < aMatrix->ColumnCount - 1) {
							s = " + ";
							g->DrawString(s, F, black, hossz * pixel, 0);
							hossz += s->Length;
						}

					}
				
				}
				else {
					int pixel = 9, hossz = 0;
					String^ s = Convert::ToString(eredmeny->Rows[row]->Cells[column]->Value);
					g->DrawString(s, F, maroon, hossz * pixel, 0);
					hossz += s->Length;

					s = " = ";
					g->DrawString(s, F, black, hossz * pixel, 0);
					hossz += s->Length;
					s = Convert::ToString(aMatrix->Rows[row]->Cells[column]->Value);
					g->DrawString(s, F, darkgreen, hossz * pixel, 0);
					hossz += s->Length;
					if (kivonas) {
						s = " - ";
						g->DrawString(s, F, black, hossz * pixel, 0);
						hossz += s->Length;
					}
					else {
						s = " + ";
						g->DrawString(s, F, black, hossz * pixel, 0);
						hossz += s->Length;
					}
					s = Convert::ToString(bMatrix->Rows[row]->Cells[column]->Value);
					g->DrawString(s, F, darkblue, hossz * pixel, 0);
					hossz += s->Length;

				}
				
		   }
		   void sorokTorlese(DataGridView^ tabla) {
			   int sor_db = tabla->RowCount;
			   for (int i = 0; i < sor_db; i++) {
				   tabla->Rows->RemoveAt(0);
			   }
		   }
private: System::Void MyUserControl1_Load(System::Object^ sender, System::EventArgs^ e) {
	szorzat = false;
	osszeadas = false;
	kivonas = false;
	tableLayoutPanel4->Visible = false;
	label4->Visible = false;
}
};
}
