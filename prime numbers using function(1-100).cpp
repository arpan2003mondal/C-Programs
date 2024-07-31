#include<stdio.h>
void prime_number();
int main(){
printf("Prime numbers are:\n");
prime_number();
return 0;
}	
void prime_number(){
	int i,j;
for(i=1;i<=100;i++){
for(j=2;j<=i;j++){
	if(i%j==0){
	break;
}
}
if(j==i){
	printf("%d\t",i);
}
}
}
