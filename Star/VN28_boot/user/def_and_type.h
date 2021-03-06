#ifndef  DEF_AND_TYPE
#define  DEF_AND_TYPE


/*** General define  ***/
//#define     s8  	     signed  char
//#define     u8  	     unsigned char 
//#define 	u16 		 unsigned short int   
//#define     s16          signed short int
//#define 	u32 		 unsigned int   /* ARM int is 32 bit */
//#define 	s32 		 signed int
//#define     uL32         unsigned long 
//#define     L32          signed long

/*** 51 or 16 bit MCU  int is 16bit ***/
/*      
#define     s8  	     signed  char
#define     u8  	     unsigned char 
#define 	u16 		 unsigned int   
#define     s16          signed  int
#define 	u32 		 unsigned long    
#define 	s32 		 signed long
#define     uL32         unsigned long 
#define     L32          signed long
*/


#define     _NOP()  __no_operation(void)

#define     TRUE    1
#define     FALSE   0


/*** typedef ***/
typedef struct    /* ARM int 32 bit field */
{
    unsigned int bit0:  1;
    unsigned int bit1:  1;
    unsigned int bit2:  1;
    unsigned int bit3:  1;
    unsigned int bit4:  1;
    unsigned int bit5:  1;
    unsigned int bit6:  1;
    unsigned int bit7:  1;
    unsigned int bit8:  1;
    unsigned int bit9:  1;
    unsigned int bit10: 1;
    unsigned int bit11: 1;
    unsigned int bit12: 1;
    unsigned int bit13: 1;
    unsigned int bit14: 1;
    unsigned int bit15: 1;
    unsigned int bit16: 1;
    unsigned int bit17: 1;
    unsigned int bit18: 1;
    unsigned int bit19: 1;
    unsigned int bit20: 1;
    unsigned int bit21: 1;
    unsigned int bit22: 1;
    unsigned int bit23: 1;
    unsigned int bit24: 1;
    unsigned int bit25: 1;
    unsigned int bit26: 1;
    unsigned int bit27: 1;
    unsigned int bit28: 1;
    unsigned int bit29: 1;
    unsigned int bit30: 1;
    unsigned int bit31: 1; 
}BITS;

/* 51 or 16 bit MCU  int 16 bit field */
/*
typedef struct    
{
    unsigned int bit0:  1;
    unsigned int bit1:  1;
    unsigned int bit2:  1;
    unsigned int bit3:  1;
    unsigned int bit4:  1;
    unsigned int bit5:  1;
    unsigned int bit6:  1;
    unsigned int bit7:  1;
    unsigned int bit8:  1;
    unsigned int bit9:  1;
    unsigned int bit10: 1;
    unsigned int bit11: 1;
    unsigned int bit12: 1;
    unsigned int bit13: 1;
    unsigned int bit14: 1;
    unsigned int bit15: 1;
}BITS;
*/

//typedef void (*pFunction)(void);        /* ���庯��ָ�� */  //what the fuck!!! ybz  why ?


#endif