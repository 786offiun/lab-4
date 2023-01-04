#include <iostream>
using namespace std;
void check (int age);

main () 
{
  int age;
  cout<<" enter your age "<<endl;
  cin>>age;
  check (age);
}

void check (int age)
{
if (age >= 18)
{
 cout<<" yes, yor are eligible"<<endl;
}

if (age <= 18)
{
 cout<<" no, you are not eligble"<<endl;
 
}


}



