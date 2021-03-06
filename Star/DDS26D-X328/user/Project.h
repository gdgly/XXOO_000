#ifndef __PROJECT_H
#define __PROJECT_H


#define _debug_				1


typedef signed long long int64;
typedef signed long  int32;
typedef signed short int16;
typedef signed char  int8;

typedef volatile signed long  vint32;
typedef volatile signed short vint16;
typedef volatile signed char  vint8;

typedef unsigned long long uint64;
typedef unsigned long  uint32;
typedef unsigned short uint16;
typedef unsigned char  uint8;

typedef volatile unsigned long  vuint32;
typedef volatile unsigned short vuint16;
typedef volatile unsigned char  vuint8;


typedef int32_t     s32;
typedef int16_t     s16;
typedef int8_t      s8;
typedef uint32_t    u32;
typedef uint16_t    u16;
typedef uint8_t     u8;


////typedef enum {FALSE = 0, TRUE = !FALSE}BOOL_B;
//typedef enum {false = 0, true = !false}bool;
//
//#ifndef FALSE
//#define FALSE 	false
//#endif
//#ifndef TRUE
//#define TRUE	true
//#endif
//
//#define BOOL_B 				bool

typedef union
{
	uint8 byte;
	struct
	{
		uint8 bit0 :1;
		uint8 bit1 :1;
		uint8 bit2 :1;
		uint8 bit3 :1;
		uint8 bit4 :1;
		uint8 bit5 :1;
		uint8 bit6 :1;
		uint8 bit7 :1;
	} bits;
} flag;

#endif

