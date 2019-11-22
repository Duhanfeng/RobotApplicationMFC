// VisionCalibrationDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "RobotApplicationMFC.h"
#include "VisionCalibrationDlg.h"
#include "afxdialogex.h"


// VisionCalibrationDlg �Ի���

IMPLEMENT_DYNAMIC(VisionCalibrationDlg, CDialogEx)

VisionCalibrationDlg::VisionCalibrationDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG_CALIBRATION, pParent)
    , CalibrationMode(EnCalibrationMode::VP_Calib_Unknow)
{

}

VisionCalibrationDlg::~VisionCalibrationDlg()
{
}

void VisionCalibrationDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(VisionCalibrationDlg, CDialogEx)
    ON_BN_CLICKED(IDC_BUTTON_FIND_CIRCLES, &VisionCalibrationDlg::OnBnClickedButtonFindCircles)
    ON_BN_CLICKED(IDC_BUTTON_TEST_MODE, &VisionCalibrationDlg::OnBnClickedButtonTestMode)
    ON_BN_CLICKED(IDC_BUTTON_RETURN, &VisionCalibrationDlg::OnBnClickedButtonReturn)
END_MESSAGE_MAP()


// VisionCalibrationDlg ��Ϣ�������

//��Բ
void VisionCalibrationDlg::OnBnClickedButtonFindCircles()
{
    // TODO: �ڴ���ӿؼ�֪ͨ����������
    CalibrationMode = EnCalibrationMode::VP_Calib_FindCircles;
    CDialogEx::OnOK();
}

//����ģʽ
void VisionCalibrationDlg::OnBnClickedButtonTestMode()
{
    // TODO: �ڴ���ӿؼ�֪ͨ����������
    CalibrationMode = EnCalibrationMode::VP_Calib_Test;
    CDialogEx::OnOK();
}

//����
void VisionCalibrationDlg::OnBnClickedButtonReturn()
{
    // TODO: �ڴ���ӿؼ�֪ͨ����������
    CalibrationMode = EnCalibrationMode::VP_Calib_Quit;
    CDialogEx::OnOK();
}
