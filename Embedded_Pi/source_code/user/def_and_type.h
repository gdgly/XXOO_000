#ifndef  DEF_AND_TYPE
#define  DEF_AND_TYPE


/*** General define  ***/
#define  ASSERT     assert_param
#define  _NOP()     __NOP();    //__no_operation(void)


/*** typedef ***/
//typedef    int8_t         s8      /* stm32f10x.h 已经定义 */
//typedef    uint8_t        u8 
//typedef    int16_t        s16    
//typedef    uint16_t       u16   
//typedef    int32_t        s32    
//typedef    uint32_t       u32
//typedef    int64_t        L64 
//typedef    uint64_t       uL64



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

typedef union
{
    u32 bit_fields;
    BITS bits;
}FLAG_BIT_FIELD_TYPE;

typedef enum
{
    OFF = 0,
    ON  = 1
}ON_OFF_TYPE;

typedef enum
{
    NORMAL = 0,
    ABNORMAL  = 1
}NORMAL_TYPE;

typedef enum
{
    FALSE = 0,
    TRUE
}TRUE_TYPE;


/* function poniter */
#define FUNC(pFunction) void (*pFunction)(void)  ;        /* 定义函数指针 */  


#endif