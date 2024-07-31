//PRIME NUBMBER
#include<stdio.h>
int main()
{
int a,i;
printf("Enter A Number:");
scanf("%d",&a);
for(i=2;i<a;i++)
{
if(a%i==0)
break;
}
if(i==a)
printf("%d is prime number\n.",a);
else
printf("%d is not a prime number.\n",a);
return 0;
}
