
// MFCApplication2Dlg.cpp: файл реализации
//

#include "pch.h"
#include "framework.h"
#include "MFCApplication2.h"
#include "MFCApplication2Dlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Диалоговое окно CMFCApplication2Dlg



CMFCApplication2Dlg::CMFCApplication2Dlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_MFCAPPLICATION2_DIALOG, pParent)
	, aVal(_T(""))
	, bVal(_T(""))
	, cVal(_T(""))
	, resVal(_T(""))
	, dVal(_T(""))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMFCApplication2Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, aVal);
	DDX_Text(pDX, IDC_EDIT2, bVal);
	DDX_Text(pDX, IDC_EDIT3, cVal);
	DDX_Text(pDX, IDC_STATIC2, resVal);
	DDX_Text(pDX, IDC_EDIT4, dVal);
}

BEGIN_MESSAGE_MAP(CMFCApplication2Dlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &CMFCApplication2Dlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CMFCApplication2Dlg::OnBnClickedButton2)
END_MESSAGE_MAP()


// Обработчики сообщений CMFCApplication2Dlg

BOOL CMFCApplication2Dlg::OnInitDialog()
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

void CMFCApplication2Dlg::OnPaint()
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
HCURSOR CMFCApplication2Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CMFCApplication2Dlg::OnBnClickedButton1()
{
	UpdateData(true);
	countTour();
}


void CMFCApplication2Dlg::OnBnClickedButton2()
{
	UpdateData(true);
	aVal = L"16.5";
	bVal = L"8.4";
	cVal = L"240.0";
	countTour();
	
}
void CMFCApplication2Dlg::countTour() {
	CString a = aVal;
	CString b = bVal;
	CString c = cVal;

	if (dVal == L"" || _wtoi(dVal) <= 0.0) {
		dVal = L"1";
	}
	CString d = dVal;

	double fuelUsage = (_wtoi(b) * (_wtoi(c)* _wtoi(d))) / 100.0;
	double summ = fuelUsage * _wtoi(a);
	CString result1;
	CString result2;
	result1.Format(L"%.2f", fuelUsage);
	result2.Format(L"%.2f", summ);
	resVal = L"Итого расход топлива: " + result1 + L"руб.\n";
	resVal += L"Стоимость поездки: " + result2 + L"руб.";
	UpdateData(false);
}