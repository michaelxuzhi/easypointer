#include <stdio.h>
void main()
{
		int *p,i,a[10];               
		p=a;																													/*  p指向第1个元素a[0]的地址*/
		for(i=0;i<10;i++)
		*p++=i;																												/*  i 的值从0到9分别赋值给a[0]到a[9]中*/
		for(i=0;i<10;i++)         
		printf("a[%d]=%d\n",i,*p++);																							/*打印a数组中的数据*/
}