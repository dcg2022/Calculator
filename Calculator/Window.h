#pragma once
#include "wx/wx.h"
#include "ButtonFactory.h"



class Window : public wxFrame
{
private:



public:

	ButtonFactory factory;
	Window();



	void ButtonPress(wxCommandEvent& click);



	wxDECLARE_EVENT_TABLE();
};

