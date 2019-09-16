/*#include<iostream>
using namespace std;
class addstring
{
 private:
 char str[100];
 public:
 addstring(){}
 addstring(char str[])
 {
  strcpy(this->str,str);
 }
 addstring operator+(addstring& s2)
 {
  addtsring s3;
  strcat(this->str,s2.str);
  strcpy(s3.str,this->str);
 return s3;
 }
};
int main()
{
 char str1[]="geeks";
 char str2[]="for geeks";
 addstring a1(str1);
 addstring a2(str2);
 addstring a3;
 a3=a1+a2;
 cout << "concatenation:" << a3.str << endl;
 return 0;
}*/
#include<iostream>
#include<string>
#include<string.h>
using namespace std;
class Str
{
private:
char s[100];
public:
Str(char s[])
{
strcpy(this->s,s);
}
Str(){}
Str operator +(Str const &o)
{
Str res;
strcat(this->s,o.s);
strcat(res.s,this->s);
return res;
}
void print()
{
cout<<s<<endl;
}
};
int main()
{
Str c1("karthik"),c2(" sanjay"),c3;
c3=c1+c2;
c3.print();
return 0;
}
