#include<iostream>
using namespace std;

void a(void);
void b(void);
void c(void);
int x=1;
int main()
{
 int x=5;
 cout<<"local x in outer scope of main is"<< x;
 {
  int x=7;
  cout << "local x in inner scope of main"<< x;
 }
cout<< "local x in outer scope of main is "<< x<<endl;


a();
b();
c();
a();
b();
c();
return 0;
}
void a(void)
{
 int x=25;
 cout <<endl << "local x in a is" <<x << "after entering a" <<endl;
 ++x;
 cout << "local x in a is" <<x <<"before exiting a" <<endl;
}
void b(void)
{
 static int x=50;
 cout <<endl << "local static x is" <<x << "on entering b" <<endl;
 ++x;
 cout << "local static x is" <<x <<"on exiting b" <<endl;
}
void c(void)
{
 cout << endl <<"global x is" <<x <<"on entering c"<<endl;
 x *=10;
 cout << "global x is "<<x<< "on exiting c"<<endl;
}

