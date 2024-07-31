#include<stdio.h>
int main(){
int a[100],n,i,large;	
printf("Enter the number of elements :");
scanf("%d",&n);
for(i=0;i<n;i++){
	scanf("%d",&a[i]);
}
//to find largest
large=a[0];
for(i=0;i<n;i++){
	if(large<a[i]){
	large=a[i];	
	}
}
printf("The largest element in the array is :%d\n",large);
return 0;
}
