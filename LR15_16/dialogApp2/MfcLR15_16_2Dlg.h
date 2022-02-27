
// MfcLR15_16_2Dlg.h: файл заголовка
//

#pragma once


// Диалоговое окно CMfcLR15162Dlg
class CMfcLR15162Dlg : public CDialogEx
{
// Создание
public:
	CMfcLR15162Dlg(CWnd* pParent = nullptr);	// стандартный конструктор

// Данные диалогового окна
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCLR15_16_2_DIALOG };
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
	CString rVal;
	CString aVal;
	CString bVal;
	CString resVal;
};
