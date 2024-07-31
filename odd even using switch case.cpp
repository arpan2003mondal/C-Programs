#include<stdio.h>
int main(){
int num;
printf("Enter the number :");
scanf("%d",&num);
switch(num%2){
	case 0:printf("Number is even.\n");
		break;
	case 1:printf("Number is odd.\n");
		break;
}	
return 0;
}
