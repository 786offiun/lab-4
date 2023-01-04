#include <iostream>
using namespace std;
  

 main() {
 string day;
 int totalamount;

while(true)
{ 
 cout<<" Enter day "<<endl;
 cin>>day;
 cout<<"enter your amount "<<endl;
 cin>>totalamount;

if(day == "sunday")
{
 int discount,payableamount;
 discount = totalamount * (0.1);
 payableamount = totalamount - discount;
 cout<<"your amount is: "<< payableamount<<endl;
}
 cout<<"you amount after discount is :"<<endl;
}

}
   