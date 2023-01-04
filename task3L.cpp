#include <iostream>
using namespace std;
void showresult(int marks);


main () {

int marks;
while(true)
{
 cout<<" enter your marks "<<endl;
 cin>>marks;
 showresult( marks);


}




}

void showresult(int marks)

{
 if(marks >50)
 {
 cout<<" passed"<<endl;
 }

 if(marks <50)
 {
 cout<<" jawanah mehnet kar"<<endl;
 }
 
if(marks == 50)
 {
 cout<<" well done"<<endl;
 }

}