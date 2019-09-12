#include<stdio.h>
int main()
{
 int a=5,b=6,c;
 c=a++ + ++b;
 printf("%d\n",c);
 printf("%d\n",a);
 return 0;
}
