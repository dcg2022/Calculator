#include "Window.h"
#include "wx/wx.h"



Window::Window() : wxFrame(nullptr, wxID_ANY, "Calculator but Epic", wxPoint(0, 0), wxSize(500, 700))
{

#pragma region NumberButtons



	but1 = new wxButton(this, 1, "One",   wxPoint(10,  200), wxSize(100, 100));
	but2 = new wxButton(this, 2, "two",   wxPoint(120, 200), wxSize(100, 100));
	but3 = new wxButton(this, 3, "Three", wxPoint(230, 200), wxSize(100, 100));
	but4 = new wxButton(this, 4, "Four",  wxPoint(10,  310), wxSize(100, 100));
	but5 = new wxButton(this, 5, "Five",  wxPoint(120, 310), wxSize(100, 100));
	but6 = new wxButton(this, 6, "Six",   wxPoint(230, 310), wxSize(100, 100));
	but7 = new wxButton(this, 7, "Seven", wxPoint(10,  420), wxSize(100, 100));
	but8 = new wxButton(this, 8, "Eight", wxPoint(120, 420), wxSize(100, 100));
	but9 = new wxButton(this, 9, "Nine",  wxPoint(230, 420), wxSize(100, 100));
	but0 = new wxButton(this, 0, "Zero",  wxPoint(120, 530), wxSize(100, 100));

#pragma endregion

#pragma region OperationButtons


	butPls = new wxButton(this, 100, "Plus", wxPoint(340, 310), wxSize(100, 100));
	butMin = new wxButton(this, 101, "Minus", wxPoint(340, 200), wxSize(100, 100));
	butMul = new wxButton(this, 102, "Multiply", wxPoint(230, 90), wxSize(100, 100));
	butDiv = new wxButton(this, 103, "Divide", wxPoint(120, 90), wxSize(100, 100));
	butEqu = new wxButton(this, 104, "Equals", wxPoint(340, 420), wxSize(100, 210));
	butC   = new wxButton(this, 105, "Clear", wxPoint(10, 90), wxSize(100, 100));
	butMod = new wxButton(this, 106, "Mod", wxPoint(10, 530), wxSize(100, 100));


	butBin = new wxButton(this, 107, "Binary", wxPoint(340, 90), wxSize(100, 45));
	butHex = new wxButton(this, 108, "Hex", wxPoint(340, 145), wxSize(100, 45));

	butDec = new wxButton(this, 109, "Decimal", wxPoint(230, 530), wxSize(100, 100));



#pragma endregion

}