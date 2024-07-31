#include<stdio.h>
void read_matrix(int a[10][10],int,int);void mul_matrix(int a[10][10],b[10][10],c[10],int,int);
void display_matrix(a[10][10],int,int);
int main{
void read_matrix(a[10][10],2,2);
void read_matrix(b[10][10],2,2);
void mul_matrix(a[10][10],b[10][10],c[10][10],2,2);
	
return 0;	
}

void read_matrix(int a[10][10],int,int){
int row,column,a[10][10],i,j;
printf("Enter the number of rows and columns:\n");
scanf("%d%d",&row,&column);
printf("Enter the elements of the matrix:\n");
for(i=0;i<row;i++){
	for(j=0;j<column;j++){
		scnaf("%d",&a[i][j]);
	}
}	
}

void mul_matrix(int a[10][10],int b[10][10],int c[10][10],int m,int n){
int i,j,k,a[10][10],b[10][10],c[10][10];
for(i=0;i<row;i++){
	for(j=0;j<column;j++){
		c[i][j]=0;
		for(k=0;k<column;k++){
		c[i][j]=c[i][j]+a[i][k]*b[k][j];	
		}
	}
}
}
for(i=0;i<row;i++){
	for(j=0;j<column;j++){
		pritnf("%d "c[i][j]);
		printf("\n");
	}
	
}
//void display_matrix(a[i][j],int m,int n){
	

