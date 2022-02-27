
// MFCApplication2Dlg.h: файл заголовка
//

#pragma once


// Диалоговое окно CMFCApplication2Dlg
class CMFCApplication2Dlg : public CDialogEx
{
// Создание
public:
	CMFCApplication2Dlg(CWnd* pParent = nullptr);	// стандартный конструктор

// Данные диалогового окна
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCAPPLICATION2_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// поддержка DDX/DDV


// Реализация
protected:
	HICON m_hIcon;

	// Созданные функции схемы сообщений
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	CString aVal;
	CString bVal;
	CString cVal;
	CString resVal;
	afx_msg void OnBnClickedButton2();
	afx_msg void countTour();
	CString dVal;
};
