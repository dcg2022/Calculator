#include "Window.h"
#include "wx/wx.h"
#include "ButtonFactory.h"

wxBEGIN_EVENT_TABLE(Window, wxFrame)

EVT_BUTTON(1, ButtonPress)
EVT_BUTTON(2, ButtonPress)
EVT_BUTTON(3, ButtonPress)
EVT_BUTTON(4, ButtonPress)
EVT_BUTTON(5, ButtonPress)
EVT_BUTTON(6, ButtonPress)
EVT_BUTTON(7, ButtonPress)
EVT_BUTTON(8, ButtonPress)
EVT_BUTTON(9, ButtonPress)
EVT_BUTTON(0, ButtonPress)
EVT_BUTTON(100, ButtonPress)
EVT_BUTTON(101, ButtonPress)
EVT_BUTTON(102, ButtonPress)
EVT_BUTTON(103, ButtonPress)
EVT_BUTTON(104, ButtonPress)
EVT_BUTTON(105, ButtonPress)
EVT_BUTTON(106, ButtonPress)
EVT_BUTTON(107, ButtonPress)
EVT_BUTTON(108, ButtonPress)
EVT_BUTTON(109, ButtonPress)

wxEND_EVENT_TABLE()

Window::Window() : wxFrame(nullptr, wxID_ANY, "Calculator but Epic", wxPoint(0, 0), wxSize(465, 675))
{
	factory.CreateNumButtons(this);
	factory.CreateFuncButtions(this);
	factory.CreateTextBox(this);
}



void Window::ButtonPress(wxCommandEvent& click)
{
	factory.ButtonPressDetection(click);

	click.Skip();
}