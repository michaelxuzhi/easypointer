#include <stdio.h>
void main()
{
		int *p,i,a[10];               
		p=a;																													/*  pָ���1��Ԫ��a[0]�ĵ�ַ*/
		for(i=0;i<10;i++)
		*p++=i;																												/*  i ��ֵ��0��9�ֱ�ֵ��a[0]��a[9]��*/
		for(i=0;i<10;i++)         
		printf("a[%d]=%d\n",i,*p++);																							/*��ӡa�����е�����*/
}