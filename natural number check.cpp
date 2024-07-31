#include<stdio.h>
int main(){
int num;
printf("Enter any number :");
scanf("%d",&num);
if(num>0){
	if(num==1.0)
	printf("not natural number");
}
else
if(num<=0)
printf(" not natural number");
else
printf(" natural number");
return 0;
	
}

