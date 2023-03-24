#include <iostream>
using namespace std;

int main() {
    //int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int i : {10, 20, 30, 40, 50}) {
        cout << i << "\n";
    }
}