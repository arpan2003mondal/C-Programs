#include<stdio.h>
int main()
{
	int a,*ptr,b;
	a=5;
	ptr=&a;
	b=&ptr;
	printf("%u,%d\n",b,*ptr);
return 0;
}
