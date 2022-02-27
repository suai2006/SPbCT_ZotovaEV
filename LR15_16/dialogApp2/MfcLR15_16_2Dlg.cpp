
// MfcLR15_16_2Dlg.cpp: файл реализации
//

#include "pch.h"
#include "framework.h"
#include "MfcLR15_16_2.h"
#include "MfcLR15_16_2Dlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Диалоговое окно CMfcLR15162Dlg



CMfcLR15162Dlg::CMfcLR15162Dlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_MFCLR15_16_2_DIALOG, pParent)
	, rVal(_T(""))
	, aVal(_T(""))
	, bVal(_T(""))
	, resVal(_T(""))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMfcLR15162Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, rVal);
	DDX_Text(pDX, IDC_EDIT2, aVal);
	DDX_Text(pDX, IDC_EDIT3, bVal);
	DDX_Text(pDX, IDC_STATIC2, resVal);
}

BEGIN_MESSAGE_MAP(CMfcLR15162Dlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &CMfcLR15162Dlg::OnBnClickedButton1)
END_MESSAGE_MAP()


// Обработчики сообщений CMfcLR15162Dlg

BOOL CMfcLR15162Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Задает значок для этого диалогового окна.  Среда делает это автоматически,
	//  если главное окно приложения не является диалоговым
	SetIcon(m_hIcon, TRUE);			// Крупный значок
	SetIcon(m_hIcon, FALSE);		// Мелкий значок

	// TODO: добавьте дополнительную инициализацию

	return TRUE;  // возврат значения TRUE, если фокус не передан элементу управления
}

// При добавлении кнопки свертывания в диалоговое окно нужно воспользоваться приведенным ниже кодом,
//  чтобы нарисовать значок.  Для приложений MFC, использующих модель документов или представлений,
//  это автоматически выполняется рабочей областью.

void CMfcLR15162Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // контекст устройства для рисования

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Выравнивание значка по центру клиентского прямоугольника
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Нарисуйте значок
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// Система вызывает эту функцию для получения отображения курсора при перемещении
//  свернутого окна.
HCURSOR CMfcLR15162Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CMfcLR15162Dlg::OnBnClickedButton1()
{
	UpdateData(true);
	double r = pow(_wtoi(rVal), 3);
	double a = pow(_wtoi(aVal), 2);
	double b = _wtoi(bVal);
	CString result;
	double s = r + a + b;	
	result.Format(L"%.2f", s);
	resVal = L"S = " + result;
	UpdateData(false);
}
