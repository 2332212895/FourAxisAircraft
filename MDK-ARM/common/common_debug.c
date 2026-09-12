#include<common_debug.h>



//重定向printf函数
int fputc(int ch, FILE *f)
{
	HAL_UART_Transmit(&huart2, (uint8_t *)&ch, 1, 1000);
	return ch;
}




