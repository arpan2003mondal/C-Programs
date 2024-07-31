#include<stdio.h>
void read_array(int a[10],int);
void display_array(int [10],int);
void search_element(int [10],int,int);
int main()
{
int a[10],n,s;
printf("Enter the number of elements in the array:");
scanf("%d",&n);
printf("Enter the elements of the array:-\n");
read_array(a,n);
printf("Your array is:-\n");
display_array(a,n);
printf("\n");
printf("Enter the element you want to find:");
scanf("%d",&s);
search_element(a,n,s);

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

//searching element in array
void search_element(int a[10],int p,int si){
	int i,locat;
	for(i=0;i<p;i++){
	if(si==a[i]){
		locat=i+1;
		break;
	}	
	}	
if(i<p)
	printf("Element is present in position %d\n",locat);
else
	printf("Element not found!!!!!\n");	
}
