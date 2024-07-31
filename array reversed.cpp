//ARRAY
#include<stdio.h>
int main()
{
int a[10],n,i;
printf("Enter the value of your choice:");
scanf("%d",&n);
//printf("Arrays:-");
for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
printf("Arrays:-");
printf("\n");		
for(i=0;i<n;i++)
	{
	printf(" %d  ",a[i]);
	}	
printf("\n");
printf("Reverse order:-\n");
for(i=n-1;i>=0;i--)
	{
		printf(" %d ",a[i]);
	}
printf("\n");
return 0;
}
