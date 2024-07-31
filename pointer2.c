#include<stdio.h>
int main()
{
//int price,*ptr,**pptr;
int price=1006;
int *ptr=&price;
int **pptr=&ptr;
printf("%d\n",**(pptr));
printf("%d\n",*ptr);
return 0;
}
