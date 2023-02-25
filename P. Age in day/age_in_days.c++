#include <iostream>
using namespace std;
int main(){
   int d;
   cin>> d;
   int year = d / 365;
   int day_remaining = d % 365;
   int month = day_remaining / 30;
   int day = day_remaining % 30;
   cout<<year<<" years"<<endl<<month<<" months"<<endl<<day<<" days"<<endl;

}
