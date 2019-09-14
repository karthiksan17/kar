#include<iostream>
using namespace std;
class Date
{
 public:
   date(int=1, int=1,int=1990);
   void print();
 private:
   int month;
   int day;
   int year;
};
Date::date(int m,int d,int y)
{
 month=m;
 day=d;
 year=y;
}
int main()
{
 Date date1(7,4,1993),date2;
 cout << "date1=";
 date1.print();
 cout << "\n date2=";
 date2.print();
 date2=date1;
 cout << "\n\nafter default memberwise copy,";
 date2.print();
 cout << endl;
 return 0;
}
