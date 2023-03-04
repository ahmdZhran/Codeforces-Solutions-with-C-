#include <iostream>
using namespace std;
int main() {
   int x,z,y;
  cin>> x;
  z = x % 10;
  y = x / 10;
  (x % y == 0 || y % x == 0) ? cout<<"YES" :cout<< "NO";
    return 0;
}
