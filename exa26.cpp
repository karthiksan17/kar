#include<iostream>
using namespace std;
class B;
class A
{
 public:
    void showB(B&);
 };
class B
{
 private:
   int b;
 public:
   B(){ b=0; }
   friend void A::showB(B& x);
};
void A::showB(B& x)
{
 cout << "B:b=" << x.b << endl;
}
int main()
{
A a;
B b;
a.showB(b);
return 0;
}
