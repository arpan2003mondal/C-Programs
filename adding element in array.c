#include<stdio.h>
void read_array(int a[10],int);
void display_array(int [10],int);
void add_element(int [10],int,int,int);
int main()
{
int a[10],n,add,posi;
printf("Enter the number of elements in the array:");
scanf("%d",&n);
printf("Enter the elements of the array:-\n");
read_array(a,n);
printf("Your array is:-\n");
display_array(a,n);
printf("\n");
printf("Enter the element you want to add and at which position:");
scanf("%d%d",&add,&posi);
add_element(a,n,add,posi);
return 0;
}

//array elements reading
void read_array(int a[10],int p){
	int i;
	for(i=0;i<p;i++){
		scanf("%d",&a[i]);
	}
}

//printing array elements
void display_array(int a[10],int p){
	int i;
	for(i=0;i<p;i++){
		printf("%d ",a[i]);
	}
}

//adding element in array
void add_element(int a[10],int p,int ad,int pos){
	int i;
	for(i=p+1;i>=pos-1;i--){
		a[i+1]=a[i];
	}
a[(pos-1)]=ad;	
printf("Array becomes:- ");	
for(i=0;i<p+1;i++){
printf("%d ",a[i]);	
}	
}
