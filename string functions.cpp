//string functions
#include<stdio.h>
#include<string.h>
int main(){
//char name[]="Arpita";//for length calculation
//int length=strlen(name);
//printf("length is %d\n",length);

char oldstring[]="Arpan Mondal.";//for string copy
char newstring[]="arpan";
printf("New string is: ");
puts(newstring);
strcpy(newstring,oldstring);
printf("After coping new string is: ");
puts(newstring);





return 0;
}
