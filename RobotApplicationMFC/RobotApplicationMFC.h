
// RobotApplicationMFC.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CRobotApplicationMFCApp: 
// �йش����ʵ�֣������ RobotApplicationMFC.cpp
//

class CRobotApplicationMFCApp : public CWinApp
{
public:
	CRobotApplicationMFCApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CRobotApplicationMFCApp theApp;