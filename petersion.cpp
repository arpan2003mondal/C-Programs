//peterson number
#include<stdio.h>
int main()
{
int a,i,m,n,s,r;
printf("Enter A Number:");
scanf("%d",&n);
s=0;
a=n;
while(n!=0)
{
r=n%10;
n=n/10;
m=1;
for(i=1;i<=r;i++)
m=m*i;
s=s+m;
}
if(a==s)
printf("The number %d is Petersion.\n",a);
else
printf("The number %d is not Petersion.\n",a);
return 0;
}
