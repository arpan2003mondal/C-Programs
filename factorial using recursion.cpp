#include<stdio.h>
int fact(int);
int main()
{
int num;
printf("Enter a number:");
scanf("%d",&num);
int f=fact(num);
printf("Factorial of %d is:%d",num,f);
return 0;	
}

int fact(int n){
	if((n==0)||(n==1)){
		return(1);
	}
	else
	return(n*fact(n-1));
}
