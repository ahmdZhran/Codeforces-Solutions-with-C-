#include <iostream>
using namespace std;
int main(){
    int x , y;
    char s;
    cin>> x >> s >> y;
    switch(s){
        case '>':
            (x > y) ? cout<<"Right" : cout<<"Wrong";
            break;
        case '<':
            (x < y) ? cout<<"Right" : cout<<"Wrong";
            break;
        case '=':
            (x == y) ? cout<<"Right" : cout<<"Wrong";
            break;
    }
}
