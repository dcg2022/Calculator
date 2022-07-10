#include "Window.h"
#include "wx/wx.h"

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

	but1 = new wxButton(this, 1, "1", wxPoint(10,  200), wxSize(100, 100));
	but2 = new wxButton(this, 2, "2", wxPoint(120, 200), wxSize(100, 100));
	but3 = new wxButton(this, 3, "3", wxPoint(230, 200), wxSize(100, 100));
	but4 = new wxButton(this, 4, "4", wxPoint(10,  310), wxSize(100, 100));
	but5 = new wxButton(this, 5, "5", wxPoint(120, 310), wxSize(100, 100));
	but6 = new wxButton(this, 6, "6", wxPoint(230, 310), wxSize(100, 100));
	but7 = new wxButton(this, 7, "7", wxPoint(10,  420), wxSize(100, 100));
	but8 = new wxButton(this, 8, "8", wxPoint(120, 420), wxSize(100, 100));
	but9 = new wxButton(this, 9, "9", wxPoint(230, 420), wxSize(100, 100));
	but0 = new wxButton(this, 0, "0", wxPoint(120, 530), wxSize(100, 100));

	butPls = new wxButton(this, 100, "+",      wxPoint(340, 310), wxSize(100, 100));
	butMin = new wxButton(this, 101, "-",      wxPoint(340, 200), wxSize(100, 100));
	butMul = new wxButton(this, 102, "*",      wxPoint(230, 90),  wxSize(100, 100));
	butDiv = new wxButton(this, 103, "/",      wxPoint(120, 90),  wxSize(100, 100));
	butEqu = new wxButton(this, 104, "=",      wxPoint(340, 420), wxSize(100, 210));
	butC   = new wxButton(this, 105, "Clear",  wxPoint(10, 90),   wxSize(100, 100));
	butMod = new wxButton(this, 106, "Mod",    wxPoint(10, 530),  wxSize(100, 100));
	butBin = new wxButton(this, 107, "Binary", wxPoint(340, 90),  wxSize(100, 45));
	butHex = new wxButton(this, 108, "Hex",    wxPoint(340, 145), wxSize(100, 45));
	butDec = new wxButton(this, 109, ".",      wxPoint(230, 530), wxSize(100, 100));

	text = new wxTextCtrl(this, 500, "", wxPoint(10, 10), wxSize(425, 70));
}



void Window::ButtonPress(wxCommandEvent& click)
{

	switch (click.GetId())
	{
	default:
		break;
	case 1:
		text->AppendText("1");
		break;
	case 2:
		text->AppendText("2");
		break;
	case 3:
		text->AppendText("3");
		break;
	case 4:
		text->AppendText("4");
		break;
	case 5:
		text->AppendText("5");
		break;
	case 6:
		text->AppendText("6");
		break;
	case 7:
		text->AppendText("7");
		break;
	case 8:
		text->AppendText("8");
		break;
	case 9:
		text->AppendText("9");
		break;
	case 0:
		text->AppendText("0");
		break;
	case 100:
		text->AppendText("+");
		break;
	case 101:
		text->AppendText("-");
		break;
	case 102:
		text->AppendText("*");
		break;
	case 103:
		text->AppendText("/");
		break;
	case 104:
		text->AppendText("=");
		break;
	case 105:
		text->Clear();
		break;
	case 106:
		text->AppendText("mod");
		break;
	case 107:
		text->AppendText("~");
		break;
	case 108:
		text->AppendText("#");
		break;
	case 109:
		text->AppendText(".");
		break;
	}

	click.Skip();
}