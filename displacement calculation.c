// 2)displacement calculation
#include<stdio.h>
void disp_calc(float a,float b,float c);
int main()
{
float u,t,f;
printf("Enter the values of u,t,f:-\n");
scanf("%f%f%f",&u,&t,&f);
disp_calc(u,t,f);
return 0;	
}

void disp_calc(float a,float b,float c)
{
float disp;
disp=(a*b)+(c*b*b)/2;
printf("Displacement is:%f\n",disp);	
}
