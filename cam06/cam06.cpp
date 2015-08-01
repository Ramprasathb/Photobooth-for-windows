
#include "stdafx.h"
#include "cam06.h"
#include "cam06Dlg.h"


// Ccam06App

BEGIN_MESSAGE_MAP(Ccam06App, CWinApp)
	ON_COMMAND(ID_HELP, &CWinApp::OnHelp)
END_MESSAGE_MAP()


Ccam06App::Ccam06App()
{
}


Ccam06App theApp;

BOOL Ccam06App::InitInstance()
{
	CWinApp::InitInstance();
	
	Ccam06Dlg dlg;
	m_pMainWnd = &dlg;
	INT_PTR nResponse = dlg.DoModal();
	if (nResponse == IDOK)
	{
	}
	else if (nResponse == IDCANCEL)
	{
	}
	return FALSE;
}
