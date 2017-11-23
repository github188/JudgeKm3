#pragma once

#ifndef _BASE_DEFINE_H_
#define _BASE_DEFINE_H_

//GNSS 信号
typedef struct
{
	float fForwardDistance;           //前进距离
	float fBackDistance;           //后退距离
	float fGNSSSpeed;             //GNSS速度
	float fGNSSMileage;             //GNSS里程
	int  nSatelliteState; //卫星状态
	char szBodyRegion[200];		//车体区域
	char szWheelRegion[200];		//车轮区域
	char szBodyAngle[200];		//车身角度
	char szMapEncryption[20];	//地图加密
	char szFrontRegion[100]; //车前区域
	char szMiddleRegion[100]; //车中区域
	char szBehindRegion[100]; //车后区域
	char szLeftFrontRegion[100]; //左前区域
	char szRightFrontRegion[100]; //右前区域
	char szLeftBehindRegion[100]; //左后区域
	char szRightBehindRegion[100]; //右后区域
	byte antennaStateFront;		//前天线状态
	byte antennaStateBehind;	//后天线状态
	int nDiffDelay;		//差分延迟
	float fFrontDirection;		//车头指向

}SignalGNSS, *pSignalGNSS;

//车载信号
typedef struct
{
	int nSignalSafetyBelt;    //安全带信号
	int nSignalHandBrake;     //手刹信号
	int nSignalFootBrake;     //脚刹信号
	int nSignalViceBrake;     //副刹信号
	int nSignalCloseDoor;     //关门信号
	int nSignalClutch;     //离合信号
	int nSignalTurnLeftLight;    //左转向
	int nSignalTurnRightLight;    //右转向
	int nSignalStalled;     //熄火
	int nSignalIgnition;     //点火
	int nSignalSpeaker;     //喇叭
	int nSignalLowBeamLight;    //近光灯
	int nSignalHighBeamLight;    //远光灯
	int nSignalDangerWarnningLight;    //危险报警闪光灯
	int nSignalFogLight;     //雾灯
	int nSignalOutlineLight;    //示廓灯
	int nSignalStall;     //档位
	int nSignalReverseGear;     //倒档    
	int nSignalWiper;     //雨刮
	float fSignalAcceleration;    //加速度
	float fCarSpeed;     //原车速度
	float fEngineSpeed;   //发动机转速
	float fMileage;   //原车里程
	int fSignalSeat;     //座椅信号(科目三专用)
	int fSignalRearviewMirror;     //后视镜信号(科目三专用)
	int fSignalExteriorMirror;     //外后视镜信号(科目三专用)

}SignalCar, *pSignalCar;

//外部信号
typedef struct
{
	int nSignalRedLight;	//交通灯的红灯信号
	int nSignalGreenLight;	//交通灯的绿灯信号
	int nSignalNetwork;	//网络信号
	int nSignalVideoServer;	//车载视频服务器信号
}SignalExternal, *pSignalExternal;


#endif
