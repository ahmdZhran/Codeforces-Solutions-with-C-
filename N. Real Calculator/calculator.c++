#include <iostream> 
using namespace std;
int main(){
    int x , y ;
    char sign;
    tryAgain:
    cin>> x >> sign >> y;
    if(sign == '+')
    cout<< x + y <<endl;
    else if(sign == '-')
    cout<<x - y<<endl;
    else if(sign == '*')
    cout<<x * y <<endl;
    else if(sign == '/')
    cout<< x / y <<endl;
    goto tryAgain;
}
