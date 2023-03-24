#include <iostream>
using namespace std;

int main(){

    int myNum[3] = {10, 20, 30};
    myNum[2] = 200;

    cout << myNum[0] << endl;

    for (int i : myNum){
        cout << i << endl;
    }

    int myNumSize = sizeof(myNum)/sizeof(int);

    for (int i=0; i<myNumSize; i++){
        cout << myNum[i]*2 << endl;
    }

    return 0;
}