// VisionModeSelectDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "RobotApplicationMFC.h"
#include "VisionModeSelectDlg.h"
#include "afxdialogex.h"


// VisionModeSelectDlg �Ի���

IMPLEMENT_DYNAMIC(VisionModeSelectDlg, CDialogEx)

VisionModeSelectDlg::VisionModeSelectDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG_VISIONMODEL, pParent)
    , SelectedMode(EnVisionMode::VP_Vision_Unknow)
{

}

VisionModeSelectDlg::~VisionModeSelectDlg()
{
}

void VisionModeSelectDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(VisionModeSelectDlg, CDialogEx)
    ON_BN_CLICKED(IDC_BUTTON_CALIBRATION_MODE, &VisionModeSelectDlg::OnBnClickedButtonCalibrationMode)
    ON_BN_CLICKED(IDC_BUTTON_DETECTION_MODE, &VisionModeSelectDlg::OnBnClickedButtonDetectionMode)
    ON_BN_CLICKED(IDC_BUTTON_RETURN, &VisionModeSelectDlg::OnBnClickedButtonReturn)
END_MESSAGE_MAP()


// VisionModeSelectDlg ��Ϣ�������


void VisionModeSelectDlg::OnBnClickedButtonCalibrationMode()
{
    // TODO: �ڴ���ӿؼ�֪ͨ����������
    SelectedMode = EnVisionMode::VP_Vision_Calibration;
    CDialogEx::OnOK();
}


void VisionModeSelectDlg::OnBnClickedButtonDetectionMode()
{
    // TODO: �ڴ���ӿؼ�֪ͨ����������
    SelectedMode = EnVisionMode::VP_Vision_PolygonsDetection;
    CDialogEx::OnOK();
}


void VisionModeSelectDlg::OnBnClickedButtonReturn()
{
    // TODO: �ڴ���ӿؼ�֪ͨ����������
    SelectedMode = EnVisionMode::VP_Vision_Back;
    CDialogEx::OnOK();
}
