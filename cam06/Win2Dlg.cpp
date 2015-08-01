#include "stdafx.h"
#include "cam06.h"
#include "Win2Dlg.h"

#define ImageX 600  
#define ImageY 480


extern unsigned char arrImage1 [4 * ImageX * ImageY];	
extern unsigned char arrImage2 [4 * ImageX * ImageY];
extern unsigned char arrImage3 [4 * ImageX * ImageY];

extern BITMAPINFO	bmpDestination;
int iFlag;


int rectFlag;
CRect RectWin2;

// CWin2Dlg

IMPLEMENT_DYNAMIC(CWin2Dlg, CDialog)

CWin2Dlg::CWin2Dlg(CWnd* pParent /*=NULL*/)
	: CDialog(CWin2Dlg::IDD, pParent)
{
}

CWin2Dlg::~CWin2Dlg()
{
}

void CWin2Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CWin2Dlg, CDialog)
	ON_WM_PAINT()
	ON_BN_CLICKED(IDC_BUT_COL_GRAY, &CWin2Dlg::OnBnClickedButColGray)
	ON_BN_CLICKED(IDC_BUTTON2, &CWin2Dlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &CWin2Dlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &CWin2Dlg::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &CWin2Dlg::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &CWin2Dlg::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON7, &CWin2Dlg::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON8, &CWin2Dlg::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON9, &CWin2Dlg::OnBnClickedButton9)
	ON_BN_CLICKED(IDC_BUTTON10, &CWin2Dlg::OnBnClickedButton10)
END_MESSAGE_MAP()




void CWin2Dlg::OnPaint()
{
	CPaintDC dc(this); // device context for painting

	if(rectFlag==0)
	{
	GetClientRect(&RectWin2);
	rectFlag=1;
	}

	int imgx = bmpDestination.bmiHeader.biWidth;
    int imgy = bmpDestination.bmiHeader.biHeight;

	// copy memory arrImage2 to window 
	//SetDIBitsToDevice((HDC) dc , 0, 0, imgx, imgy, 0, 0, 0, imgy, arrImage2, &bmpDestination, DIB_RGB_COLORS);
	if(iFlag!=7)
	SetDIBitsToDevice((HDC) dc , 0, 0, imgx, imgy, 0, 0, 0, imgy, arrImage2, &bmpDestination, DIB_RGB_COLORS);
	else
	SetDIBitsToDevice((HDC) dc , 0, 0, imgx, imgy, 0, 0, 0, imgy, arrImage3, &bmpDestination, DIB_RGB_COLORS);

	CImageList c;
}


void CWin2Dlg::OnBnClickedButColGray()
{
 if(iFlag!=1) iFlag=1; else iFlag=0;
}

void CWin2Dlg::OnBnClickedButton2()
{
	// TODO: Add your control notification handler code here
	if(iFlag!=2)iFlag=2;else iFlag=0;
}



void CWin2Dlg::OnBnClickedButton3()
{
	// TODO: Add your control notification handler code here
	if(iFlag!=3)iFlag=3;else iFlag=0;
}

void CWin2Dlg::OnBnClickedButton4()
{
	// TODO: Add your control notification handler code here
	if(iFlag!=4)iFlag=4;else iFlag=0;
}

void CWin2Dlg::OnBnClickedButton5()
{
	// TODO: Add your control notification handler code here
	if(iFlag!=5)iFlag=5;else iFlag=0;
}

void CWin2Dlg::OnBnClickedButton6()
{
	// TODO: Add your control notification handler code here
	if(iFlag!=6)iFlag=6;else iFlag=0;
}

void CWin2Dlg::OnBnClickedButton7()
{
	if(iFlag!=7)iFlag=7;else iFlag=0;// TODO: Add your control notification handler code here
}

void CWin2Dlg::OnBnClickedButton8()
{
	// TODO: Add your control notification handler code here
	if(iFlag!=8)iFlag=8;else iFlag=0;
}

void CWin2Dlg::OnBnClickedButton9()
{
	// TODO: Add your control notification handler code here
	if(iFlag!=9)iFlag=9;else iFlag=0;
}

void CWin2Dlg::OnBnClickedButton10()
{
	// TODO: Add your control notification handler code here
	if(iFlag!=10)iFlag=10;else iFlag=0;
}
