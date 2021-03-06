
// DlgProxy.cpp : 实现文件
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
	
	// 为使应用程序在自动化对象处于活动状态时一直保持 
	//	运行，构造函数调用 AfxOleLockApp。
	AfxOleLockApp();

	// 通过应用程序的主窗口指针
	//  来访问对话框。设置代理的内部指针
	//  指向对话框，并设置对话框的后向指针指向
	//  该代理。
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
	// 为了在用 OLE 自动化创建所有对象后终止应用程序，
	// 	析构函数调用 AfxOleUnlockApp。
	//  除了做其他事情外，这还将销毁主对话框
	if (m_pDialog != NULL)
		m_pDialog->m_pAutoProxy = NULL;
	AfxOleUnlockApp();
}

void Cdemo06DlgAutoProxy::OnFinalRelease()
{
	// 释放了对自动化对象的最后一个引用后，将调用
	// OnFinalRelease。基类将自动
	// 删除该对象。在调用该基类之前，请添加您的
	// 对象所需的附加清理代码。

	CCmdTarget::OnFinalRelease();
}

BEGIN_MESSAGE_MAP(Cdemo06DlgAutoProxy, CCmdTarget)
END_MESSAGE_MAP()

BEGIN_DISPATCH_MAP(Cdemo06DlgAutoProxy, CCmdTarget)
END_DISPATCH_MAP()

// 注意: 我们添加了对 IID_Idemo06 的支持
//  以支持来自 VBA 的类型安全绑定。此 IID 必须同附加到 .IDL 文件中的
//  调度接口的 GUID 匹配。

// {8F3BF97D-D027-4C41-B65D-4C8E0084ABBB}
static const IID IID_Idemo06 =
{ 0x8F3BF97D, 0xD027, 0x4C41, { 0xB6, 0x5D, 0x4C, 0x8E, 0x0, 0x84, 0xAB, 0xBB } };

BEGIN_INTERFACE_MAP(Cdemo06DlgAutoProxy, CCmdTarget)
	INTERFACE_PART(Cdemo06DlgAutoProxy, IID_Idemo06, Dispatch)
END_INTERFACE_MAP()

// IMPLEMENT_OLECREATE2 宏在此项目的 StdAfx.h 中定义
// {36C486CC-5470-45F6-86A9-9FD54F4A0384}
IMPLEMENT_OLECREATE2(Cdemo06DlgAutoProxy, "demo06.Application", 0x36c486cc, 0x5470, 0x45f6, 0x86, 0xa9, 0x9f, 0xd5, 0x4f, 0x4a, 0x3, 0x84)


// Cdemo06DlgAutoProxy 消息处理程序
