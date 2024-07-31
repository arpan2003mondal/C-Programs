// velocity--v^2=u^2+2*f*s;
#include<stdio.h>
#include<math.h>
float calc_velocity(float,float,float);
int main()
{
float u,f,s,velo;
printf("Enter the values of u,f,s:-\n");
scanf("%f%f%f",&u,&f,&s);
velo= calc_velocity(u,f,s);
printf("Velocity is: %f\n",velo);
return 0;	
}

float calc_velocity(float a,float b,float c)
{
float v,V;
 V=(pow(a,2))+2*b*c;
 v=pow(V,1.0/2.0);
return v;	
}
