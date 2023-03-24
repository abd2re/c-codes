#include <iostream>
using namespace std;

int main(){
    
    int num = 9;
    int &fnum = num;
    int dnum = num;
    

    cout << &num << &fnum << &dnum;

    return 0;
}