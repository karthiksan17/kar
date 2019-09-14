#include<iostream>
using namespace std;
//int maximum(int,int,int);
 int min(int,int,int);
int main()
{
 int a,b,c;
 cout << "enter three integers:";
 cin >> a>> b >> c;
 //cout << "maximum is:" << maximum(a,b,c) <<endl; 
 cout <<" minimum is:"<< min(a,b,c) << endl;
 return 0; 
}


/*int maximum(int x,int y,int z)
 {
  int max=x;
  (max>y&&max>z)?max=x:(y>z)?max=y:max=z;
  return max;
 
 }*/
int min(int x,int y,int z)
{
 int min=x;
 (min<y&&min<z)?min=x:(y<z)?min=y:min=z;
 return min;
}
