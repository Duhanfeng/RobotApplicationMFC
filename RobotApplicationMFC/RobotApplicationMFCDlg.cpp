
// RobotApplicationMFCDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "RobotApplicationMFC.h"
#include "RobotApplicationMFCDlg.h"
#include "afxdialogex.h"
#include "VisionControlDlg.h"
#include "VisionConveyorSelectDlg.h"
#include "VisionModeSelectDlg.h"
#include "VisionCalibrationDlg.h"
#include "VisionDetectionDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CRobotApplicationMFCDlg 对话框



CRobotApplicationMFCDlg::CRobotApplicationMFCDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_ROBOTAPPLICATIONMFC_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CRobotApplicationMFCDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CRobotApplicationMFCDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
    ON_BN_CLICKED(IDC_BUTTON_VISION_SOCKET_CONNECT, &CRobotApplicationMFCDlg::OnBnClickedButtonVisionSocketConnect)
    ON_BN_CLICKED(IDOK, &CRobotApplicationMFCDlg::OnBnClickedOk)
END_MESSAGE_MAP()


// CRobotApplicationMFCDlg 消息处理程序

BOOL CRobotApplicationMFCDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	ShowWindow(SW_NORMAL);

	// TODO: 在此添加额外的初始化代码

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void CRobotApplicationMFCDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CRobotApplicationMFCDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CRobotApplicationMFCDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CRobotApplicationMFCDlg::OnBnClickedButtonVisionSocketConnect()
{
    // TODO: 在此添加控件通知处理程序代码
    
    //创建对话框实例并弹出对话框
    EnWorkModel workModel = EnWorkModel::VP_Model_SelectConveyor;

    VisionConveyorSelectDlg visionConveyorSelectDlg;
    VisionModeSelectDlg visionModeSelectDlg;
    VisionCalibrationDlg visionCalibrationDlg;
    VisionDetectionDlg visionDetectionDlg;

    EnConveyorColor conveyor = EnConveyorColor::VP_Color_Unknow;
    EnVisionMode mode = EnVisionMode::VP_Vision_Unknow;
    EnCalibrationMode calibration = EnCalibrationMode::VP_Calib_Unknow;
    EnDetectionMode detection = EnDetectionMode::VP_Detection_Unknow;

    do
    {
        switch (workModel)
        {
        case VP_Model_Unknow:
            return;
        case VP_Model_SelectConveyor:
            visionConveyorSelectDlg.SelectedConveyor = EnConveyorColor::VP_Color_Unknow;
            visionConveyorSelectDlg.DoModal();
            conveyor = visionConveyorSelectDlg.SelectedConveyor;

            switch (conveyor)
            {
            case VP_Color_White:
                workModel = EnWorkModel::VP_Model_SelectVisionMode;
                break;
            case VP_Color_Green:
                workModel = EnWorkModel::VP_Model_SelectVisionMode;
                break;
            default:
                return;
            }

            break;
        case VP_Model_SelectVisionMode:
            visionModeSelectDlg.SelectedMode = EnVisionMode::VP_Vision_Unknow;
            visionModeSelectDlg.DoModal();
            mode = visionModeSelectDlg.SelectedMode;

            switch (mode)
            {
            case VP_Vision_Calibration:
                workModel = EnWorkModel::VP_Model_SetCalibrationMode;
                break;
            case VP_Vision_PolygonsDetection:
                workModel = EnWorkModel::VP_Model_SetDetectionMode;
                break;
            case VP_Vision_Back:
                workModel = EnWorkModel::VP_Model_SelectConveyor;
                break;
            default:
                return;
            }

            break;
        case VP_Model_SetCalibrationMode:
            visionCalibrationDlg.DoModal();
            workModel = EnWorkModel::VP_Model_SelectConveyor;
            //设置为传送带模式
            //.....
            return;
        case VP_Model_SetDetectionMode:
            visionDetectionDlg.DoModal();
            workModel = EnWorkModel::VP_Model_SelectConveyor;
            //设置为传送带模式
            //.....
            return;
        default:
            return;
        }

    } while (true);



}


void CRobotApplicationMFCDlg::OnBnClickedOk()
{
    // TODO: 在此添加控件通知处理程序代码
    CDialogEx::OnOK();
}
