#pragma once
#include "VisionDataTypeDef.h"

// VisionCalibrationDlg �Ի���

class VisionCalibrationDlg : public CDialogEx
{
	DECLARE_DYNAMIC(VisionCalibrationDlg)

public:
	VisionCalibrationDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~VisionCalibrationDlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_CALIBRATION };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
    afx_msg void OnBnClickedButtonFindCircles();
    afx_msg void OnBnClickedButtonTestMode();
    afx_msg void OnBnClickedButtonReturn();

    EnCalibrationMode CalibrationMode;
};
