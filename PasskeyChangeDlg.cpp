/// \file PasskeyChangeDlg.cpp
//-----------------------------------------------------------------------------

#include "stdafx.h"
#include "PasswordSafe.h"
#include "corelib/PwsPlatform.h"
#include "corelib/PWCharPool.h" // for CheckPassword()
#include "ThisMfcApp.h"
#if defined(POCKET_PC)
  #include "pocketpc/resource.h"
  #include "pocketpc/PocketPC.h"
#else
  #include "resource.h"
#endif

#include "PasskeyChangeDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif


//-----------------------------------------------------------------------------
CPasskeyChangeDlg::CPasskeyChangeDlg(CWnd* pParent)
   : super(CPasskeyChangeDlg::IDD, pParent)
{
   m_confirmnew = _T("");
   m_newpasskey = _T("");
   m_oldpasskey = _T("");
}


void
CPasskeyChangeDlg::DoDataExchange(CDataExchange* pDX)
{
   super::DoDataExchange(pDX);
   DDX_Text(pDX, IDC_CONFIRMNEW, (CString &)m_confirmnew);
   DDX_Text(pDX, IDC_NEWPASSKEY, (CString &)m_newpasskey);
   DDX_Text(pDX, IDC_OLDPASSKEY, (CString &)m_oldpasskey);
}


BEGIN_MESSAGE_MAP(CPasskeyChangeDlg, super)
   ON_BN_CLICKED(ID_HELP, OnHelp)
#if defined(POCKET_PC)
   ON_EN_SETFOCUS(IDC_OLDPASSKEY, OnPasskeySetfocus)
   ON_EN_SETFOCUS(IDC_NEWPASSKEY, OnPasskeySetfocus)
   ON_EN_SETFOCUS(IDC_CONFIRMNEW, OnPasskeySetfocus)
   ON_EN_KILLFOCUS(IDC_OLDPASSKEY, OnPasskeyKillfocus)
   ON_EN_KILLFOCUS(IDC_NEWPASSKEY, OnPasskeyKillfocus)
   ON_EN_KILLFOCUS(IDC_CONFIRMNEW, OnPasskeyKillfocus)
#endif
END_MESSAGE_MAP()


void
CPasskeyChangeDlg::OnOK() 
{
   CMyString errmess;

   UpdateData(TRUE);
   if (m_oldpasskey != global.m_passkey)
      AfxMessageBox(_T("The old safe combination is not correct"));
   else if (m_confirmnew != m_newpasskey)
      AfxMessageBox(_T("New safe combination and confirmation do not match"));
   else if (m_newpasskey.IsEmpty())
      AfxMessageBox(_T("The new safe combination cannot be blank."));
   else if (!CPasswordCharPool::CheckPassword(m_newpasskey, errmess)) {
     CString msg(_T("Weak password:\n"));
     msg += CString(errmess);
     msg += _T("\nAccept anyway?");
     if (AfxMessageBox(msg, MB_YESNO) == IDYES) {
       app.m_pMainWnd = NULL;
       super::OnOK();
     }
   } else {
     app.m_pMainWnd = NULL;
     super::OnOK();
   }
}


void
CPasskeyChangeDlg::OnCancel() 
{
   app.m_pMainWnd = NULL;
   super::OnCancel();
}


void
CPasskeyChangeDlg::OnHelp() 
{
#if defined(POCKET_PC)
	CreateProcess( _T("PegHelp.exe"), _T("pws_ce_help.html#changecombo"), NULL, NULL, FALSE, 0, NULL, NULL, NULL, NULL );
#else
   //WinHelp(0x20083, HELP_CONTEXT);
   ::HtmlHelp(NULL,
              "pwsafe.chm::/html/pws_combo_chg.htm",
              HH_DISPLAY_TOPIC, 0);
#endif
}


#if defined(POCKET_PC)
/************************************************************************/
/* Restore the state of word completion when the password field loses   */
/* focus.                                                               */
/************************************************************************/
void CPasskeyChangeDlg::OnPasskeyKillfocus()
{
	EnableWordCompletion( m_hWnd );
}


/************************************************************************/
/* When the password field is activated, pull up the SIP and disable    */
/* word completion.                                                     */
/************************************************************************/
void CPasskeyChangeDlg::OnPasskeySetfocus()
{
	DisableWordCompletion( m_hWnd );
}
#endif


//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
