// MessageBox.h : main header file for the MESSAGEBOX application
//

#if !defined(AFX_MESSAGEBOX_H__423F99AD_3B44_4E68_9480_70A2AC2D9D5D__INCLUDED_)
#define AFX_MESSAGEBOX_H__423F99AD_3B44_4E68_9480_70A2AC2D9D5D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CMessageBoxApp:
// See MessageBox.cpp for the implementation of this class
//

class CMessageBoxApp : public CWinApp
{
public:
	CMessageBoxApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMessageBoxApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CMessageBoxApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MESSAGEBOX_H__423F99AD_3B44_4E68_9480_70A2AC2D9D5D__INCLUDED_)
