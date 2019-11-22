#pragma once
#include "VisionDataTypeDef.h"

// VisionConveyorSelectDlg �Ի���

class VisionConveyorSelectDlg : public CDialogEx
{
	DECLARE_DYNAMIC(VisionConveyorSelectDlg)

public:
	VisionConveyorSelectDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~VisionConveyorSelectDlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_CONVEYOR };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
    afx_msg void OnBnClickedButtonWhiteConveyor();
    afx_msg void OnBnClickedButtonGreenConveyor();

    // ѡ��Ĵ��ʹ�
    EnConveyorColor SelectedConveyor;
    afx_msg void OnBnClickedButtonReturn();
};
