#include<stdio.h>
int main()
{float s,u,t,v,f;
printf("Enter the values of u,f,t");
scanf("%f%f%f",&u,&f,&t);
v=u+(f*t);
s=u*t+1./2*f*t*t;
printf("velocity=%f,displacement=%f",v,s);
return 0;
}
