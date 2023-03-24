#include <iostream>
using namespace std;

int main(){
    int i = 10;
    while (i){
        int result = (i%2==0) ? i : 0;
        i--;
        cout << result << endl;
    }
    return 0;
}