#include<stdio.h>
int main()
{
char name[50];
printf("Please enter the user name:-");
//scanf("%s",name);//inputs name upto space
//printf("Current user is %s\n",name);

//gets(name);//not use full
fgets(name,50,stdin);
printf("Current user is ");
puts(name);

char *can_change="hello world";
puts(can_change);
can_change="hello";
puts(can_change);

//char cannot_change[]="hello world";
//puts(cannot_change);
//cannot_change="hello";
//puts(cannot_change);

return 0;	
}
