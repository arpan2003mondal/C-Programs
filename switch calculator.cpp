#include<stdio.h> 
int main()
{
float a,b,c;
char t;
printf("Enter the expression:");
scanf("%f%c%f",&a,&t,&b);	
switch(t)
{
	case 1:c=a+b;
		break;
	case 2:c=a-b;
		break;
	case 3:c=a*b;
		break;
	case 4:c=a/b;
		break;			
}
printf("Result=%f%c%f=%f",a,t,b,c);
printf("\n");
}
