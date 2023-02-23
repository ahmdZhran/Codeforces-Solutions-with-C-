#include <iostream>
#include<iomanip>
using namespace std;
int main(){
   long long x,y;
   cin>>x >> y ;
   int r1 = x % 10;
   int r2 = y % 10;
   cout<<r1+r2;
}