#include <iostream>
using namespace std;
void printbill(float totalamount, string day);


main() 
{
 string day;
 int totalamount;
 cout<<" Enter day:"<<endl;
 cin>>day;
 cout<<" Enter amount: "<<endl;
 cin>>totalamount;

 printbill(totalamount, day);
}
void printbill(float totalamount, string day)
{
 if(day == "sunday")
{
 float result, discount1;
 result = totalamount * 0.1;
 discount1 = totalamount - result;
 cout<<"your payable amount after discount is: "<<discount1 <<endl;
}
 if(day != "sunday")
{
 float result, discount2;
 result = totalamount * 0.05;
 discount2= totalamount -result;
 cout<<"your payable amount is: "<<discount2<<endl;
}

}
