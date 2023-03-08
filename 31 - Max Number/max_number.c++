#include <iostream>
using namespace std;
int main() {
   int n,max_num=0;
    cin>> n;
  for(int i = 0 ; i < n; i++){
    int nums;
    cin>>nums;
    if(nums > max_num){
      max_num = nums;
    }
  }
  cout<<max_num;
    return 0;
}
