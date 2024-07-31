#include<stdio.h>
int main()
{
int n,i;
float s,t;
printf("Enter the number of terms:");
scanf("%d",&n);
t=1;
s=0;
for(i=0;i<n;i++){
	s=s+t;
	t=t/2.0;
}	
printf("%f\n",s);
return 0;
}
