#pragma once

#include "wx/wx.h"
#include "myMain.h"

class myApp : public wxApp   //Inheriting wxApp
{
private:
	myMain* frame = nullptr;  // Declaration for wxwidget window
public:
	virtual bool OnInit();
};

