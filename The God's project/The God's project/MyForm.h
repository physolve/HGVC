#pragma once
#define _CRT_SECURE_NO_WARNINGS

#define nn 100
#define aline 100
#define asts 100


#include <string>
#include <iostream>
#include <fstream>
#include "Windows.h"
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <time.h>
#include <dos.h>
#include <chrono>
//#include <thread>



namespace project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Threading;
	using namespace std;

	float a[aline][asts];
	float x[19];
	float y[19];

	float st2[nn];
	float st3[nn];
	float st4[nn];
	float st5[nn];
	float st6[nn];
	float st7[nn];
	float st8[nn];
	float st9[nn];
	float st10[nn];
	float st11[nn];
	float st12[nn];
	float st13[nn];
	float st14[nn];
	float st15[nn];
	float st16[nn];
	float st17[nn];
	float st18[nn];
	float st19[nn];
	int st20[nn];
	float st21[nn];
	float st22[nn];
	float st23[nn];
	float st24[nn];
	float st25[nn];

	char hourc[2], minutec[2], secondc[2], typeclockc[2];
	string hour, minute, second, typeclock;
	//string bbb[1000][1000];
	char filee[10];
	//char *str = new char[1024];

	int linecount = 0;

	FILE* path = fopen("C:\\lol\\test.txt", "rt");

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
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;



	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Panel^  panel1;

	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart3;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label18;











	private: System::ComponentModel::IContainer^  components;



	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->chart3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label18 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->panel1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			this->chart1->BackColor = System::Drawing::Color::Transparent;
			this->chart1->BorderlineColor = System::Drawing::Color::Transparent;
			chartArea1->AxisY2->MajorGrid->Enabled = false;
			chartArea1->BackColor = System::Drawing::SystemColors::Control;
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Enabled = false;
			legend1->MaximumAutoSize = 20;
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(0, 0);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Legend = L"Legend1";
			series1->Name = L"function1";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series2->Legend = L"Legend1";
			series2->Name = L"function2";
			series2->YAxisType = System::Windows::Forms::DataVisualization::Charting::AxisType::Secondary;
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(529, 356);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(3, 356);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(140, 20);
			this->button1->TabIndex = 1;
			this->button1->Text = L"��������";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(15, 216);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"label1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(69, 216);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"label2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(15, 242);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"label3";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(3, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(140, 20);
			this->button2->TabIndex = 6;
			this->button2->Text = L"�������";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(69, 242);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"label4";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(15, 270);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"label5";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(69, 270);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 13);
			this->label6->TabIndex = 9;
			this->label6->Text = L"label6";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(15, 298);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(35, 13);
			this->label7->TabIndex = 10;
			this->label7->Text = L"label7";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(69, 298);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(35, 13);
			this->label8->TabIndex = 11;
			this->label8->Text = L"label8";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(15, 329);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(35, 13);
			this->label9->TabIndex = 12;
			this->label9->Text = L"label9";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(69, 329);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(41, 13);
			this->label10->TabIndex = 13;
			this->label10->Text = L"label10";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(149, 7);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(79, 13);
			this->label11->TabIndex = 14;
			this->label11->Text = L"������ �����.";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(15, 187);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(48, 13);
			this->label12->TabIndex = 15;
			this->label12->Text = L"label12";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label13->Location = System::Drawing::Point(149, 360);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(97, 13);
			this->label13->TabIndex = 16;
			this->label13->Text = L"�������� ������";
			// 
			// panel1
			// 
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->label18);
			this->panel1->Controls->Add(this->label17);
			this->panel1->Controls->Add(this->label16);
			this->panel1->Controls->Add(this->comboBox2);
			this->panel1->Controls->Add(this->comboBox1);
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->label15);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label14);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label13);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Location = System::Drawing::Point(12, 10);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(280, 382);
			this->panel1->TabIndex = 17;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(149, 78);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(41, 13);
			this->label17->TabIndex = 21;
			this->label17->Text = L"label17";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(3, 78);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(41, 13);
			this->label16->TabIndex = 20;
			this->label16->Text = L"label16";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(152, 94);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 21);
			this->comboBox2->TabIndex = 19;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(6, 94);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(137, 21);
			this->comboBox1->TabIndex = 18;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(102, 38);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(41, 13);
			this->label15->TabIndex = 17;
			this->label15->Text = L"label15";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(3, 38);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(97, 13);
			this->label14->TabIndex = 1;
			this->label14->Text = L"���-�� ����� : ";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(298, 10);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(537, 382);
			this->tabControl1->TabIndex = 19;
			// 
			// tabPage1
			// 
			this->tabPage1->AccessibleDescription = L"chart1";
			this->tabPage1->AccessibleName = L"chart1";
			this->tabPage1->AccessibleRole = System::Windows::Forms::AccessibleRole::Chart;
			this->tabPage1->Controls->Add(this->chart1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(529, 356);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"��������";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->AccessibleDescription = L"chart2";
			this->tabPage2->AccessibleName = L"chart2";
			this->tabPage2->AccessibleRole = System::Windows::Forms::AccessibleRole::Chart;
			this->tabPage2->Controls->Add(this->chart2);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(529, 356);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"�����";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// chart2
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart2->Legends->Add(legend2);
			this->chart2->Location = System::Drawing::Point(0, 0);
			this->chart2->Name = L"chart2";
			series3->ChartArea = L"ChartArea1";
			series3->Legend = L"Legend1";
			series3->Name = L"Series1";
			this->chart2->Series->Add(series3);
			this->chart2->Size = System::Drawing::Size(529, 356);
			this->chart2->TabIndex = 0;
			this->chart2->Text = L"chart2";
			// 
			// tabPage3
			// 
			this->tabPage3->AccessibleDescription = L"chart3";
			this->tabPage3->AccessibleName = L"chart3";
			this->tabPage3->AccessibleRole = System::Windows::Forms::AccessibleRole::Chart;
			this->tabPage3->Controls->Add(this->chart3);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(529, 356);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"���������";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// chart3
			// 
			chartArea3->Name = L"ChartArea1";
			this->chart3->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->chart3->Legends->Add(legend3);
			this->chart3->Location = System::Drawing::Point(0, 0);
			this->chart3->Name = L"chart3";
			series4->ChartArea = L"ChartArea1";
			series4->Legend = L"Legend1";
			series4->Name = L"Series1";
			this->chart3->Series->Add(series4);
			this->chart3->Size = System::Drawing::Size(529, 356);
			this->chart3->TabIndex = 0;
			this->chart3->Text = L"chart3";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(9, 144);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(41, 13);
			this->label18->TabIndex = 1;
			this->label18->Text = L"label18";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(847, 396);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"HyGen  Control";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			this->tabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion


	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->chart1->Series["function2"]->Points->Clear();
		this->chart1->Series["function1"]->Points->Clear();

		label13->Text = "";

		for (int i = 0; i < 10; i++)
		{
			if (x[i] == NULL)
			{
				label13->ForeColor = Color::FromArgb(150, Color::Red);
				label13->Text = "��� ������!!";
			}
			else
			{
				label13->ForeColor = Color::FromArgb(150, Color::Green);
				label13->Text = "";
				label13->Text = "�������!";
				this->chart1->Series["function1"]->Points->AddXY(x[i], y[i]);
			}
		}

	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {

		/*char *str = new char[20];
		string strs;
		int cherniy;
		while (!path1.eof())
		{
		path1.getline(str, 20, ' ');
		strs[cherniy] << str[cherniy];
		//label18->Text = strs[cherniy].ToString();
		comboBox1->Items->Add(strs[cherniy]);
		cherniy++;
		}
		delete str;*/

		//label18->Text = ss[1][0].ToString();

		button1->Text = "��������";
		button2->Text = "�������";
		label11->Text = "���� ������ �� �������.";
		label12->Text = "������ �� �����!";
		label13->Text = "";
		label14->Text = "���-�� ����� : ";
		label15->Text = "����������.";
		label16->Text = "������ x ���.";
		label17->Text = "������ y ���.";

		label1->Text = ""; label2->Text = ""; label3->Text = ""; label4->Text = ""; label5->Text = ""; label6->Text = ""; label7->Text = ""; label8->Text = ""; label9->Text = ""; label10->Text = "";

	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		int o = 0; 
		this->chart1->Series["function2"]->Points->Clear();
		this->chart1->Series["function1"]->Points->Clear();

		if (!path)
		{
			label11->ForeColor = Color::FromArgb(150, Color::Red);
			label11->Text = "������: �� ������!!";
			MessageBox::Show("���� � ����� �� ���������!!\n���� ������ ���� � ����� C\n� �������� ����� test.txt",
				"������, ������ ����� � ������", MessageBoxButtons::OKCancel,
				MessageBoxIcon::Asterisk);
		}
		else
		{



			/*ifstream path1("C:\\test.txt");

			string s;

			while (path1.peek() != EOF) {
			getline(path1, s);
			linecount++;
			}
			int linecol;
			linecol = 0;

			while (!path1.eof())
			{
			path1.getline(str, 1024, '\n');
			linecol++;
			}
			delete str;

			if (!path1)
			{
			label14->ForeColor = Color::FromArgb(150, Color::Red);
			label14->ForeColor = Color::FromArgb(150, Color::Red);
			label15->Text = "���������� ���������!";
			}
			else
			{
			label14->ForeColor = Color::FromArgb(150, Color::Green);
			label15->ForeColor = Color::FromArgb(150, Color::Green);
			label15->Text = linecol.ToString();
			}*/



			/*		if (linecount == NULL)
			{
			if (!path1)
			{
			label14->ForeColor = Color::FromArgb(150, Color::Red);
			label14->ForeColor = Color::FromArgb(150, Color::Red);
			label15->Text = "���������� ���������!";
			}
			else
			{
			label14->ForeColor = Color::FromArgb(150, Color::Green);
			label15->ForeColor = Color::FromArgb(150, Color::Green);
			label15->Text = linecol.ToString();
			}
			}
			else
			{
			if (!path1)
			{
			label14->ForeColor = Color::FromArgb(150, Color::Red);
			label14->ForeColor = Color::FromArgb(150, Color::Red);
			label15->Text = "���������� ���������!";
			}
			else
			{
			label14->ForeColor = Color::FromArgb(150, Color::Green);
			label15->ForeColor = Color::FromArgb(150, Color::Green);
			label15->Text = linecount.ToString();
			}
			}*/


			label11->ForeColor = Color::FromArgb(150, Color::Green);
			label11->Text = "������ �����: ������!!";

			/*		int i = 0;
			int j = 0;

			double lala[830][26];

			while ( !path1.eof() )
			{
			path1 >> lala[i][j];
			i++; j++;
			}

			for (int i=0; i<20; i++)
			{
			for (int j = 0; j < 20; j++)
			{
			comboBox1->Items->Add(lala[i][j]);
			}
			}
			*/
			/*		char hourc[2], minutec[2], secondc[2], typeclockc[2];
			string hour, minute, second, typeclock;
			string bbb[1000][1000];
			char filee[10];
			*/

			for (int i = 0; i < 10; i++)
			{
				/*for (int j = 0; j < 1; j++)
				{
				path1.getline(hourc, 2, ':');
				hour[i] = hourc[2];
				}
				for (int j = 1; j < 2; j++)
				{
				path1.getline(minutec, 2, ':');
				minute[i] = minutec[2];
				}
				for (int j = 2; j < 3; j++)
				{
				path1.getline(secondc, 2, ' ');
				second[i] = secondc[2];
				}
				for (int j = 3; j < 4; j++)
				{
				path1.getline(typeclockc, 2, ' ');
				typeclock[i] = typeclockc[2];
				}
				*/


				for (int j = 0; j < 2; j++)
				{
					if(o==0||o==1)
					fscanf(path, " %f", &a[i][j]);
					else
						fscanf(path, "%f", &a[i][j]);
					o++;
				}
			}

			/*char hell[10];
			bbb[0][1] = Convert::ToChar(hell[10]);
			//hell[10] = bbb[0][1];
			*/



			label1->Text = a[0][0].ToString();
			label2->Text = a[0][1].ToString();
			label3->Text = a[1][0].ToString();
			label4->Text = a[1][1].ToString();
			label5->Text = a[2][0].ToString();
			label6->Text = a[2][1].ToString();
			label7->Text = a[3][0].ToString();
			label8->Text = a[3][1].ToString();
			label9->Text = a[4][0].ToString();
			label10->Text = a[4][1].ToString();

			for (int i = 0; i < 19; i++)
			{
				for (int j = 0; j < 1; j++)
				{
					x[i] = a[i][j];
				}
			}

			for (int i = 0; i < 19; i++)
			{
				for (int j = 1; j < 2; j++)
				{
					y[i] = a[i][j];
				}
			}

			for (int i = 0; i < 10; i++)
			{
				for (int j = 0; j < 1; j++)
				{
					comboBox1->Items->Add(x[i]);
				}
			}

			for (int i = 0; i < 10; i++)
			{
				for (int j = 1; j < 2; j++)
				{
					comboBox2->Items->Add(y[i]);
				}
			}

			size_t counter = 0;
			int ch, pre = EOF;

			while ((ch = fgetc(path)) != EOF) {
				pre = ch;

				if (ch == '\n')
					++counter;
			}

			label15->Text = counter.ToString();


			/*		for (int i = 0; i < linecount; i++)
			{
			for (int j=2; j<3; j++)
			{
			st2[i] = a[i][j];
			}
			for (int j = 3; j<4; j++)
			{
			st3[i] = a[i][j];
			}
			for (int j = 4; j<5; j++)
			{
			st4[i] = a[i][j];
			}
			for (int j = 5; j<6; j++)
			{
			st5[i] = a[i][j];
			}
			for (int j = 6; j<7; j++)
			{
			st6[i] = a[i][j];
			}
			for (int j = 7; j<8; j++)
			{
			st7[i] = a[i][j];
			}
			for (int j = 8; j<9; j++)
			{
			st8[i] = a[i][j];
			}
			for (int j = 9; j<10; j++)
			{
			st9[i] = a[i][j];
			}
			for (int j = 10; j<11; j++)
			{
			st10[i] = a[i][j];
			}
			for (int j = 11; j<12; j++)
			{
			st11[i] = a[i][j];
			}
			for (int j = 12; j<13; j++)
			{
			st12[i] = a[i][j];
			}
			for (int j = 13; j<14; j++)
			{
			st13[i] = a[i][j];
			}
			for (int j = 14; j<15; j++)
			{
			st14[i] = a[i][j];
			}
			for (int j = 15; j<16; j++)
			{
			st15[i] = a[i][j];
			}
			for (int j = 16; j<17; j++)
			{
			st16[i] = a[i][j];
			}
			for (int j = 17; j<18; j++)
			{
			st17[i] = a[i][j];
			}
			for (int j = 18; j<19; j++)
			{
			st18[i] = a[i][j];
			}
			for (int j = 19; j<20; j++)
			{
			st19[i] = a[i][j];
			}
			for (int j = 20; j<21; j++)
			{
			st20[i] = a[i][j];
			}
			for (int j = 21; j<22; j++)
			{
			st21[i] = a[i][j];
			}
			for (int j = 22; j<23; j++)
			{
			st22[i] = a[i][j];
			}
			for (int j = 23; j<24; j++)
			{
			st23[i] = a[i][j];
			}
			for (int j = 24; j<25; j++)
			{
			st24[i] = a[i][j];
			}
			for (int j = 25; j<26; j++)
			{
			st5[i] = a[i][j];
			}
			}*/

			//path1.close();



		}


		_fcloseall();
	}
	};
}
