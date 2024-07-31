#include<stdio.h>
int fibo(int);
int main(){
int i;
int f=fibo(10);
for(i=0;i<20;i++){
	if(fibo(i)<100)
		printf("%d\t",fibo(i));
}
return 0;
}

// fibonacci
int fibo(int a){
	if((a==0)||(a==1))
	return(a);
	else
	return(fibo(a-1)+fibo(a-2));
}
