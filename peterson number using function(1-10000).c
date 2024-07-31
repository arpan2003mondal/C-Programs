#include<stdio.h>
void peterson (int);
int fact_rec(int);
int main()
{
int i;
printf("Peterson numbers are:\n");
for(i=0;i<=10000;i++){
peterson(i);
}

//printf("Peterson numbers are:");
printf("\t");
return 0;
	
}

void peterson(int a){
int r,b,s,i;
b=a;
s=0;
while(a!=0){
r=a%10;
a=a/10;
int c=1;
for(i=1;i<=r;i++){
	c=c*i;
}
// int f=fact(r);
	s=s+c;
}
if(b==s)
printf("%d\n",b);
}

// factorial calculation
//int fact_rec(int k){
//	if(k==0||k==1){
////	return (1);
//	}
//	else{
//	return(k*fact_rec(k-1));
//	}
//}
