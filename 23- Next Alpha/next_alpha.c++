#include <iostream>
using namespace std;

int main() {
    char ch;
    cin >> ch;
    if (ch == 'z') {
        cout << 'a' << endl;
    } else {
        int a = ch;
        a++;
        char cha = a;
        cout << cha << endl;
    }
    return 0;
}
