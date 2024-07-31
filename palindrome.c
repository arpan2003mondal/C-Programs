//Palindrome Number
#include<stdio.h>
int main()
{
int a,n,s,r;
printf("Enter a value:-");
scanf("%d",&n);
s=0;
a=n;
while(n!=0)
{
r=n%10;
n=n/10;
s=s*10+r;
}
if(a==s)
	printf("%d is Palindrome Number\n.",a);
else
	printf("%d is not a Palindrome Number!\n",a);
return 0;
}
