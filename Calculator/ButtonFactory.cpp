#include "ButtonFactory.h"
#include "wx/wx.h"

void ButtonFactory::CreateNumButtons(wxWindow* window)
{
	but1 = new wxButton(window, 1, "1", wxPoint(10,  200), wxSize(100, 100));
	but2 = new wxButton(window, 2, "2", wxPoint(120, 200), wxSize(100, 100));
	but3 = new wxButton(window, 3, "3", wxPoint(230, 200), wxSize(100, 100));
	but4 = new wxButton(window, 4, "4", wxPoint(10,  310), wxSize(100, 100));
	but5 = new wxButton(window, 5, "5", wxPoint(120, 310), wxSize(100, 100));
	but6 = new wxButton(window, 6, "6", wxPoint(230, 310), wxSize(100, 100));
	but7 = new wxButton(window, 7, "7", wxPoint(10,  420), wxSize(100, 100));
	but8 = new wxButton(window, 8, "8", wxPoint(120, 420), wxSize(100, 100));
	but9 = new wxButton(window, 9, "9", wxPoint(230, 420), wxSize(100, 100));
	but0 = new wxButton(window, 0, "0", wxPoint(120, 530), wxSize(100, 100));
}

void ButtonFactory::CreateFuncButtions(wxWindow* window)
{
	butPls = new wxButton(window, 100, "+",      wxPoint(340, 310), wxSize(100, 100));
	butMin = new wxButton(window, 101, "-",      wxPoint(340, 200), wxSize(100, 100));
	butMul = new wxButton(window, 102, "*",      wxPoint(230 , 90), wxSize(100, 100));
	butDiv = new wxButton(window, 103, "/",      wxPoint(120,  90), wxSize(100, 100));
	butEqu = new wxButton(window, 104, "=",      wxPoint(340, 420), wxSize(100, 210));
	butC   = new wxButton(window, 105, "Clear",  wxPoint(10,   90), wxSize(100, 100));
	butMod = new wxButton(window, 106, "Mod",    wxPoint(10,  530), wxSize(100, 100));
	butBin = new wxButton(window, 107, "Binary", wxPoint(340 , 90), wxSize(100,  45));
	butHex = new wxButton(window, 108, "Hex",    wxPoint(340, 145), wxSize(100,  45));
	butDec = new wxButton(window, 109, ".",      wxPoint(230, 530), wxSize(100, 100));
}

void ButtonFactory::CreateTextBox(wxWindow* window)
{
	text = new wxTextCtrl(window, 500, "", wxPoint(10, 10), wxSize(430, 70));
}

void ButtonFactory::ButtonPressDetection(wxCommandEvent& click)
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
		text->AppendText(" + ");
		break;
	case 101:
		text->AppendText(" - ");
		break;
	case 102:
		text->AppendText(" * ");
		break;
	case 103:
		text->AppendText(" / ");
		break;
	case 104:
		text->AppendText(" = ");
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

}
