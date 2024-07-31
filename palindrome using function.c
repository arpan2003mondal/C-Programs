#include<stdio.h>
void palindrome(int);
int main(){
	int num;
	printf("Enter any number:");
	scanf("%d",&num);
	palindrome(num);
	return 0;
}

void palindrome(int n){
	int r,a,s;
	a=n;
	s=0;
	while(n!=0){
	r=n%10;
	n=n/10;
	s=s*10+r;	
	}
if(a==s){
	printf("%d is Palindrome number.\n",a);
}
else
printf("%d is not Palindrome number!!\n",a);
}
