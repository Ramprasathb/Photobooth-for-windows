// cam06.h : Hauptheaderdatei f�r die PROJECT_NAME-Anwendung
//

#pragma once

#ifndef __AFXWIN_H__
	#error "\"stdafx.h\" vor dieser Datei f�r PCH einschlie�en"
#endif

#include "resource.h"		// Hauptsymbole


// Ccam06App:
// Siehe cam06.cpp f�r die Implementierung dieser Klasse
//

class Ccam06App : public CWinApp
{
public:
	Ccam06App();

// �berschreibungen
	public:
	virtual BOOL InitInstance();

// Implementierung

	DECLARE_MESSAGE_MAP()
};

extern Ccam06App theApp;