#include<stdio.h>
#include<math.h>
void rootsquadratic();//prototype or declaration
int main(){
	rootsquadratic();//function calling
	return 0;
}
void rootsquadratic(){
int a,b,c,diss;//a-coefficient of x^2;b-coefficient of x;c-constant;
float p,q,s,m;//p,q are the roots.s-root of disscriminant.
printf("Enter the values of a,b,c:");
scanf("%d%d%d",&a,&b,&c);
diss=(b*b)-(4*a*c);
s=pow(diss,1/2);
//m=squt(-diss);
if(diss>=0){
	p=(-b+s)/2*a;
	q=(-b-s)/2*a;
	printf("roots are-%f,%f",p,q);
}
else{
p=-b/2*a;
q=-s/2*a;
printf("roots are %f,%f",p,q);	
}
}
