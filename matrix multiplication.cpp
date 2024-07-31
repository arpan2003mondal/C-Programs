#include<stdio.h>
int main()
{
int a[10][10],b[10][10],c[10][10],i,j,m,n,p,q,k,sum;
printf("Enter the number row and column for first matrix:");
scanf("%d%d",&m,&n);
printf("Enter the number of row and colunm for second matrix:");
scanf("%d%d",&p,&q);
printf("Enter the elements of first matrix:\n");
for(i=0;i<m;i++){
	for(j=0;j<n;j++)
	scanf("%d",&a[i][j]);
}	
printf("Enter the elements of second matrix:\n");
for(i=0;i<p;i++){
	for(j=0;j<q;j++)
	scanf("%d",&b[i][j]);
}
//multiplication 
if(n==p){
for(i=0;i<m;i++){
	for(j=0;j<q;j++){
		sum=0;
		for(k=0;k<n;k++){
		sum=sum+a[i][k]*b[k][j];
		c[i][j]=sum;
	}
	}
}
printf("The new matrix by multiplication is:\n");
for(i=0;i<m;i++){
	for(j=0;j<q;j++)
	printf("%d ",c[i][j]);
	printf("\n");
}	
}
else
{
	printf("Matrix multiplication not possible!\n");
}
return 0;
}
