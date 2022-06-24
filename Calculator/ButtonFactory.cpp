
#include "ButtonFactory.h"



ButtonFactory::ButtonFactory(Calculator* _calc)
{
	calculator = _calc;
}

ButtonFactory::~ButtonFactory()
{
}

wxTextCtrl* ButtonFactory::CreatetextBox()
{
	wxTextCtrl* textbox = new wxTextCtrl(Calculator, 100, "", wxPoint(30, 26), wxSize(250, 35));
	return textbox;
}


// 1st row buttons
wxButton* ButtonFactory::CreateButton0()
{
	//Calculator calc;
	wxButton* button0 = new wxButton(Calculator, 0, "0", wxPoint(30, 200), wxSize(50, 50));
	return button0;
}

wxButton* ButtonFactory::CreateButton1()
{
	//Calculator* calculator = new Calculator();

	wxButton* button1 = new wxButton(Calculator, 1, "1", wxPoint(80, 200), wxSize(50, 50));
	return button1;
}

wxButton* ButtonFactory::CreateButton2()
{
	wxButton* button2 = new wxButton(Calculator, 2, "2", wxPoint(130, 200), wxSize(50, 50));
	return button2;
}

wxButton* ButtonFactory::CreateButton3()
{
	wxButton* button3 = new wxButton(Calculator, 3, "3", wxPoint(180, 200), wxSize(50, 50));
	return button3;
}

wxButton* ButtonFactory::CreateAddButton()
{
	wxButton* addBtn = new wxButton(Calculator, 1200, "+", wxPoint(230, 200), wxSize(50, 50));

	return addBtn;
}

// 2nd row buttons
wxButton* ButtonFactory::CreateDecButton()
{
	wxButton* decBtn = new wxButton(Calculator, 300, "dec", wxPoint(30, 150), wxSize(50, 50));
	return decBtn;
}

wxButton* ButtonFactory::CreateButton4()
{
	wxButton* button4 = new wxButton(Calculator, 4, "4", wxPoint(80, 150), wxSize(50, 50));
	return button4;
}

wxButton* ButtonFactory::CreateButton5()
{
	wxButton* button5 = new wxButton(Calculator, 5, "5", wxPoint(130, 150), wxSize(50, 50));
	return button5;
}

wxButton* ButtonFactory::CreateButton6()
{
	wxButton* button6 = new wxButton(Calculator, 6, "6", wxPoint(180, 150), wxSize(50, 50));
	return button6;
}

wxButton* ButtonFactory::CreateSubstractButton()
{
	wxButton* substractBtn = new wxButton(Calculator, 1100, "-", wxPoint(230, 150), wxSize(50, 50));
	return substractBtn;
}

// 3rd row buttons
wxButton* ButtonFactory::CreateHexButton()
{
	wxButton* hexBtn = new wxButton(Calculator, 400, "hex", wxPoint(30, 100), wxSize(50, 50));
	return hexBtn;
}

wxButton* ButtonFactory::CreateButton7()
{
	wxButton* button7 = new wxButton(Calculator, 7, "7", wxPoint(80, 100), wxSize(50, 50));
	return button7;
}

wxButton* ButtonFactory::CreateButton8()
{
	wxButton* button8 = new wxButton(Calculator, 8, "8", wxPoint(130, 100), wxSize(50, 50));
	return button8;
}

wxButton* ButtonFactory::CreateButton9()
{
	wxButton* button9 = new wxButton(Calculator, 9, "9", wxPoint(180, 100), wxSize(50, 50));
	return button9;
}

wxButton* ButtonFactory::CreateMutliplyBtn()
{
	wxButton* mutliplyBtn = new wxButton(Calculator, 1000, "*", wxPoint(230, 100), wxSize(50, 50));
	return mutliplyBtn;
}

// 4th row buttons
wxButton* ButtonFactory::CreateBinButton()
{
	wxButton* binBtn = new wxButton(Calculator, 500, "bin", wxPoint(30, 50), wxSize(50, 50));
	return binBtn;
}

wxButton* ButtonFactory::CreateNegButton()
{
	wxButton* negBtn = new wxButton(Calculator, 600, "(-)", wxPoint(80, 50), wxSize(50, 50));
	return negBtn;
}

wxButton* ButtonFactory::CreateModButton()
{
	wxButton* modBtn = new wxButton(Calculator, 700, "mod", wxPoint(130, 50), wxSize(50, 50));
	return modBtn;
}

wxButton* ButtonFactory::CreateEqualButton()
{
	wxButton* equalBtn = new wxButton(Calculator, 800, "=", wxPoint(180, 50), wxSize(50, 50));
	return equalBtn;
}

wxButton* ButtonFactory::CreateDivideBtn()
{
	wxButton* divideBtn = new wxButton(Calculator, 900, "/", wxPoint(230, 50), wxSize(50, 50));
	return divideBtn;
}

wxButton* ButtonFactory::CreateClearBtn()
{
	wxButton* clearBtn = new wxButton(Calculator, 200, "clear", wxPoint(30, 250), wxSize(250, 30));
	return clearBtn;
}


