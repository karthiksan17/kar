/*#include<iostream>
using namespace std;
void print(void);
int main()
{
 int n;
 cout << "enter upto numbers:";
 cin >> n;
 print();
 return 0;
}
void print(void)
{
 static int x=1;
 cout << x << endl;
 x++;
}*/
#include<iostream>
using namespace std;
static int a=1;
class num
{

public:
num()
{
cout<<a<<endl;
a++;
}
};



int main()
{

num o[100];	


return 0;
}
