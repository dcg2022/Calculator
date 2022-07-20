#pragma once
#include "wx/wx.h"
#include "Processor.h"

class ButtonFactory
{

private:

	float num1 = 0;
	float num2 = 0;
	float ans = 0;
	std::string ans2 = "";
	char op = ' ';
	bool solve = false;

public:


	void CreateNumButtons(wxWindow* window);
	wxButton* but1 = nullptr;
	wxButton* but2 = nullptr;
	wxButton* but3 = nullptr;
	wxButton* but4 = nullptr;
	wxButton* but5 = nullptr;
	wxButton* but6 = nullptr;
	wxButton* but7 = nullptr;
	wxButton* but8 = nullptr;
	wxButton* but9 = nullptr;
	wxButton* but0 = nullptr;

	void CreateFuncButtions(wxWindow* window);
	wxButton* butPls = nullptr;
	wxButton* butMin = nullptr;
	wxButton* butMul = nullptr;
	wxButton* butDiv = nullptr;
	wxButton* butEqu = nullptr;
	wxButton* butC = nullptr;
	wxButton* butMod = nullptr;
	wxButton* butBin = nullptr;
	wxButton* butHex = nullptr;
	wxButton* butDec = nullptr;

	void CreateTextBox(wxWindow* window);
	wxTextCtrl* text = nullptr;

	void ButtonPressDetection(wxCommandEvent& click);


	
	void Solved();
	
};

