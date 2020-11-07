#pragma once

namespace Tarea5FranciscoPuga1183819 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::IO;
	using namespace System::Drawing;
	using namespace System::Diagnostics;
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		array<int^>^ array0;
		array<int^>^ array1;
		Hashtable^ hash = gcnew Hashtable();
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ Generate;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ Txtbusnum;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ BtSecuencial;
	private: System::Windows::Forms::Button^ BtBinBin;
	private: System::Windows::Forms::Button^ BtHash;




	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ BtByeBye;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Generate = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Txtbusnum = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->BtSecuencial = (gcnew System::Windows::Forms::Button());
			this->BtBinBin = (gcnew System::Windows::Forms::Button());
			this->BtHash = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->BtByeBye = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(70, 71);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 0;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(299, 12);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(120, 459);
			this->listBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(43, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(158, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Cantidad de numeros aleatorios:";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// Generate
			// 
			this->Generate->Location = System::Drawing::Point(83, 97);
			this->Generate->Name = L"Generate";
			this->Generate->Size = System::Drawing::Size(75, 23);
			this->Generate->TabIndex = 3;
			this->Generate->Text = L"Generar Numeros";
			this->Generate->UseVisualStyleBackColor = true;
			this->Generate->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(34, 166);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(81, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Buscar numero:";
			// 
			// Txtbusnum
			// 
			this->Txtbusnum->Location = System::Drawing::Point(121, 163);
			this->Txtbusnum->Name = L"Txtbusnum";
			this->Txtbusnum->Size = System::Drawing::Size(100, 20);
			this->Txtbusnum->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 352);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(179, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"El numero se encuentra en posicion:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 379);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(109, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Tiempo de ejecucion:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(80, 205);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(117, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Metodos de Busqueda:";
			// 
			// BtSecuencial
			// 
			this->BtSecuencial->Location = System::Drawing::Point(95, 234);
			this->BtSecuencial->Name = L"BtSecuencial";
			this->BtSecuencial->Size = System::Drawing::Size(75, 23);
			this->BtSecuencial->TabIndex = 9;
			this->BtSecuencial->Text = L"Secuencial";
			this->BtSecuencial->UseVisualStyleBackColor = true;
			this->BtSecuencial->Click += gcnew System::EventHandler(this, &MyForm::BtSecuencial_Click);
			// 
			// BtBinBin
			// 
			this->BtBinBin->Location = System::Drawing::Point(95, 263);
			this->BtBinBin->Name = L"BtBinBin";
			this->BtBinBin->Size = System::Drawing::Size(75, 23);
			this->BtBinBin->TabIndex = 10;
			this->BtBinBin->Text = L"Binario";
			this->BtBinBin->UseVisualStyleBackColor = true;
			this->BtBinBin->Click += gcnew System::EventHandler(this, &MyForm::BtBinBin_Click);
			// 
			// BtHash
			// 
			this->BtHash->Location = System::Drawing::Point(95, 292);
			this->BtHash->Name = L"BtHash";
			this->BtHash->Size = System::Drawing::Size(75, 23);
			this->BtHash->TabIndex = 11;
			this->BtHash->Text = L"Hash";
			this->BtHash->UseVisualStyleBackColor = true;
			this->BtHash->Click += gcnew System::EventHandler(this, &MyForm::BtHash_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(197, 352);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(13, 13);
			this->label6->TabIndex = 12;
			this->label6->Text = L"0";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(197, 379);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(13, 13);
			this->label7->TabIndex = 13;
			this->label7->Text = L"0";
			// 
			// BtByeBye
			// 
			this->BtByeBye->Location = System::Drawing::Point(74, 437);
			this->BtByeBye->Name = L"BtByeBye";
			this->BtByeBye->Size = System::Drawing::Size(127, 23);
			this->BtByeBye->TabIndex = 14;
			this->BtByeBye->Text = L"Cerrar Programa";
			this->BtByeBye->UseVisualStyleBackColor = true;
			this->BtByeBye->Click += gcnew System::EventHandler(this, &MyForm::BtByeBye_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(448, 499);
			this->Controls->Add(this->BtByeBye);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->BtHash);
			this->Controls->Add(this->BtBinBin);
			this->Controls->Add(this->BtSecuencial);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->Txtbusnum);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Generate);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int CanGenerate = Convert::ToInt32(textBox1->Text);
		listBox1->Items->Clear();
		try{
			if (CanGenerate > 0 && CanGenerate < 100) {
			    array0 = gcnew array<int^>(CanGenerate);
				array1 = gcnew array<int^>(CanGenerate);
				System::Random^ rnggs = gcnew System::Random();

				for (int i = 0; i < CanGenerate; i++) {
					int num = rnggs->Next(1, 100);
					array0[i] = num;
					array1[i] = array0[i];
					if (!hash->Contains(array0[i])) {
						hash->Add(Convert::ToInt32(array0[i]) % 99, Convert::ToString(array0[i]));
					}
					listBox1->Items->Add(num);
				}
			}
			else
			{
				MessageBox::Show("Solo se aceptan valores de 1 a 99", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		catch(Exception^ e){
			MessageBox::Show("El valor ingresado no es valido.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
private: System::Void BtSecuencial_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		int num = Convert::ToInt32(Txtbusnum->Text);
		Stopwatch stopwatch;
		stopwatch.Start();
		label6->Text = Convert::ToString(Secuencial(array0, array0->Length, num));
		stopwatch.Stop();
		TimeSpan ts = stopwatch.Elapsed;
		label7->Text = Convert::ToString(ts);

	}
	catch (Exception^ e)
	{
		MessageBox::Show("Datos no existentes", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
	   int Secuencial(array<int^>^ array1, int count, int val) {
		   for (int i = 0; i < count; i++)
		   {
			   if (*array0[i] == val)
			   {
				   return i;
			   }
		   }
		   return -1;
	   }

private: System::Void BtBinBin_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		int num = Convert::ToInt32(Txtbusnum->Text);
		Stopwatch stopwatch;
		stopwatch.Start();
		stopwatch.Stop();
		TimeSpan ts = stopwatch.Elapsed;
		label7->Text = Convert::ToString(ts);
	}
	catch (Exception^ e)
	{
		MessageBox::Show("Datos no existentes", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
	   int BusquedaBinaria(int arreglo[], int inf, int sup, int value) {
		   if (inf > sup)
			   return -1;

		   int mitad = inf + (((sup + 1) - inf) / 2);
		   int pivote = arreglo[mitad];

		   if (pivote == value) {
			   return mitad;
		   }
		   else {
			   if (pivote > value)
				   return BusquedaBinaria(arreglo, inf, mitad - 1, value);
			   else
				   return BusquedaBinaria(arreglo, mitad + 1, sup, value);
		   }
	   }
private: System::Void BtHash_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		int num = Convert::ToInt32(Txtbusnum->Text);
		Stopwatch stopwatch;
		stopwatch.Start();
		label6->Text = Convert::ToString(Hashing(hash, 99, num));
		stopwatch.Stop();
		TimeSpan ts = stopwatch.Elapsed;
		label7->Text = Convert::ToString(ts);
	}
	catch (Exception^ e)
	{
		MessageBox::Show("Datos no existentes", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
	   int Hashing(Hashtable^ hash, int count, int val){
		   if (Convert::ToInt32(hash[val % count]) == val)
			   return (val % count);
		   else
			   return -1;
	   }
private: System::Void BtByeBye_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
};
}
