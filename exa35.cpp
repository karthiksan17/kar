#include<iostream>
using namespace std;
class base{
 public:
  base(){cout << "constructing base\n";}
 ~base(){cout << "destructing base\n";}
};
class derived:public base{
public:
derived()
{cout << "constructing base\n";}
~derived(){cout << "destructing base\n";}
};
int main(void)
{
 derived *d=new derived();
 base *b=d;
