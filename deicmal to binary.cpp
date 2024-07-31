#include<stdio.h>
int main(){
int deci,i,a[10] ;
printf("Enter any decimal number-\n");
scanf("%d",&deci);
for(i=0;deci>0;i++){
	a[i]=deci%2;
	deci=deci/2;
}   	
printf("The binary number of %d is-\n",deci);
for(i=i-1;i>=0;i--){
	printf("%d",a[i]);
}
return 0;
}
