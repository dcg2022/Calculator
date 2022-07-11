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