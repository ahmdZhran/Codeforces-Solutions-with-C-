#include <iostream>
#include <string>
using namespace std;
int main(){
char x;
cin>>x;
if(x >= 'A' && x<='Z')
cout<<"ALPHA\n"
    "IS CAPITAL";
else if( x >= 'a' && x <='z')
cout<<"ALPHA\n"
    "IS SMALL";
else cout<<"IS DIGIT";
}
