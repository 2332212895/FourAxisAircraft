#ifndef COMMON_DEBUG_H
#define COMMON_DEBUG_H

#include "usart.h"
#include "stdio.h"
#include "stdarg.h"



//使用宏定义打印包含文件名和行号
#define debug_printf(format, ...) printf("[%s:%d]" format, __FILE__, __LINE__, ##__VA_ARGS__);




#endif


