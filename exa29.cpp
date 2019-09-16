#include<iostream>
using namespace std;
/*template<typename T>
T mymax(T x,T y)
{
 return (x>y)?x:y;
}
int main()
{
 cout << mymax<int>(3,7) << endl;
 cout << mymax<double>(3.0,7.0) << endl;
 cout << mymax<char>('g','e') << endl;
 return 0;
}*/
int main()
{
 auto sum=[](auto a,auto b)
{
  return a+b;
 };
 cout << sum(1,6) << endl;
 cout << sum(1.0,5.6) << endl;
 cout << sum(string("geeks"),string(" for geeks")) << endl;
 return 0;
}
