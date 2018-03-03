
// demo06Dlg.h : 头文件
//

#pragma once

class Cdemo06DlgAutoProxy;


// Cdemo06Dlg 对话框
class Cdemo06Dlg : public CDialogEx
{
	DECLARE_DYNAMIC(Cdemo06Dlg);
	friend class Cdemo06DlgAutoProxy;

// 构造
public:
	Cdemo06Dlg(CWnd* pParent = NULL);	// 标准构造函数
	virtual ~Cdemo06Dlg();

// 对话框数据
	enum { IDD = IDD_DEMO06_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	Cdemo06DlgAutoProxy* m_pAutoProxy;
	HICON m_hIcon;

	BOOL CanExit();

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnClose();
	virtual void OnOK();
	virtual void OnCancel();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
};
