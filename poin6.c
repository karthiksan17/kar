#include<stdio.h>
void ans(int n)
{
 if(n>0)
 {
  ans(n-1);
  printf("%d\n",n);
  ans(n-1);
 }
}
int main()
{
 int a;
 printf("enter number");
 scanf("%d",&a);
 ans(a);
 return 0;
}
