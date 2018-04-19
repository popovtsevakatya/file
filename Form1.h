#pragma once
#include <stdio.h>
#include <time.h>
#include <iostream>
#include <fstream>
#include "windows.h"
using namespace std;

namespace Lab4FORMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	int start = 0;

	/// <summary>
	/// ������ ��� Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 



	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::RadioButton^  radioButton1;

	private: System::Windows::Forms::RadioButton^  radioButton3;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;

	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// ��������� ���������� ������������.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ������������ ����� ��� ��������� ������������ - �� ���������
		/// ���������� ������� ������ ��� ������ ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(12, 112);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(256, 23);
			this->progressBar1->TabIndex = 4;
			this->progressBar1->Click += gcnew System::EventHandler(this, &Form1::progressBar1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(83, 141);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(114, 46);
			this->button1->TabIndex = 5;
			this->button1->Text = L"�����";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(101, 12);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1000, 0, 0, 0});
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(68, 20);
			this->numericUpDown1->TabIndex = 6;
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown1_ValueChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(31, 45);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(225, 17);
			this->radioButton1->TabIndex = 7;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"������������� �������� ����������";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton1_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(31, 79);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(118, 17);
			this->radioButton3->TabIndex = 9;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"�������� ������";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton3_CheckedChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(46, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(49, 13);
			this->label1->TabIndex = 11;
			this->label1->Text = L"������:";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(175, 19);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(22, 13);
			this->label2->TabIndex = 12;
			this->label2->Text = L"��";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(280, 248);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->progressBar1);
			this->Name = L"Form1";
			this->Text = L"������������ ������ �4";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void progressBar1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void numericUpDown1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {		 		
		 }
private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
         {
	         start = 1;
         }
private: System::Void radioButton3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 start = 2;
		 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

int process_time = 0;
int time_help = 0;//��������� ����� 
int size=(int)numericUpDown1->Value; 
ofstream fw;
char buf [1024];// � ����������

FILE* mainfile;
mainfile=fopen("mainfile.txt", "w");//co������
for (int i=0; i<size*1024; i++)
fwrite(&buf, sizeof buf,1, mainfile);//������������
fclose(mainfile);// ���������

if (start == 1)
{ 
    time_help=clock();
	mainfile=fopen("mainfile.txt", "r");//co������
	FILE* output;
	output=fopen("Var_file.txt", "w");// ��������
      for ( int i=0; i<size*1024; i++)// �������� � �����
	  {
		fread(&buf,sizeof buf, 1, mainfile);//������ �� ��������� ����� 1024
		fwrite(&buf, sizeof buf,1, output);// ���������� � ������ 1024
	  }
    process_time=clock()-time_help;//������� ���������� �������
	progressBar1->Minimum=1;//���������� ����������� �������� 1
    progressBar1->Maximum=process_time;//���������� �� �������������
    progressBar1->Visible=true;//����������� �������� ���������� ProgressBar.
    for(int j=1;j<=process_time;j++) 
    {
    progressBar1->Value=j;
    progressBar1->Refresh();// ��������� ���������� �� ProgressBar.
    }
	fw.open("Var_file_res.txt"); 
	fw<<"�������� ���������� "<<process_time;// ������� � ���� ����� �� ������� ������������ ����
	fw.close();//���������
}

if (start == 2)
{
    time_help=clock();
	ifstream fr;
	fr.open("mainfile.txt");//�������� ��� ������
	fw.open("Streams_file.txt");// �������� ��� ������
	for (int i=0; i<size*1024; i++)// �������� � �����
	{
		fr.read((char *) &buf, sizeof(buf));//������ �� ��������� ����� 1024
	    fw.write((char *) &buf, sizeof(buf));// ���������� � ������ 1024
	}
	fw.close();// ���������
	fr.close();// ���������
	process_time=clock()-time_help;// ������� ���������� �������
    progressBar1->Minimum=1;
    progressBar1->Maximum=process_time;//������ �������
    progressBar1->Visible=true;// �������� ������.Value: ������� �������� ��������. ������ ���������� ����� Minimum � Maximum
    for(int j=1;j<=process_time;j++) 
    {
    progressBar1->Value=j;
    progressBar1->Refresh();
    }
	fw.open("Streams_file_res.txt");
	fw<<"�������� ������ "<<process_time;// ������� � ���� ����� �� ������� ������������ ����
	fw.close();//���������
}
}
};
}

