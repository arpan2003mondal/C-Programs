#include<stdio.h>
void read_array(int a[10],int);
void display_array(int [10],int);
//void delete_element(int [10],int,int);
void delete_ele(int [10],int,int);
int main()
{
int a[10],n,_del;
printf("Enter the number of elements in the array:");
scanf("%d",&n);
printf("Enter the elements of the array:-\n");
read_array(a,n);
printf("Your array is:-\n");
display_array(a,n);
printf("\n");
printf("Enter the element you want to delete:");
scanf("%d",&_del);
delete_ele(a,n,_del);

	return 0;
}

//array elements reading
void read_array(int a[10],int p){
	int i;
	for(i=1;i<=p;i++){
		scanf("%d",&a[i]);
	}
}

//printing array elements
void display_array(int a[10],int p){
	int i;
	for(i=1;i<=p;i++){
		printf("%d ",a[i]);
	}
}

//deleting one element
//void delete_element(int a[10],int p,int del){
//int i;
//if(del<=p){
//for(i=del;i<=p;i++){
//	a[i]=a[i+1];
//}	
//printf("Array becomes:- ");	
//for(i=1;i<=p-1;i++){
//printf("%d ",a[i]);	
//}	
//}
//else
//printf("Element position not present!!\n");
//}

//delete element
void delete_ele(int a[10],int p,int del){
int c,find_pos,i;
for(i=1;i<=p;i++){
	if(del==a[i]){
	find_pos=i;
	c++;
	printf("Element position is %d\n",find_pos);
	}
	else
	printf("Element is not present in the array!!!");
}
if(c>0){
for(i=find_pos;i<=p;i++){
	a[i]=a[i+1];
}	
printf("Array becomes:- ");	
for(i=1;i<=p-1;i++){
printf("%d ",a[i]);	
} 
}
} 



