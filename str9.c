#include<stdio.h>
int main()
{
 char *name[]={"ravi","ravindra","rajendralala"};
 printf("%s",(*(name+2)+7));
 return 0;
}

