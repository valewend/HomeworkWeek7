#include <iostream>
using namespace std;
int age(int);
int main()
{
 int year;
 for(int i = 1; i <= 3 ;i++)
 {
  cout << "Enter Year "<< i << " : ";
  cin  >> year;
  cout << "Age " << i;
  age(year);
 }
 return(0);
}

int age(int year)
{
  cout << " : " <<( 2563 - year) ;
  cout << endl;
  return(year);
}