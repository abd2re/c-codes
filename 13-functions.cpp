#include <iostream>
using namespace std;

void giveage(int age=18){
    cout << "You are " << age <<  " years old\n";
}

int main(){
    giveage(23);
    giveage(13);
    giveage();
    return 0;
}