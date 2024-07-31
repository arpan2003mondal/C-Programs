#include<stdio.h>
int main()
{
int i;
char name[]={'A','R','P','A','N','\0'};
char first_name[]={"ARPAN"};
char last_name[]={"MONDAL"};
for(i=0;name[i]!='\0';i++){
	printf("%c",name[i]);
}
printf("\n");
for(i=0;first_name[i]!='\0';i++){
	printf("%c",first_name[i]);
}
printf(" ");
for(i=0;last_name[i]!='\0';i++){
	printf("%c",last_name[i]);
}
printf(".\n");
return 0;
}
