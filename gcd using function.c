//gcd calculation using function
#include<stdio.h>
int cal_gcd(int,int);
int main()
{
int num1,num2,gcd;
printf("Enter two numbers:\n");
scanf("%d%d",&num1,&num2);
gcd=cal_gcd(num1,num2);
printf("GCD of given numbers is:%d",gcd);	
return 0;	
}

int cal_gcd(int a,int b){
	if(a%b==0){
		return (b);
	}
	else{
	return cal_gcd(b,(a%b));	
	}
}
