#include<stdio.h>
int main()
{
float a,b,c;
printf("Enter the numbers:");
scanf("%f%f%f",&a,&b,&c);
if(a>b)
	{
	if(a>c)
	printf("Maximum=%d",a);
	else
	printf("Maximum=%f",c);
	}	
else
	{
	if(b>c)
	printf("Maximum=%f",b);
	else
	printf("Maximum=%f",c);	
	}		
return 0;
}
