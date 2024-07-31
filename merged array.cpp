//merged array
#include<stdio.h>
int main()
{
int a[100],b[50],m,n,i;
printf("Enter the number of elements of a array:");//a array starts
scanf("%d",m);
for(i=0;i<m;i++)
{
scanf("%d",a[i]);
}
printf("Enter the number of elements of b array:");//b array starts
scanf("%d",&n);
for(i=0;i<=n;i++)
{
	scanf("%d",b[i]);
}
//merged array starts
for(i=0;i<n;i++)
	{
	a[m+i]=b[i];
	}
printf("Merged array:-\n");
for(i=0;i<m+n;i++)
	{
		printf("%d",a[i]);
	}	
printf("\n");	
}
