#pragma once
#include "VisionDataTypeDef.h"

// VisionDetectionDlg �Ի���

class VisionDetectionDlg : public CDialogEx
{
	DECLARE_DYNAMIC(VisionDetectionDlg)

public:
	VisionDetectionDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~VisionDetectionDlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_DETECTION };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
