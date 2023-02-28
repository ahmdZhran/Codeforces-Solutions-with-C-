#include <iostream>
using namespace std;
int main() {
    double discount , price_after_discount,original_price;
    cin>> discount >> price_after_discount ;
    original_price = (100 / (100 - discount))*price_after_discount;
    cout<<original_price;
}
