#pragma once


// VisionControlDlg �Ի���

class VisionControlDlg : public CDialogEx
{
	DECLARE_DYNAMIC(VisionControlDlg)

public:
	VisionControlDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~VisionControlDlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_VISIONCONTROL };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
