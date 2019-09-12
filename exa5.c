#include<stdio.h>
int main()
{
 int a[5]={10,20,30,40,50};
 int *p=a;
 int **pp=&p;
 printf("%d",**pp-a[2]);
return 0;
}
