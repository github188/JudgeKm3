#pragma once

#ifndef _BASE_DEFINE_H_
#define _BASE_DEFINE_H_

//GNSS �ź�
typedef struct
{
	float fForwardDistance;           //ǰ������
	float fBackDistance;           //���˾���
	float fGNSSSpeed;             //GNSS�ٶ�
	float fGNSSMileage;             //GNSS���
	int  nSatelliteState; //����״̬
	char szBodyRegion[200];		//��������
	char szWheelRegion[200];		//��������
	char szBodyAngle[200];		//����Ƕ�
	char szMapEncryption[20];	//��ͼ����
	char szFrontRegion[100]; //��ǰ����
	char szMiddleRegion[100]; //��������
	char szBehindRegion[100]; //��������
	char szLeftFrontRegion[100]; //��ǰ����
	char szRightFrontRegion[100]; //��ǰ����
	char szLeftBehindRegion[100]; //�������
	char szRightBehindRegion[100]; //�Һ�����
	byte antennaStateFront;		//ǰ����״̬
	byte antennaStateBehind;	//������״̬
	int nDiffDelay;		//����ӳ�
	float fFrontDirection;		//��ͷָ��

}SignalGNSS, *pSignalGNSS;

//�����ź�
typedef struct
{
	int nSignalSafetyBelt;    //��ȫ���ź�
	int nSignalHandBrake;     //��ɲ�ź�
	int nSignalFootBrake;     //��ɲ�ź�
	int nSignalViceBrake;     //��ɲ�ź�
	int nSignalCloseDoor;     //�����ź�
	int nSignalClutch;     //����ź�
	int nSignalTurnLeftLight;    //��ת��
	int nSignalTurnRightLight;    //��ת��
	int nSignalStalled;     //Ϩ��
	int nSignalIgnition;     //���
	int nSignalSpeaker;     //����
	int nSignalLowBeamLight;    //�����
	int nSignalHighBeamLight;    //Զ���
	int nSignalDangerWarnningLight;    //Σ�ձ��������
	int nSignalFogLight;     //���
	int nSignalOutlineLight;    //ʾ����
	int nSignalStall;     //��λ
	int nSignalReverseGear;     //����    
	int nSignalWiper;     //���
	float fSignalAcceleration;    //���ٶ�
	float fCarSpeed;     //ԭ���ٶ�
	float fEngineSpeed;   //������ת��
	float fMileage;   //ԭ�����
	int fSignalSeat;     //�����ź�(��Ŀ��ר��)
	int fSignalRearviewMirror;     //���Ӿ��ź�(��Ŀ��ר��)
	int fSignalExteriorMirror;     //����Ӿ��ź�(��Ŀ��ר��)

}SignalCar, *pSignalCar;

//�ⲿ�ź�
typedef struct
{
	int nSignalRedLight;	//��ͨ�Ƶĺ���ź�
	int nSignalGreenLight;	//��ͨ�Ƶ��̵��ź�
	int nSignalNetwork;	//�����ź�
	int nSignalVideoServer;	//������Ƶ�������ź�
}SignalExternal, *pSignalExternal;


#endif
