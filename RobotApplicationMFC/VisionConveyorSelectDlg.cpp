// VisionConveyorSelectDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "RobotApplicationMFC.h"
#include "VisionConveyorSelectDlg.h"
#include "afxdialogex.h"


// VisionConveyorSelectDlg �Ի���

IMPLEMENT_DYNAMIC(VisionConveyorSelectDlg, CDialogEx)

VisionConveyorSelectDlg::VisionConveyorSelectDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG_CONVEYOR, pParent)
    , SelectedConveyor(EnConveyorColor::VP_Color_Unknow)
{

}

VisionConveyorSelectDlg::~VisionConveyorSelectDlg()
{
}

void VisionConveyorSelectDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(VisionConveyorSelectDlg, CDialogEx)
    ON_BN_CLICKED(IDC_BUTTON_WHITE_CONVEYOR, &VisionConveyorSelectDlg::OnBnClickedButtonWhiteConveyor)
    ON_BN_CLICKED(IDC_BUTTON_GREEN_CONVEYOR, &VisionConveyorSelectDlg::OnBnClickedButtonGreenConveyor)
    ON_BN_CLICKED(IDC_BUTTON_RETURN, &VisionConveyorSelectDlg::OnBnClickedButtonReturn)
END_MESSAGE_MAP()


// VisionConveyorSelectDlg ��Ϣ�������


void VisionConveyorSelectDlg::OnBnClickedButtonWhiteConveyor()
{
    // TODO: �ڴ���ӿؼ�֪ͨ����������
    SelectedConveyor = EnConveyorColor::VP_Color_White;
    CDialogEx::OnOK();

}


void VisionConveyorSelectDlg::OnBnClickedButtonGreenConveyor()
{
    // TODO: �ڴ���ӿؼ�֪ͨ����������
    SelectedConveyor = EnConveyorColor::VP_Color_Green;
    CDialogEx::OnOK();
}


void VisionConveyorSelectDlg::OnBnClickedButtonReturn()
{
    // TODO: �ڴ���ӿؼ�֪ͨ����������
    SelectedConveyor = EnConveyorColor::VP_Color_Unknow;
    CDialogEx::OnOK();
}
