//sin value determination
#include<stdio.h>
#include<math.h>
int main()
{
int i;
float s,t,x,a;
printf("Enter the value of theta:");
scanf("%f",&a);
x=3.14*a/180;
s=0;
t=x;
i=0;
while(fabs(t)>0.00001)
	 {
 	s=s+t;
 	t=(-x*x)*t/((2*i+3)*(2*i+2));
 	i++;
	 }	
	printf("Value of sin(%f)=%f\n",a,s);
	return 0; 
}
