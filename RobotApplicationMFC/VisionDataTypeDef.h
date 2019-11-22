#pragma once

enum EnWorkModel
{
    VP_Model_Unknow,            //δ֪
    VP_Model_SelectConveyor,    //ѡ���ʹ�
    VP_Model_SelectVisionMode,  //ѡ���Ӿ�ģʽ
    VP_Model_SetCalibrationMode,//���ñ궨ģʽ
    VP_Model_SetDetectionMode,  //���ü��ģʽ

};


enum EnConveyorColor
{
    VP_Color_Unknow,
    VP_Color_White = '1',       //��ɫ
    VP_Color_Green = '2',       //��ɫ
    VP_Color_Quit = 'Q',        //�˳�

};


enum EnVisionMode
{
    VP_Vision_Unknow,
    VP_Vision_Calibration = '1',        //�궨ģʽ
    VP_Vision_PolygonsDetection = '2',  //����μ��
    VP_Vision_Back = 'R',               //����
    VP_Vision_Quit = 'Q'                //�˳�

};


enum EnCalibrationMode
{
    VP_Calib_Unknow,
    VP_Calib_FindCircles = 'S', //��Բ
    VP_Calib_Test = 'T',        //��ʾ����ͼ��
    VP_Calib_Calibration = 'C', //�궨
    VP_Calib_Quit = 'Q',        //�˳�

};


enum EnDetectionMode
{
    VP_Detection_Unknow,
    VP_Detection_Find = 'S',    //ʶ��
    VP_Detection_Test = 'T',    //��ʾ����ͼ��
    VP_Detection_Save = 'F',    //�������
    VP_Detection_Quit = 'Q',    //�˳�

};