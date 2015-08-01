// cam06Dlg.h : 

#pragma once


class Ccam06Dlg : public CDialog
{

public:
	Ccam06Dlg(CWnd* pParent = NULL);	


	enum { IDD = IDD_cam06_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	

// Implementation
protected:
HWND hMyWindow;

protected:
	HICON m_hIcon;

	void RotateImage(void);


	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};
