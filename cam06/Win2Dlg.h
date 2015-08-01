#pragma once

class CWin2Dlg : public CDialog
{
	DECLARE_DYNAMIC(CWin2Dlg)

public:
	CWin2Dlg(CWnd* pParent = NULL);   
	virtual ~CWin2Dlg();

	enum { IDD = IDD_WIN2 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV-

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();
	afx_msg void OnBnClickedButColGray();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedButton7();
	afx_msg void OnBnClickedButton8();
	afx_msg void OnBnClickedButton9();
	afx_msg void OnBnClickedButton10();
};
