#include <iostream>
using namespace std;
int main() {
    int n,z,y=0;
  cin>>n;
  z = n;
  while(n){
   y = y * 10 + n%10;
    n/=10;
  }
 if(y == z){
   cout<<z<<endl<<"YES"<<endl;
 }else cout<<y<<endl<<"NO";
    return 0;
}
