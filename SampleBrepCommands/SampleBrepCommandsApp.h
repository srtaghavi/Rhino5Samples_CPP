/////////////////////////////////////////////////////////////////////////////
// SampleBrepCommandsApp.h : main header file for the SampleBrepCommands DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "Resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CSampleBrepCommandsApp
// See SampleBrepCommandsApp.cpp for the implementation of this class
//

class CSampleBrepCommandsApp : public CWinApp
{
public:
	CSampleBrepCommandsApp();

// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

	DECLARE_MESSAGE_MAP()
};
