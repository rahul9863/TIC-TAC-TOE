#include "myApp.h"
wxIMPLEMENT_APP(myApp);

bool myApp::OnInit()  //Defination of OnInit Function
{
	frame = new myMain(wxT("TIC TAC TOE"));  //Creation of wxwidget window
	frame->Show(true);      //Display Window named "TIC TAC TOE"
	return true;
}


