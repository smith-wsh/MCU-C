#include <reg52.h>
sbit Beep =  P1^5 ;
void Delay(unsigned int i) ;
/******************************************************************************
* 函数名         : main
* 函数功能		   : 主函数
* 输入           : 无
* 输出         	 : 无
******************************************************************************/

void main()
{
	Beep= 1;
	Delay(5);
	Beep= 0;
	Delay(5);
} 
/******************************************************************************
* 函数名         : Delay()
* 函数功能		   : 延时函数
* 输入           : 无
* 输出         	 : 无
******************************************************************************/

void Delay(unsigned int i)
{
	char j;
	for(i; i > 0; i--)
		for(j = 200; j > 0; j--);
}
