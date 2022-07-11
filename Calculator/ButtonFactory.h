#pragma once
#include "wx/wx.h"

class ButtonFactory
{
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
	wxTextCtrl* text = nullptr;
};

