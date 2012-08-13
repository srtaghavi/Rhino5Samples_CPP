/////////////////////////////////////////////////////////////////////////////
// SampleBrepCommandsApp.cpp : Defines the initialization routines for the DLL.
//

#include "stdafx.h"
#include "SampleBrepCommandsApp.h"

//
//	Note!
//
//    A Rhino plug-in is an MFC DLL.
//
//		If this DLL is dynamically linked against the MFC
//		DLLs, any functions exported from this DLL which
//		call into MFC must have the AFX_MANAGE_STATE macro
//		added at the very beginning of the function.
//
//		For example:
//
//		extern "C" BOOL PASCAL EXPORT ExportedFunction()
//		{
//			AFX_MANAGE_STATE(AfxGetStaticModuleState());
//			// normal function body here
//		}
//
//		It is very important that this macro appear in each
//		function, prior to any calls into MFC.  This means that
//		it must appear as the first statement within the 
//		function, even before any object variable declarations
//		as their constructors may generate calls into the MFC
//		DLL.
//
//		Please see MFC Technical Notes 33 and 58 for additional
//		details.
//


// CSampleBrepCommandsApp

BEGIN_MESSAGE_MAP(CSampleBrepCommandsApp, CWinApp)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSampleBrepCommandsApp construction

CSampleBrepCommandsApp::CSampleBrepCommandsApp()
{
	// TODO: add construction code here,
	// Place all significant initialization in InitInstance
}

// The one and only CSampleBrepCommandsApp object
CSampleBrepCommandsApp theApp;

/////////////////////////////////////////////////////////////////////////////
// CSampleBrepCommandsApp initialization

BOOL CSampleBrepCommandsApp::InitInstance()
{
  // CRITICAL: DO NOT CALL RHINO SDK FUNCTIONS HERE!
  //   Only standard MFC DLL instance initialization belongs here. 
  //   All other significant initialization should take place in
  //   CSampleBrepCommandsPlugIn::OnLoadPlugIn().

	CWinApp::InitInstance();

	return TRUE;
}

int CSampleBrepCommandsApp::ExitInstance()
{
  // CRITICAL: DO NOT CALL RHINO SDK FUNCTIONS HERE!
  //   Only standard MFC DLL instance clean up belongs here. 
  //   All other significant cleanup should take place in either
  //   CSampleBrepCommandsPlugIn::OnSaveAllSettings() or CSampleBrepCommandsPlugIn::OnUnloadPlugIn().
  return CWinApp::ExitInstance();
}
