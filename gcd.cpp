//FIND GCD OF A GIVEN NUMBER
#include<stdio.h>
int main()
{
int a,b,i,c;
printf("Enter any two numbers:");
scanf("%d%d",&a,&b);
if(a>b)
c=b;
else
c=a;
for(i=c;i>=1;i--)
{
	if(a%i==0&b%i==0)
	break;
	}	
printf("GCD of %d,%d is:%d\n",a,b,i);
return 0;
}
