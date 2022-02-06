#pragma once

#include <exception>
#include <iostream>
#include <ostream>
#include <stdexcept>
#include <string>
#include <windows.h>
#include <msclr\marshal_cppstd.h>

#pragma comment(lib, "kernel32.lib")
#pragma comment(lib, "user32.lib")
#pragma comment(lib, "advapi32.lib")

namespace TextConverter {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm : public System::Windows::Forms::Form
	{
		public:
			MyForm(void)
			{
				InitializeComponent();
			}

		protected:
			~MyForm()
			{
				if (components)
				{
					delete components;
				}
			}
		private: System::Windows::Forms::Button^ convertButton;
		private: System::Windows::Forms::TextBox^ inputEntry;
		protected:

		protected:


		private: System::Windows::Forms::GroupBox^ groupBox1;
		private: System::Windows::Forms::Button^ inputPasteButton;
		private: System::Windows::Forms::Button^ inputClearButton;
	private: System::Windows::Forms::TabControl^ mainTabControl;

	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::WebBrowser^ webBrowser1;




		private:
			System::ComponentModel::Container ^components;

	#pragma region Windows Form Designer generated code
			void InitializeComponent(void)
			{
				this->convertButton = (gcnew System::Windows::Forms::Button());
				this->inputEntry = (gcnew System::Windows::Forms::TextBox());
				this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
				this->inputClearButton = (gcnew System::Windows::Forms::Button());
				this->inputPasteButton = (gcnew System::Windows::Forms::Button());
				this->mainTabControl = (gcnew System::Windows::Forms::TabControl());
				this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
				this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
				this->webBrowser1 = (gcnew System::Windows::Forms::WebBrowser());
				this->groupBox1->SuspendLayout();
				this->mainTabControl->SuspendLayout();
				this->tabPage1->SuspendLayout();
				this->tabPage2->SuspendLayout();
				this->SuspendLayout();
				// 
				// convertButton
				// 
				this->convertButton->Anchor = System::Windows::Forms::AnchorStyles::Top;
				this->convertButton->Cursor = System::Windows::Forms::Cursors::Arrow;
				this->convertButton->Location = System::Drawing::Point(39, 199);
				this->convertButton->Name = L"convertButton";
				this->convertButton->Size = System::Drawing::Size(129, 30);
				this->convertButton->TabIndex = 0;
				this->convertButton->Text = L"cOnVeRt";
				this->convertButton->UseVisualStyleBackColor = true;
				this->convertButton->Click += gcnew System::EventHandler(this, &MyForm::convertButton_Click);
				// 
				// inputEntry
				// 
				this->inputEntry->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(2) { L"merhaba", L"hey" });
				this->inputEntry->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::RecentlyUsedList;
				this->inputEntry->Location = System::Drawing::Point(6, 19);
				this->inputEntry->Multiline = true;
				this->inputEntry->Name = L"inputEntry";
				this->inputEntry->Size = System::Drawing::Size(333, 85);
				this->inputEntry->TabIndex = 1;
				this->inputEntry->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
				// 
				// groupBox1
				// 
				this->groupBox1->Controls->Add(this->inputClearButton);
				this->groupBox1->Controls->Add(this->inputPasteButton);
				this->groupBox1->Controls->Add(this->inputEntry);
				this->groupBox1->Location = System::Drawing::Point(6, 6);
				this->groupBox1->Name = L"groupBox1";
				this->groupBox1->Size = System::Drawing::Size(345, 141);
				this->groupBox1->TabIndex = 3;
				this->groupBox1->TabStop = false;
				this->groupBox1->Text = L"Input";
				// 
				// inputClearButton
				// 
				this->inputClearButton->Location = System::Drawing::Point(87, 110);
				this->inputClearButton->Name = L"inputClearButton";
				this->inputClearButton->Size = System::Drawing::Size(75, 23);
				this->inputClearButton->TabIndex = 3;
				this->inputClearButton->Text = L"Clear";
				this->inputClearButton->UseVisualStyleBackColor = true;
				this->inputClearButton->Click += gcnew System::EventHandler(this, &MyForm::inputClearButton_Click);
				// 
				// inputPasteButton
				// 
				this->inputPasteButton->Location = System::Drawing::Point(6, 110);
				this->inputPasteButton->Name = L"inputPasteButton";
				this->inputPasteButton->Size = System::Drawing::Size(75, 23);
				this->inputPasteButton->TabIndex = 2;
				this->inputPasteButton->Text = L"Paste";
				this->inputPasteButton->UseVisualStyleBackColor = true;
				this->inputPasteButton->Click += gcnew System::EventHandler(this, &MyForm::inputPasteButton_Click);
				// 
				// mainTabControl
				// 
				this->mainTabControl->Controls->Add(this->tabPage1);
				this->mainTabControl->Controls->Add(this->tabPage2);
				this->mainTabControl->Cursor = System::Windows::Forms::Cursors::Arrow;
				this->mainTabControl->HotTrack = true;
				this->mainTabControl->Location = System::Drawing::Point(3, 3);
				this->mainTabControl->Name = L"mainTabControl";
				this->mainTabControl->SelectedIndex = 0;
				this->mainTabControl->Size = System::Drawing::Size(777, 375);
				this->mainTabControl->TabIndex = 4;
				// 
				// tabPage1
				// 
				this->tabPage1->Controls->Add(this->groupBox1);
				this->tabPage1->Controls->Add(this->convertButton);
				this->tabPage1->Location = System::Drawing::Point(4, 22);
				this->tabPage1->Name = L"tabPage1";
				this->tabPage1->Padding = System::Windows::Forms::Padding(3);
				this->tabPage1->Size = System::Drawing::Size(769, 349);
				this->tabPage1->TabIndex = 0;
				this->tabPage1->Text = L"tabPage1";
				this->tabPage1->UseVisualStyleBackColor = true;
				// 
				// tabPage2
				// 
				this->tabPage2->Controls->Add(this->webBrowser1);
				this->tabPage2->Location = System::Drawing::Point(4, 22);
				this->tabPage2->Name = L"tabPage2";
				this->tabPage2->Padding = System::Windows::Forms::Padding(3);
				this->tabPage2->Size = System::Drawing::Size(769, 349);
				this->tabPage2->TabIndex = 1;
				this->tabPage2->Text = L"tabPage2";
				this->tabPage2->UseVisualStyleBackColor = true;
				// 
				// webBrowser1
				// 
				this->webBrowser1->Dock = System::Windows::Forms::DockStyle::Fill;
				this->webBrowser1->Location = System::Drawing::Point(3, 3);
				this->webBrowser1->MinimumSize = System::Drawing::Size(20, 20);
				this->webBrowser1->Name = L"webBrowser1";
				this->webBrowser1->Size = System::Drawing::Size(763, 343);
				this->webBrowser1->TabIndex = 0;
				this->webBrowser1->Url = (gcnew System::Uri(L"https://google.com", System::UriKind::Absolute));
				this->webBrowser1->DocumentCompleted += gcnew System::Windows::Forms::WebBrowserDocumentCompletedEventHandler(this, &MyForm::webBrowser1_DocumentCompleted);
				// 
				// MyForm
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->ClientSize = System::Drawing::Size(783, 381);
				this->Controls->Add(this->mainTabControl);
				this->MaximumSize = System::Drawing::Size(799, 420);
				this->MinimumSize = System::Drawing::Size(799, 420);
				this->Name = L"MyForm";
				this->Text = L"Text Converter";
				this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
				this->groupBox1->ResumeLayout(false);
				this->groupBox1->PerformLayout();
				this->mainTabControl->ResumeLayout(false);
				this->tabPage1->ResumeLayout(false);
				this->tabPage2->ResumeLayout(false);
				this->ResumeLayout(false);

			}
	#pragma endregion
		private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void convertButton_Click(System::Object^ sender, System::EventArgs^ e) {

		}
		private: System::Void inputClearButton_Click(System::Object^ sender, System::EventArgs^ e) {
			this->inputEntry->Text = L"";
		}
		private: System::Void inputPasteButton_Click(System::Object^ sender, System::EventArgs^ e) {
			std::string text;
 
			if (OpenClipboard(NULL))
			{
				HANDLE clip;
				clip = GetClipboardData(CF_TEXT);
				text = (LPSTR)GlobalLock(clip);
				GlobalUnlock(clip);
				CloseClipboard();
			}
			
			this->inputEntry->Text = gcnew System::String(text.c_str());
		}
	private: System::Void webBrowser1_DocumentCompleted(System::Object^ sender, System::Windows::Forms::WebBrowserDocumentCompletedEventArgs^ e) {
	}
};
}