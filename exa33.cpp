#include<iostream>
using namespace std;
/*class base
{
 int x;
 public:
 virtual void fun()=0;
 int getx(){return x;}
 };
class derived:public base
{
 int y;
public:
 void fun(){cout << "fun() called";}
};
int main(void)
{
 derived d;
 d.fun();
 return 0;
}*/
class base{
public:
 virtual void show()=0;
};
class derived:public base
{/*
 public:
   void show(){cout << "in derived\n";}*/
};
int main(void)
{
 /*base *bp=new derived();
 bp->show();*/
 derived d;
 return 0;
}

