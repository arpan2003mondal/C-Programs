//addition of two matrices
#include<stdio.h>
int main(){
int a[10][10],b[10][10],c[10][10],i,j,m,n,p,q;//m-no of rows,n-no of columns(1st matrix)|p-rows,q-columns(2nd matrix)
printf("Enter the number of rows & column for first matrix:");
scanf("%d%d",&m,&n);
printf("Enter the number of rows & column for second matrix:");
scanf("%d%d",&p,&q);
//for first matrix
printf("Enter the elements of first matrix:\n");
for(i=0;i<m;i++){
	for(j=0;j<n;j++)
	scanf("%d",&a[i][j]);
	}
//for second matrix	
printf("Enter the elements of second matrix:\n");
for(i=0;i<p;i++){
	for(j=0;j<q;j++)
	scanf("%d",&b[i][j]);
}
if(m==p && n==q){
printf("The new matrix by addition is :\n");	
//for addition
for(i=0;i<n;i++){
	for(j=0;j<n;j++)
c[i][j]=a[i][j]+b[i][j];
}
for(i=0;i<m;i++){
	for(j=0;j<n;j++)
	printf("%d ",c[i][j]);
	printf("\n");
}
}
else
printf("Matrix addition not possible!\n");
return 0;
}
