#include<iostream>
using namespace std;
int boxvolume(int length=1,int width=1,int height=1);
int main()
{
 cout << "the default box volume is:" << boxvolume() 
      <<"\n\nthe volume of a box with length 10,\n" 
      << "width 1 and height 1 is:" << boxvolume(10) 
      << "\n\n the volume of box with length 10,\n" 
      << "width 5 and height 1 is:" << boxvolume(10,5) 
      << "\n\nthe volume of a box with length 10,\n" 
      << "width 5 and height 2 is :"<< boxvolume(10,5,2) 
      << endl;
return 0;
}
int boxvolume(int l,int w,int h)
{
 return l*w*h;
}
/*int square(int x){return x*x;}
double square(double y)
{return y*y;}
int main()
{
 cout << "the square of integer 7 is " << square(7);
 cout << "\nthe square of double 7.5 is " << square(7.5);
 cout << endl;
 return 0;
}*/


