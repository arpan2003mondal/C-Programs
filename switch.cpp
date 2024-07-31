#include<stdio.h> 
int main()
{
float a,b,c;
char t;
printf("Enter the expression:");
scanf("%f%C%f",&a,&t,&b);	
//printf("1=addition,2=substration,3=multiplication,4=division\n");
//scanf("%d",&t);
switch(t) 
{	case '+':c=a+b;
		break;
	case '-':c=a-b;
		break;
	case '*':c=a*b;
		break;
	case '/':c=a/b;
		break;			
}
printf("Result=%f%c%f=%f",a,t,b,c);
printf("\n");
}
