#pragma once
#include "wx/wx.h"
#include "ButtonFactory.h"



class Window : public wxFrame
{
private:



public:

	ButtonFactory factory;
	Window();

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


	void ButtonPress(wxCommandEvent& click);



	wxDECLARE_EVENT_TABLE();
};

