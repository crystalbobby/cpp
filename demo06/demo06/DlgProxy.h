
// DlgProxy.h: ͷ�ļ�
//

#pragma once

class Cdemo06Dlg;


// Cdemo06DlgAutoProxy ����Ŀ��

class Cdemo06DlgAutoProxy : public CCmdTarget
{
	DECLARE_DYNCREATE(Cdemo06DlgAutoProxy)

	Cdemo06DlgAutoProxy();           // ��̬������ʹ�õ��ܱ����Ĺ��캯��

// ����
public:
	Cdemo06Dlg* m_pDialog;

// ����
public:

// ��д
	public:
	virtual void OnFinalRelease();

// ʵ��
protected:
	virtual ~Cdemo06DlgAutoProxy();

	// ���ɵ���Ϣӳ�亯��

	DECLARE_MESSAGE_MAP()
	DECLARE_OLECREATE(Cdemo06DlgAutoProxy)

	// ���ɵ� OLE ����ӳ�亯��

	DECLARE_DISPATCH_MAP()
	DECLARE_INTERFACE_MAP()
};

