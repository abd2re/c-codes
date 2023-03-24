#include <iostream>
using namespace std;

int main(){

    int id = 14000605;
    int* ptr = &id;

    cout << ptr << '\n';
    cout << *ptr << '\n';

    *ptr = 2012;

    cout << id;
    
    return 0;
}