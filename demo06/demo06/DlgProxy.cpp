
// DlgProxy.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "demo06.h"
#include "DlgProxy.h"
#include "demo06Dlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cdemo06DlgAutoProxy

IMPLEMENT_DYNCREATE(Cdemo06DlgAutoProxy, CCmdTarget)

Cdemo06DlgAutoProxy::Cdemo06DlgAutoProxy()
{
	EnableAutomation();
	
	// ΪʹӦ�ó������Զ��������ڻ״̬ʱһֱ���� 
	//	���У����캯������ AfxOleLockApp��
	AfxOleLockApp();

	// ͨ��Ӧ�ó����������ָ��
	//  �����ʶԻ������ô�����ڲ�ָ��
	//  ָ��Ի��򣬲����öԻ���ĺ���ָ��ָ��
	//  �ô���
	ASSERT_VALID(AfxGetApp()->m_pMainWnd);
	if (AfxGetApp()->m_pMainWnd)
	{
		ASSERT_KINDOF(Cdemo06Dlg, AfxGetApp()->m_pMainWnd);
		if (AfxGetApp()->m_pMainWnd->IsKindOf(RUNTIME_CLASS(Cdemo06Dlg)))
		{
			m_pDialog = reinterpret_cast<Cdemo06Dlg*>(AfxGetApp()->m_pMainWnd);
			m_pDialog->m_pAutoProxy = this;
		}
	}
}

Cdemo06DlgAutoProxy::~Cdemo06DlgAutoProxy()
{
	// Ϊ������ OLE �Զ����������ж������ֹӦ�ó���
	// 	������������ AfxOleUnlockApp��
	//  ���������������⣬�⻹���������Ի���
	if (m_pDialog != NULL)
		m_pDialog->m_pAutoProxy = NULL;
	AfxOleUnlockApp();
}

void Cdemo06DlgAutoProxy::OnFinalRelease()
{
	// �ͷ��˶��Զ�����������һ�����ú󣬽�����
	// OnFinalRelease�����ཫ�Զ�
	// ɾ���ö����ڵ��øû���֮ǰ�����������
	// ��������ĸ���������롣

	CCmdTarget::OnFinalRelease();
}

BEGIN_MESSAGE_MAP(Cdemo06DlgAutoProxy, CCmdTarget)
END_MESSAGE_MAP()

BEGIN_DISPATCH_MAP(Cdemo06DlgAutoProxy, CCmdTarget)
END_DISPATCH_MAP()

// ע��: ��������˶� IID_Idemo06 ��֧��
//  ��֧������ VBA �����Ͱ�ȫ�󶨡��� IID ����ͬ���ӵ� .IDL �ļ��е�
//  ���Ƚӿڵ� GUID ƥ�䡣

// {8F3BF97D-D027-4C41-B65D-4C8E0084ABBB}
static const IID IID_Idemo06 =
{ 0x8F3BF97D, 0xD027, 0x4C41, { 0xB6, 0x5D, 0x4C, 0x8E, 0x0, 0x84, 0xAB, 0xBB } };

BEGIN_INTERFACE_MAP(Cdemo06DlgAutoProxy, CCmdTarget)
	INTERFACE_PART(Cdemo06DlgAutoProxy, IID_Idemo06, Dispatch)
END_INTERFACE_MAP()

// IMPLEMENT_OLECREATE2 ���ڴ���Ŀ�� StdAfx.h �ж���
// {36C486CC-5470-45F6-86A9-9FD54F4A0384}
IMPLEMENT_OLECREATE2(Cdemo06DlgAutoProxy, "demo06.Application", 0x36c486cc, 0x5470, 0x45f6, 0x86, 0xa9, 0x9f, 0xd5, 0x4f, 0x4a, 0x3, 0x84)


// Cdemo06DlgAutoProxy ��Ϣ�������
