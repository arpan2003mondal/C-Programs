#include<stdio.h>
void leap_year(int);
int main(){
	int year;
	printf("Enter a year:");
	scanf("%d",&year);
	leap_year(year);
	return 0;
}

void leap_year(int y){
if(y%100==0){
	if(y%400==0)
		printf("%d is Leap Year.\n",y);
	else
		printf("%d is not Leap Year.\n",y);
		
}	
else
if(y%4==0){
		printf("%d is Leap Year.\n",y);
}
else
	printf("%d is not Leap Year.\n",y);
}

