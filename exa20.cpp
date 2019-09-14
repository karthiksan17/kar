#include<iostream>
using namespace std;
class parent
{
 protected:
 int id_protected;
};
class child:public parent
{
 public:
   void setid(int id)
   {
    id_protected=id;
   }
};
int main()
{
 child obj;
 return 0;
} 
