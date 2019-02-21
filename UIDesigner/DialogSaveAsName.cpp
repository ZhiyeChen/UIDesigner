// DialogSaveAsName.cpp : 实现文件
//

#include "stdafx.h"
#include "UIDesigner.h"
#include "DialogSaveAsName.h"
#include "UIUtil.h"

// CDialogSaveAsName 对话框

IMPLEMENT_DYNAMIC(CDialogSaveAsName, CDialog)

CDialogSaveAsName::CDialogSaveAsName(CWnd* pParent /*=NULL*/)
	: CDialog(CDialogSaveAsName::IDD, pParent)
	, m_strName(StringConvertor::Utf8ToWide("未命名1"))
{

}

CDialogSaveAsName::~CDialogSaveAsName()
{
}

void CDialogSaveAsName::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT_TEMPLATE_NAME, m_strName);
}


BEGIN_MESSAGE_MAP(CDialogSaveAsName, CDialog)
END_MESSAGE_MAP()


// CDialogSaveAsName 消息处理程序
