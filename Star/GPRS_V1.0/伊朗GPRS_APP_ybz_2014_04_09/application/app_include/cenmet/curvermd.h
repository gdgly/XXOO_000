/**
* curveday.h -- 抄表日冻结类历史数据结构
* 
* 作者: zhuzhiqiang
* 创建时间: 2009-5-12
* 最后修改时间: 2009-5-12
*/

#ifndef _CURVE_RMD_H
#define _CURVE_RMD_H

#include "app_include/cenmet/mdbconf.h"
	
typedef struct {
	unsigned char rdtime[5];	 //抄表时间, 分时日月年
	unsigned char fenum;

	//F9
	unsigned char enepa[5*MAXNUM_METPRD];  //正向有功电能, 0~4, 0.0001kWh
	unsigned char enepi[4*MAXNUM_METPRD];  //正向无功电能, 0~4, 0.01kvarh
	unsigned char enepi1[4*MAXNUM_METPRD];	//正向无功一象限电能, 0~4, 0.01kvarh
	unsigned char enepi4[4*MAXNUM_METPRD];	//正向无功四象限电能, 0~4, 0.01kvarh
	//F10
	unsigned char enena[5*MAXNUM_METPRD];  //反向有功电能, 0~4, 0.0001kWh
	unsigned char eneni[4*MAXNUM_METPRD];  //反向无功电能, 0~4, 0.01kvarh
	unsigned char eneni2[4*MAXNUM_METPRD];	//反向无功二象限电能, 0~4, 0.01kvarh
	unsigned char eneni3[4*MAXNUM_METPRD];	//反向无功三象限电能, 0~4, 0.01kvarh
	//F11
	unsigned char dmnpa[3*MAXNUM_METPRD];  //当月正向有功最大需量,0~4,0.0001kW
	unsigned char dmntpa[4*MAXNUM_METPRD];	//当月正向有功最大需量发生时间,0~4,分时日月
	unsigned char dmnpi[3*MAXNUM_METPRD];  //当月正向无功最大需量,0~4,0.0001kvar
	unsigned char dmntpi[4*MAXNUM_METPRD];	//当月正向无功最大需量发生时间,0~4,分时日月
	//F12
	unsigned char dmnna[3*MAXNUM_METPRD];  //当月反向有功最大需量,0~4,0.0001kW
	unsigned char dmntna[4*MAXNUM_METPRD];	//当月反向有功最大需量发生时间,0~4,分时日月
	unsigned char dmnni[3*MAXNUM_METPRD];  //当月反向无功最大需量,0~4,0.0001kvar
	unsigned char dmntni[4*MAXNUM_METPRD];	//当月反向无功最大需量发生时间,0~4,分时日月
} db_metrmd_t;

typedef struct{
	//F211 抄表日冻结 购用电信息, 自定义
	unsigned char readtimebuy[5];  //分时日月年
	unsigned char buyene_cnt[2];  //购电次数 
	unsigned char money_res[5];  //剩余金额 
	unsigned char money_buyed[5];  //累计购电金额
	unsigned char ene_res[4];  //剩余电量
	unsigned char ene_overdraft[4];  //透支电量
	unsigned char ene_buyed[4];  //累计购电量 
	unsigned char ene_ticklmt[4];  //赊欠门限电量
	unsigned char ene_alarm[4];  //报警电量
	unsigned char ene_err_buy[4];  //故障电量	
}db_cpday_prepaidinfo_t;
	
#endif /*_CURVE_RMD_H*/
	
