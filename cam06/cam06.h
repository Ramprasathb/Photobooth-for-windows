// cam06.h : Hauptheaderdatei für die PROJECT_NAME-Anwendung
//

#pragma once

#ifndef __AFXWIN_H__
	#error "\"stdafx.h\" vor dieser Datei für PCH einschließen"
#endif

#include "resource.h"		// Hauptsymbole


// Ccam06App:
// Siehe cam06.cpp für die Implementierung dieser Klasse
//

class Ccam06App : public CWinApp
{
public:
	Ccam06App();

// Überschreibungen
	public:
	virtual BOOL InitInstance();

// Implementierung

	DECLARE_MESSAGE_MAP()
};

extern Ccam06App theApp;