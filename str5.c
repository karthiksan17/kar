#include<stdio.h>

void copy(char *s,char *t)
{
while(*s++=*t++);
}


void main()
{
char s[]="Hello karthik";
char t[20];int j=0;
copy(t,s);
printf("The copied string using function is %s\n",t);
}
