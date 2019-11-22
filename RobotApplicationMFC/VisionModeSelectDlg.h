#pragma once
#include "VisionDataTypeDef.h"

// VisionModeSelectDlg �Ի���

class VisionModeSelectDlg : public CDialogEx
{
	DECLARE_DYNAMIC(VisionModeSelectDlg)

public:
	VisionModeSelectDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~VisionModeSelectDlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_VISIONMODEL };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
    afx_msg void OnBnClickedButtonCalibrationMode();
    afx_msg void OnBnClickedButtonDetectionMode();
    afx_msg void OnBnClickedButtonReturn();

    // ѡ��Ĵ��ʹ�
    EnVisionMode SelectedMode;
};
