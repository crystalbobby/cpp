
// demo06Dlg.h : ͷ�ļ�
//

#pragma once

class Cdemo06DlgAutoProxy;


// Cdemo06Dlg �Ի���
class Cdemo06Dlg : public CDialogEx
{
	DECLARE_DYNAMIC(Cdemo06Dlg);
	friend class Cdemo06DlgAutoProxy;

// ����
public:
	Cdemo06Dlg(CWnd* pParent = NULL);	// ��׼���캯��
	virtual ~Cdemo06Dlg();

// �Ի�������
	enum { IDD = IDD_DEMO06_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	Cdemo06DlgAutoProxy* m_pAutoProxy;
	HICON m_hIcon;

	BOOL CanExit();

	// ���ɵ���Ϣӳ�亯��
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
