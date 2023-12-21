#pragma once

#include <iostream>
#include <cctype>
#include <string>
#include "Ride.h"

namespace OpenRidesPrediction {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ min_temp_field;
	private: System::Windows::Forms::TextBox^ max_temp_field;
	private: System::Windows::Forms::TextBox^ wind_field;



	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ListBox^ ride_listbox;
	private: System::Windows::Forms::CheckBox^ low_season_checkbox;
	private: System::Windows::Forms::Button^ reset_button;
	private: System::Windows::Forms::Button^ prediction_button;






	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->min_temp_field = (gcnew System::Windows::Forms::TextBox());
			this->max_temp_field = (gcnew System::Windows::Forms::TextBox());
			this->wind_field = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->ride_listbox = (gcnew System::Windows::Forms::ListBox());
			this->low_season_checkbox = (gcnew System::Windows::Forms::CheckBox());
			this->reset_button = (gcnew System::Windows::Forms::Button());
			this->prediction_button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Walibi0615", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(656, 35);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Welkom bij de OpenRidesPrediction app.";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Walibi0615", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(15, 144);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(404, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Wat is de voorspelde minimumtemperatuur (in °C)\?";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Walibi0615", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(15, 198);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(409, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Wat is de voorspelde maximumtemperatuur (in °C)\?";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Walibi0615", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(15, 250);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(328, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Wat is de voorspelde windkracht (in Bft)\?";
			// 
			// min_temp_field
			// 
			this->min_temp_field->Font = (gcnew System::Drawing::Font(L"Walibi0615", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->min_temp_field->Location = System::Drawing::Point(18, 164);
			this->min_temp_field->Name = L"min_temp_field";
			this->min_temp_field->Size = System::Drawing::Size(177, 24);
			this->min_temp_field->TabIndex = 4;
			// 
			// max_temp_field
			// 
			this->max_temp_field->Font = (gcnew System::Drawing::Font(L"Walibi0615", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->max_temp_field->Location = System::Drawing::Point(18, 217);
			this->max_temp_field->Name = L"max_temp_field";
			this->max_temp_field->Size = System::Drawing::Size(177, 24);
			this->max_temp_field->TabIndex = 5;
			// 
			// wind_field
			// 
			this->wind_field->Font = (gcnew System::Drawing::Font(L"Walibi0615", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->wind_field->Location = System::Drawing::Point(18, 269);
			this->wind_field->Name = L"wind_field";
			this->wind_field->Size = System::Drawing::Size(177, 24);
			this->wind_field->TabIndex = 6;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Walibi0615", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(15, 307);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(620, 16);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Selecteer de attractie waarvoor er een voorspelling gemaakt dient te worden.";
			// 
			// ride_listbox
			// 
			this->ride_listbox->Font = (gcnew System::Drawing::Font(L"Walibi0615", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ride_listbox->FormattingEnabled = true;
			this->ride_listbox->ItemHeight = 16;
			this->ride_listbox->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"The Ride to Happiness by Tomorrowland", L"Anubis The Ride",
					L"Heidi The Ride", L"De Draak", L"K3 Rollerskater", L"#LikeMe Coaster", L"Nachtwacht Flyer", L"Andere attractie"
			});
			this->ride_listbox->Location = System::Drawing::Point(18, 326);
			this->ride_listbox->Name = L"ride_listbox";
			this->ride_listbox->Size = System::Drawing::Size(381, 68);
			this->ride_listbox->TabIndex = 9;
			// 
			// low_season_checkbox
			// 
			this->low_season_checkbox->AutoSize = true;
			this->low_season_checkbox->Font = (gcnew System::Drawing::Font(L"Walibi0615", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->low_season_checkbox->Location = System::Drawing::Point(18, 412);
			this->low_season_checkbox->Name = L"low_season_checkbox";
			this->low_season_checkbox->Size = System::Drawing::Size(187, 23);
			this->low_season_checkbox->TabIndex = 10;
			this->low_season_checkbox->Text = L"Het is laagseizoen";
			this->low_season_checkbox->UseVisualStyleBackColor = true;
			// 
			// reset_button
			// 
			this->reset_button->Font = (gcnew System::Drawing::Font(L"Walibi0615", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->reset_button->Location = System::Drawing::Point(18, 455);
			this->reset_button->Name = L"reset_button";
			this->reset_button->Size = System::Drawing::Size(197, 79);
			this->reset_button->TabIndex = 11;
			this->reset_button->Text = L"Reset formulier";
			this->reset_button->UseVisualStyleBackColor = true;
			this->reset_button->Click += gcnew System::EventHandler(this, &MyForm::reset_button_Click);
			// 
			// prediction_button
			// 
			this->prediction_button->Font = (gcnew System::Drawing::Font(L"Walibi0615", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->prediction_button->Location = System::Drawing::Point(471, 455);
			this->prediction_button->Name = L"prediction_button";
			this->prediction_button->Size = System::Drawing::Size(197, 79);
			this->prediction_button->TabIndex = 12;
			this->prediction_button->Text = L"Maak voorspelling";
			this->prediction_button->UseVisualStyleBackColor = true;
			this->prediction_button->Click += gcnew System::EventHandler(this, &MyForm::prediction_button_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(680, 563);
			this->Controls->Add(this->prediction_button);
			this->Controls->Add(this->reset_button);
			this->Controls->Add(this->low_season_checkbox);
			this->Controls->Add(this->ride_listbox);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->wind_field);
			this->Controls->Add(this->max_temp_field);
			this->Controls->Add(this->min_temp_field);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"OpenRidesPrediction v2.0.0";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void reset_button_Click(System::Object^ sender, System::EventArgs^ e) {
		this->min_temp_field->Text = "";
		this->max_temp_field->Text = "";
		this->wind_field->Text = "";
		this->ride_listbox->Text = "";
		this->low_season_checkbox->Checked = false;
		this->ride_listbox->ClearSelected();
	}
private: System::Void prediction_button_Click(System::Object^ sender, System::EventArgs^ e) {
	//verify if all parameters are filled in
	if (min_temp_field->Text == "") {
		MessageBox::Show(L"Voer een minimumtemperatuur in!", L"Error: foutieve input", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	if (max_temp_field->Text == "") {
		MessageBox::Show(L"Voer een maximumtemperatuur in!", L"Error: foutieve input", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	if (wind_field->Text == "") {
		MessageBox::Show(L"Voer een windkracht in!", L"Error: foutieve input", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	//verify if they are integers
	System::String^ min_temp_str = min_temp_field->Text;
	bool onlyDigitsTmin = true;
	for each (char c in min_temp_str) {
		if (!Char::IsDigit(c)) {
			onlyDigitsTmin = false;
			break;
		}
	}
	if (onlyDigitsTmin == false) {
		MessageBox::Show(L"De minimumtemperatuur kan enkel een geheel getal zijn en mag daarom geen letters of andere tekens bevatten!", L"Error: foutieve input", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	System::String^ max_temp_str = max_temp_field->Text;
	bool onlyDigitsTmax = true;
	for each (char c in max_temp_str) {
		if (!Char::IsDigit(c)) {
			onlyDigitsTmax = false;
			break;
		}
	}
	if (onlyDigitsTmax == false) {
		MessageBox::Show(L"De maximumtemperatuur kan enkel een geheel getal zijn en mag daarom geen letters of andere tekens bevatten!", L"Error: foutieve input", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	System::String^ wind_str = wind_field->Text;
	bool onlyDigitswind = true;
	for each (char c in wind_str) {
		if (!Char::IsDigit(c)) {
			onlyDigitswind = false;
			break;
		}
	}
	if (onlyDigitswind == false) {
		MessageBox::Show(L"De windkracht kan enkel een geheel getal zijn en mag daarom geen letters of andere tekens bevatten!", L"Error: foutieve input", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	int Tmin = System::Convert::ToInt16(min_temp_field->Text);
	int Tmax = System::Convert::ToInt16(max_temp_field->Text);
	int windkracht = System::Convert::ToInt16(wind_field->Text);
	bool laagseizoen = System::Convert::ToBoolean(low_season_checkbox->Checked);

	if (Tmin > Tmax || windkracht < 0)
	{
		MessageBox::Show(L"Zorg er steeds voor dat de minimumtemperatuur die je opgeeft kleiner is dan de maximumtemperatuur, en dat de windkracht een positief getal is!", L"Error: foutieve input", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	//verify if a ride is selected
	if (this->ride_listbox->SelectedItem == nullptr) {
		MessageBox::Show(L"Gelieve een attractie te selecteren!", L"Error: foutieve input", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	String^ selectedRide = this->ride_listbox->SelectedItem->ToString();
	string rideName;
	using namespace Runtime::InteropServices;
	const char* chars = (const char*)(Marshal::StringToHGlobalAnsi(selectedRide)).ToPointer();
	rideName = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));


	//do the actual calculation
	vector<int> data = { Tmin, Tmax, windkracht };
	Ride ride(rideName, data);
}
};
}
