//string length calculation
#include<stdio.h>
void count_length(char array[]);
int main()
{
char name[100];
//int i,count;
printf("Please enter the user name:-");	
fgets(name,100,stdin);
count_length(name);
return 0;
}



void count_length(char array[])
{
 int i,count=0;
for(i=0;array[i]!='\0';i++){
	count++;
}
printf("String length is %d\n",count-1);

}
