#include<stdio.h>
int main(){
int j,i;
printf("Prime Numbers are:\n");
for(i=10;i<=150;i++){
	for(j=2;j<i;j++){
		if(i%j==0)
		break;
	}
if(j==i)
printf("%d,",i);	
}	
return 0;
}
